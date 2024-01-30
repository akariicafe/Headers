@class NSString, NSMutableArray;

@interface HKOutstandingFetchOperationManager : NSObject <HKFetchOperationDelegate> {
    BOOL _needsRebalanceFetchOperations;
    NSMutableArray *_pendingNormalPriorityFetchOperations;
    NSMutableArray *_pendingHighPriorityFetchOperations;
    NSMutableArray *_activeFetchOperations;
}

@property (nonatomic) long long maxConcurrentFetchOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedOperationManager;
+ (void)setSharedOperationManager:(id)a0;

- (void).cxx_destruct;
- (BOOL)_noHighPriorityActiveOperations;
- (void)_executeFetchOperation:(id)a0;
- (void)_fillActiveFetchOperations;
- (void)_logOperationCompletion:(id)a0;
- (void)_logOperationStart:(id)a0;
- (void)_rebalanceFetchOperations;
- (BOOL)_removeFetchOperationFromActiveOperations:(id)a0;
- (BOOL)_removeFetchOperationFromPendingOperations:(id)a0;
- (void)_setNeedsRebalanceFetchOperations;
- (void)addFetchOperation:(id)a0;
- (void)addFetchOperations:(id)a0;
- (void)fetchOperationDidUpdatePriority:(id)a0;
- (id)initWithMaxConcurrentFetchOperations:(long long)a0;
- (void)removeFetchOperation:(id)a0;
- (void)removeFetchOperations:(id)a0;

@end
