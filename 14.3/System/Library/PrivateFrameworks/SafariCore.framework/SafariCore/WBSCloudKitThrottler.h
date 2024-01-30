@class NSArray, NSMutableArray;
@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject {
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
}

@property (weak, nonatomic) id<WBSCloudKitThrottlerDataStore> dataStore;

+ (id)_distributionBucketsFromConfiguration:(id)a0;
+ (BOOL)policyStringRepresentsValidPolicy:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPolicyString:(id)a0;
- (void)setPolicyString:(id)a0;
- (void)_loadRecordOfPastOperations;
- (void)_pruneExpiredOrInvalidOperations;
- (void)_addOperationAtDate:(id)a0;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (void)_saveRecordOfPastOperations;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (BOOL)_throttlerIsActive;
- (void)reloadRecordOfPastOperations;
- (double)_test_numberOfSecondsToMonitor;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;

@end
