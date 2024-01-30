@class NSString, HDAssertionManager, HDMaintenanceOperation, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver, HDMaintenanceOperationDelegate, HDDiagnosticObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_maintenanceWorkQueue;
    BOOL _suspended;
    NSMutableArray *_pendingOperations;
    HDMaintenanceOperation *_activeOperation;
    NSObject<OS_dispatch_source> *_timeoutSource;
    HDAssertionManager *_assertionManager;
}

@property (readonly) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)operationDidFinish:(id)a0;
- (void)cancelAllOperations;
- (id)diagnosticDescription;
- (void)enqueueMaintenanceOperation:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)takeMaintenanceSuspensionAssertionForOwner:(id)a0;

@end
