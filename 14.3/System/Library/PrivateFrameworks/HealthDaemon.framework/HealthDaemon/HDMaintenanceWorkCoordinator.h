@class NSString, HDAssertionManager, NSOperationQueue, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver> {
    NSOperationQueue *_maintenanceWorkQueue;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSLock *_lock;
}

@property BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)cancelAllOperations;
- (id)init;
- (void).cxx_destruct;
- (id)takeMaintenanceSuspensionAssertionForOwner:(id)a0;
- (void)enqueueMaintenanceOperation:(id)a0;

@end
