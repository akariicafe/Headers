@class TRIRolloutDeploymentPushNotification, TRIExperimentRollbackPushNotification;

@interface TRIPushNotification : TRIPBMessage

@property (readonly, nonatomic) int notificationOneOfCase;
@property (retain, nonatomic) TRIRolloutDeploymentPushNotification *rolloutNotification;
@property (retain, nonatomic) TRIExperimentRollbackPushNotification *experimentNotification;

+ (id)descriptor;

@end
