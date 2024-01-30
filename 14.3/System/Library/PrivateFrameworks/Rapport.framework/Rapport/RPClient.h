@class NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface RPClient : NSObject {
    NSMutableSet *_assertions;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) unsigned int type;

+ (void)primaryAccountSignedIn;
+ (void)primaryAccountSignedOut;

- (void)_ensureXPCStarted;
- (void)activateAssertionWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidated;
- (void)addOrUpdateIdentity:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticCommand:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)diagnosticLogControl:(id)a0 completion:(id /* block */)a1;
- (void)getIdentitiesWithCompletion:(id /* block */)a0;
- (void)getIdentitiesWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)diagnosticShow:(id)a0 level:(int)a1 completion:(id /* block */)a2;
- (void)_interrupted;
- (void)primaryAccountSignedInWithCompletion:(id /* block */)a0;
- (void)primaryAccountSignedOutWithCompletion:(id /* block */)a0;
- (void)invalidate;

@end
