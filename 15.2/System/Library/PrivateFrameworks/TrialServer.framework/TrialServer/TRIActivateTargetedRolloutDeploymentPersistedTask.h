@class NSString, TRIPersistedTaskAttribution;

@interface TRIActivateTargetedRolloutDeploymentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) BOOL hasFactorPackSetId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;

+ (id)descriptor;

@end
