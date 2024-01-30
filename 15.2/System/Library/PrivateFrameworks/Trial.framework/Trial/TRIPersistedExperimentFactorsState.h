@class NSString;

@interface TRIPersistedExperimentFactorsState : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;

+ (id)descriptor;

@end
