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

- (void)primaryAccountSignedOutWithCompletion:(id /* block */)a0;
- (void)primaryAccountSignedInWithCompletion:(id /* block */)a0;
- (void)diagnosticLogControl:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticShow:(id)a0 level:(int)a1 completion:(id /* block */)a2;
- (void)getIdentitiesWithCompletion:(id /* block */)a0;
- (id)_ensureXPCStarted;
- (id)initWithUserProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)diagnosticCommand:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)getIdentitiesWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)addOrUpdateIdentity:(id)a0 completion:(id /* block */)a1;
- (void)_interrupted;
- (void)_invalidated;
- (id)_XPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void)activateAssertionWithIdentifier:(id)a0;

@end
