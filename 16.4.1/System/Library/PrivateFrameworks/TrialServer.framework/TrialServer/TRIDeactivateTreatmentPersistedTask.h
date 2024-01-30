@class NSString, TRIPBTimestamp;

@interface TRIDeactivateTreatmentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL failOnUnrecognizedExperiment;
@property (nonatomic) BOOL hasFailOnUnrecognizedExperiment;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) int triggerEvent;
@property (nonatomic) BOOL hasTriggerEvent;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) BOOL hasBmltBatchNotificationId;

+ (id)descriptor;

@end
