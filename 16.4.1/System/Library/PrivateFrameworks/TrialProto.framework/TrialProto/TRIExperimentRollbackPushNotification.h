@class NSString;

@interface TRIExperimentRollbackPushNotification : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;

+ (id)descriptor;

@end
