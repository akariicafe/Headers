@class HMFTimer, NSArray, HMDHomeManager, NSHashTable, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDUserManagementOperationManager : HMFObject <HMFTimerDelegate> {
    id<HMFLocking> _lock;
    NSMutableArray *_operations;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMFTimer *saveTimer;
@property (readonly, nonatomic) NSHashTable *observedAccessories;
@property (readonly, nonatomic) NSArray *operations;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedManager;
+ (void)setSharedManager:(id)a0;

- (void)addOperation:(id)a0;
- (void)cancelAllOperations;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)shortDescription;
- (void)__save;
- (void)timerDidFire:(id)a0;
- (void)removeOperation:(id)a0;
- (id)initWithOperations:(id)a0;
- (void)removeOperationWithIdentifier:(id)a0;
- (void)__registerIfNeededForReachablityChangeNotifications;
- (void)_handleRemovedOperation:(id)a0;
- (void)_cleanPriorOperations:(id)a0;
- (void)_handleAddedOperation:(id)a0;
- (void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)a0;
- (void)__executeOperation:(id)a0;
- (void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)a0;
- (void)__removeOperationAndProcessDependantOperations:(id)a0;
- (id)_filteredOperationsWithDependency:(id)a0;
- (id)_filteredOperationsForAccessory:(id)a0;
- (void)_handleAccessoryIsReachable:(id)a0;
- (void)_reallySave;
- (void)operationCancelled:(id)a0;
- (void)operationStoppedBackingOff:(id)a0;

@end
