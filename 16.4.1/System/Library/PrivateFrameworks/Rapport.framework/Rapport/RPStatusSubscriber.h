@class NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, RPSignedInUserProvider;

@interface RPStatusSubscriber : NSObject <NSSecureCoding, RPStatusUpdatableXPCClientInterface, RPStatusUpdatableSubscriber> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id<RPSignedInUserProvider> _userProvider;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *devices;
@property (retain, nonatomic) NSMutableDictionary *statusConfigurations;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL targetUserSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)_ensureXPCStarted;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_interrupted;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (id)_connectionWithClient:(id)a0 queue:(id)a1 userProvider:(id)a2 interruptionHandler:(id /* block */)a3 invalidationHandler:(id /* block */)a4;
- (id)identifierFromDevice:(id)a0;
- (void)subscribeToStatusUpdate:(id)a0 leeway:(double)a1 configurationFlags:(unsigned long long)a2 statusUpdateHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)unsubscribeToStatusUpdate:(id)a0 completion:(id /* block */)a1;
- (BOOL)wantStatus:(id)a0 FromDevice:(id)a1;
- (void)xpcStatusUpdatableGiveStatusUpdate:(id)a0 peerDevice:(id)a1 currentState:(int)a2 statusInfo:(id)a3;

@end
