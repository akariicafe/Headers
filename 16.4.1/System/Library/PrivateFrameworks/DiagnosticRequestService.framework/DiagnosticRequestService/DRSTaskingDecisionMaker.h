@class NSTimeZone, NSString, DRSConfigPersistedStore, DRSTaskingCloudKitHelper, NSDate, DRSTaskingLimitingParameters;

@interface DRSTaskingDecisionMaker : NSObject

@property (retain, nonatomic) NSDate *currentReceivedDate;
@property (readonly, nonatomic) NSTimeZone *deviceTimezone;
@property (readonly, nonatomic) DRSTaskingLimitingParameters *limitingParameters;
@property (readonly, nonatomic) NSString *dbWorkingDirectoryPath;
@property (readonly, nonatomic) DRSConfigPersistedStore *configStore;
@property (readonly, nonatomic) BOOL enforceDate;
@property (readonly, nonatomic) BOOL enforceBuild;
@property (readonly, nonatomic) BOOL enforceSampling;
@property (readonly, nonatomic) BOOL enforceTeamHysteresis;
@property (readonly, nonatomic) BOOL enforceGlobalHysteresisAndCap;
@property (readonly, nonatomic) DRSTaskingCloudKitHelper *cloudKitHelper;

+ (BOOL)passesPercentAccept:(double)a0;

- (void)clientCompletedConfigUUID:(id)a0;
- (id)_hysteresisPredicate:(id)a0 config:(id)a1;
- (void)clientRejectsConfigUUID:(id)a0;
- (void)_rejectTaskingMessageDueToDisabledState:(id)a0 logTelemetry:(BOOL)a1;
- (void)_persistReceivedMetadata:(id)a0;
- (id)_configsPassingPerTeamHysteresis:(id)a0 logTelemetry:(BOOL)a1;
- (id)_teamTaskingsPassingBuild:(id)a0 logTelemetry:(BOOL)a1 allowWildcardBuild:(BOOL)a2;
- (id)_hysteresisPredicate:(id)a0;
- (BOOL)_configDoesPassTeamHysteresis:(id)a0 logTelemetry:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (void)_logConfigReceipt:(id)a0;
- (id)_teamTaskingsPassingDate:(id)a0 logTelemetry:(BOOL)a1;
- (id)acceptedConfigs:(id)a0 logTelemetry:(BOOL)a1 allowWildcardBuild:(BOOL)a2;
- (id)_configsPassingOverallHysteresis:(id)a0 logTelemetry:(BOOL)a1;
- (BOOL)reportToDecisionServer;
- (id)_configsPassingSampling:(id)a0 logTelemetry:(BOOL)a1;
- (id)acceptedConfigs:(id)a0 logTelemetry:(BOOL)a1;
- (id)initWithTimezone:(id)a0 limitingParameters:(id)a1 dbWorkingDirectoryPath:(id)a2 cloudKitHelper:(id)a3 enforceDate:(BOOL)a4 enforceBuild:(BOOL)a5 enforceSampling:(BOOL)a6 enforceTeamHysteresis:(BOOL)a7 enforceGlobalHysteresisAndCap:(BOOL)a8 errorOut:(id *)a9;
- (void).cxx_destruct;
- (id)acceptedCancels:(id)a0;

@end
