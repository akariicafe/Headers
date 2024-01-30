@class NSArray, NSMutableArray;
@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject {
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
}

@property (weak, nonatomic) id<WBSCloudKitThrottlerDataStore> dataStore;

+ (BOOL)policyStringRepresentsValidPolicy:(id)a0;
+ (id)_distributionBucketsFromConfiguration:(id)a0;

- (void)_pruneExpiredOrInvalidOperations;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (void)_loadRecordOfPastOperations;
- (BOOL)_throttlerIsActive;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (void)_addOperationAtDate:(id)a0;
- (double)_test_numberOfSecondsToMonitor;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (void)_saveRecordOfPastOperations;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (void)reloadRecordOfPastOperations;
- (id)init;
- (id)description;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (void).cxx_destruct;
- (void)setPolicyString:(id)a0;
- (id)initWithPolicyString:(id)a0;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;

@end
