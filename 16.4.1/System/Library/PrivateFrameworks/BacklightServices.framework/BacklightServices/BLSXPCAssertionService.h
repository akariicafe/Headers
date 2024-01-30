@class NSString, NSMapTable, NSMutableSet, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BLSXPCAssertionService : NSObject <BLSAssertionService, BLSXPCAssertionServiceClientInterface, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_requestQueue;
    BSServiceConnection *_connection;
    NSMapTable *_queue_assertions;
    NSMutableSet *_queue_assertionsToReacquire;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultEndpoint;

- (oneway void)restartAssertionTimeoutTimer:(id)a0;
- (oneway void)acquireAssertion:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void)dealloc;
- (id)init;
- (oneway void)cancelAssertion:(id)a0 withError:(id)a1;
- (void)replaceWithService:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)assertion:(id)a0 failedToAcquireWithError:(id)a1;
- (oneway void)assertionAcquired:(id)a0;
- (oneway void)assertionDidCancel:(id)a0 withError:(id)a1;
- (oneway void)assertionPaused:(id)a0;
- (oneway void)assertionResumed:(id)a0;
- (oneway void)assertionWillCancel:(id)a0;

@end
