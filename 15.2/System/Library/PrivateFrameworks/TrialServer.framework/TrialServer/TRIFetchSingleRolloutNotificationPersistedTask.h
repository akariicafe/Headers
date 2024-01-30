@class NSString, TRIPersistedTaskAttribution;

@interface TRIFetchSingleRolloutNotificationPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;

+ (id)descriptor;

@end
