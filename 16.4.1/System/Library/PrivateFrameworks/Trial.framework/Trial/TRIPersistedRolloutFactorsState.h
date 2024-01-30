@class NSString;

@interface TRIPersistedRolloutFactorsState : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;

+ (id)descriptor;

@end
