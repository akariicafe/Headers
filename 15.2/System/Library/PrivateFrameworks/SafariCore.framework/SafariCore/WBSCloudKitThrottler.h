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

- (void)setPolicyString:(id)a0;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (void)_loadRecordOfPastOperations;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (void)_saveRecordOfPastOperations;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (id)description;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_throttlerIsActive;
- (void)reloadRecordOfPastOperations;
- (void)_pruneExpiredOrInvalidOperations;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (void)_addOperationAtDate:(id)a0;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (id)initWithPolicyString:(id)a0;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (double)_test_numberOfSecondsToMonitor;

@end
