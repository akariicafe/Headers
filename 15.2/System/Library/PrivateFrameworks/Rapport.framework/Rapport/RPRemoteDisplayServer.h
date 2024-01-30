@class NSArray, NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayServer : NSObject <NSSecureCoding, RPAuthenticatable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_sessions;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int internalAuthFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ sessionStartHandler;
@property (copy, nonatomic) id /* block */ sessionEndedHandler;
@property (retain, nonatomic) NSArray *allowedMACAddresses;
@property (retain, nonatomic) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly, nonatomic) int passwordTypeActual;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ showPasswordHandler;
@property (copy, nonatomic) id /* block */ hidePasswordHandler;
@property (copy, nonatomic) id /* block */ promptForPasswordHandler;

- (void)encodeWithCoder:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void)_ensureXPCStarted;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)tryPassword:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)remoteDisplayShowPassword:(id)a0 flags:(unsigned int)a1;
- (void)remoteDisplayHidePasswordWithFlags:(unsigned int)a0;
- (void)remoteDisplayStartServerSessionID:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (void)remoteDisplaySessionEndedWithID:(id)a0;
- (void)remoteDisplayReceivedEventID:(id)a0 event:(id)a1 options:(id)a2 sessionID:(id)a3;
- (void)remoteDisplayReceivedRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3 sessionID:(id)a4;

@end
