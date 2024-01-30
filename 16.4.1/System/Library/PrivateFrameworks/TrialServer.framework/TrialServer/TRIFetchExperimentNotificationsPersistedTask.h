@class TRIPersistedTaskAttribution, TRIPBTimestamp, NSMutableArray;

@interface TRIFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *earliestTimestamp;
@property (nonatomic) BOOL hasEarliestTimestamp;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) unsigned long long namespacesArray_Count;
@property (nonatomic) BOOL rollbacksOnly;
@property (nonatomic) BOOL hasRollbacksOnly;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL limitedCarryOnly;
@property (nonatomic) BOOL hasLimitedCarryOnly;

+ (id)descriptor;

@end
