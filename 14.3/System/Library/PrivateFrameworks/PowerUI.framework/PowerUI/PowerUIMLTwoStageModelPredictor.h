@class NSString, PowerUITrialManager, MLModel, NSDate, NSObject;
@protocol OS_os_log, _CDLocalContext, _DKKnowledgeQuerying;

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor>

@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_os_log> *statusLog;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (retain, nonatomic) NSDate *deadline;
@property (nonatomic) double lastEngagementResult;
@property (nonatomic) double lastDurationResult;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadModelLock;
@property (readonly, retain, nonatomic) MLModel *engageModel;
@property (readonly, retain, nonatomic) MLModel *durationModel;
@property (retain, nonatomic) NSDate *pluginDate;
@property (nonatomic) double pluginBatteryLevel;
@property (nonatomic) double adjustedDuration;
@property (nonatomic) double threshold;
@property (nonatomic) double minInputChargeDuration;

- (unsigned long long)modelVersion;
- (unsigned long long)engagementModelVersion;
- (void).cxx_destruct;
- (double)chargingDecision:(unsigned long long)a0 withPluginDate:(id)a1 withPluginBatteryLevel:(double)a2 forDate:(id)a3 withLog:(id)a4;
- (id)getPluginEventsBefore:(id)a0 withMinimumDuration:(double)a1;
- (id)getInputFeatures:(double)a0 events:(id)a1 pluginBatteryLevel:(unsigned long long)a2 timeFromPlugin:(double)a3 pluginDate:(id)a4 pluginHour:(double)a5 withLog:(id)a6;
- (double)loadMinInputChargeDuration;
- (double)getHourBinID:(id)a0 forHourBin:(unsigned long long)a1;
- (unsigned long long)durationModelVersion;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)a0;
- (double)loadAdjustedHours;
- (id)getMacRoutineModelInputFeatures:(double)a0 events:(id)a1 pluginBatteryLevel:(unsigned long long)a2 timeFromPlugin:(double)a3 pluginDate:(id)a4 pluginHour:(double)a5 withLog:(id)a6;
- (id)arrayWithShape:(id)a0 values:(id)a1 type:(long long)a2;
- (id)timeStringFromDate:(id)a0;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1 withKnowledgeStore:(id)a2 withTrialManager:(id)a3;
- (void)deleteCompiledModels;
- (void)resetSavedDeadline;
- (double)loadThreshold;
- (void)loadTrial;
- (double)adjustedChargingDecision:(unsigned long long)a0 withPluginDate:(id)a1 withPluginBatteryLevel:(double)a2 forDate:(id)a3 forStatus:(BOOL)a4;
- (id)durationModelBoltID;
- (id)engagementModelBoltID;

@end
