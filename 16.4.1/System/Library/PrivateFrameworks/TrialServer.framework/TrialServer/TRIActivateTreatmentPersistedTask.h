@class TRITaskOptions, NSString, TRIPBTimestamp, TRIPersistedTaskAttribution, TRIPersistedTaskCapabilityModifier;

@interface TRIActivateTreatmentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (nonatomic) BOOL hasStartTimestamp;
@property (retain, nonatomic) TRIPBTimestamp *endTimestamp;
@property (nonatomic) BOOL hasEndTimestamp;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) BOOL requiresTreatmentInstallation;
@property (nonatomic) BOOL hasRequiresTreatmentInstallation;
@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) BOOL hasCapabilityModifier;
@property (retain, nonatomic) TRITaskOptions *taskOptions;
@property (nonatomic) BOOL hasTaskOptions;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) BOOL hasBmltBatchNotificationId;

+ (id)descriptor;

@end
