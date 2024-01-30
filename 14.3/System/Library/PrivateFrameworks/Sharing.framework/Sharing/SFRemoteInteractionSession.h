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

- (void)_ensureXPCStarted;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)remoteInteractionSessionRemoteTextEvent:(id)a0;
- (void)remoteInteractionSessionTextSessionDidBegin:(id)a0;
- (void)remoteInteractionSessionTextSessionDidEnd:(id)a0;
- (void)remoteInteractionSessionTextSessionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_invalidated;
- (id)description;
- (void)_invalidate;
- (void)_sessionHandleEvent:(id)a0;
- (void)_sessionStart;
- (void)sendPayload:(id)a0;
- (void)_sessionSendPayload:(id)a0;
- (void)_interrupted;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
