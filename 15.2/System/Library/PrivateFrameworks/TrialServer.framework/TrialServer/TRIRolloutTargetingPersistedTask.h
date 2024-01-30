@class NSString, TRIPersistedTaskAttribution;

@interface TRIRolloutTargetingPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL includeDependencies;
@property (nonatomic) BOOL hasIncludeDependencies;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) int triggerEvent;
@property (nonatomic) BOOL hasTriggerEvent;

+ (id)descriptor;

@end
