@class NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, RPSignedInUserProvider;

@interface RPClient : NSObject {
    NSMutableSet *_assertions;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id<RPSignedInUserProvider> _userProvider;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL targetUserSession;
@property (nonatomic) unsigned int type;

+ (void)primaryAccountSignedIn;
+ (void)primaryAccountSignedOut;

- (void)setAutoMapping:(BOOL)a0 completion:(id /* block */)a1;
- (id)_ensureXPCStarted;
- (void)queryDeviceToListenerMapping:(id)a0 deviceID:(id)a1 completion:(id /* block */)a2;
- (void)primaryAccountSignedInWithCompletion:(id /* block */)a0;
- (void)createEndpointToDeviceMapping:(id)a0 deviceID:(id)a1 endpointID:(id)a2 completion:(id /* block */)a3;
- (void)diagnosticCommand:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)primaryAccountSignedOutWithCompletion:(id /* block */)a0;
- (void)activateAssertionWithIdentifier:(id)a0;
- (void)_interrupted;
- (void)clientCreateDeviceMappingInternal:(int)a0 applicationService:(id)a1 deviceID:(id)a2 endpointID:(id)a3 completion:(id /* block */)a4;
- (void)addOrUpdateIdentity:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticLogControl:(id)a0 completion:(id /* block */)a1;
- (void)getIdentitiesWithCompletion:(id /* block */)a0;
- (id)init;
- (void)invalidate;
- (id)initWithUserProvider:(id)a0;
- (id)_XPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void)createDeviceToListenerMapping:(id)a0 deviceID:(id)a1 completion:(id /* block */)a2;
- (void)_invalidated;
- (void)getIdentitiesWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)diagnosticShow:(id)a0 level:(int)a1 completion:(id /* block */)a2;

@end
