@class TRIPersistedTaskAttribution;

@interface TRIRecurrentScheduleFetchRollbacksPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) BOOL isRepeatedInstance;
@property (nonatomic) BOOL hasIsRepeatedInstance;

+ (id)descriptor;

@end
