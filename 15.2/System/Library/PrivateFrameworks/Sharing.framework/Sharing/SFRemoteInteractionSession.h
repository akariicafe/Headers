@class SDRemoteInteractionAgent, NSXPCConnection, SFDevice, NSObject, SFSession;
@protocol OS_dispatch_queue;

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFSession *_remoteSession;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SDRemoteInteractionAgent *agent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ remoteTextEventHandler;
@property (copy, nonatomic) id /* block */ textSessionDidBegin;
@property (copy, nonatomic) id /* block */ textSessionDidEnd;
@property (copy, nonatomic) id /* block */ textSessionDidChange;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (id)description;
- (void)remoteInteractionSessionRemoteTextEvent:(id)a0;
- (void)remoteInteractionSessionTextSessionDidBegin:(id)a0;
- (void)remoteInteractionSessionTextSessionDidEnd:(id)a0;
- (void)remoteInteractionSessionTextSessionDidChange:(id)a0;
- (void)_ensureXPCStarted;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)_sessionHandleEvent:(id)a0;
- (void)_sessionStart;
- (void)sendPayload:(id)a0;
- (void)_sessionSendPayload:(id)a0;

@end
