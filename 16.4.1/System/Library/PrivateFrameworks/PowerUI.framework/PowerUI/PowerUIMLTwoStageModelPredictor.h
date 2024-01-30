@class NSObject, NSString, PowerUITrialManager, NSURL, NSDate, NSNumber, MLModel;
@protocol _CDLocalContext, OS_os_log, _DKKnowledgeQuerying;

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor>

@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (retain, nonatomic) NSDate *deadline;
@property (nonatomic) double lastEngagementResult;
@property (nonatomic) double lastDurationResult;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadModelLock;
@property (retain, nonatomic) NSURL *compiledClassifier;
@property (retain, nonatomic) NSURL *compiledRegressor;
@property (nonatomic) long long modelExecutionPath;
@property (retain, nonatomic) NSNumber *modelUpdateIterations;
@property (readonly, retain, nonatomic) MLModel *engageModel;
@property (readonly, retain, nonatomic) MLModel *durationModel;
@property (retain, nonatomic) NSDate *pluginDate;
@property (retain, nonatomic) NSDate *lastModelUpdate;
@property (nonatomic) double pluginBatteryLevel;
@property (nonatomic) double adjustedDuration;
@property (nonatomic) double threshold;
@property (nonatomic) double minInputChargeDuration;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_os_log> *statusLog;

- (unsigned long long)predictorType;
- (id)timeStringFromDate:(id)a0;
- (unsigned long long)modelVersion;
- (id)getEngagementStreamEvents:(id)a0 forDataVersion:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)updateModels;
- (id)adjustDeadlineForReengagement;
- (double)adjustedChargingDecision:(unsigned long long)a0 withPluginDate:(id)a1 withPluginBatteryLevel:(double)a2 forDate:(id)a3 forStatus:(BOOL)a4;
- (id)arrayWithShape:(id)a0 values:(id)a1 type:(long long)a2;
- (struct PowerUIModelQueryResult { BOOL x0; double x1; double x2; })chargingDecision:(unsigned long long)a0 withPluginDate:(id)a1 withPluginBatteryLevel:(double)a2 forDate:(id)a3 withLog:(id)a4;
- (id)compileModel:(id)a0;
- (id)convertInputFeaturesToNeuralFeatures:(id)a0;
- (void)deleteCompiledModels;
- (void)deleteUpdatedModels;
- (id)durationModelBoltID;
- (unsigned long long)durationModelVersion;
- (id)engagementModelBoltID;
- (unsigned long long)engagementModelVersion;
- (double)getHourBinID:(id)a0 forHourBin:(unsigned long long)a1;
- (id)getInputFeaturesWithPluginDate:(id)a0 withPluginBatteryLevel:(double)a1 forDate:(id)a2 withLog:(id)a3;
- (id)getPluginEventsBefore:(id)a0 withMinimumDuration:(double)a1;
- (id)getPluginEventsBefore:(id)a0 withMinimumDuration:(double)a1 withMinimumPlugoutBatteryLevel:(double)a2;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1 withKnowledgeStore:(id)a2 withTrialManager:(id)a3;
- (double)loadAdjustedHoursForModel:(id)a0;
- (void)loadDurationModelFromURL:(id)a0;
- (void)loadEngagementModelFromURL:(id)a0;
- (double)loadMinInputChargeDuration;
- (double)loadThresholdForModel:(id)a0;
- (void)loadTrial;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)a0;
- (void)resetSavedDeadline;

@end
