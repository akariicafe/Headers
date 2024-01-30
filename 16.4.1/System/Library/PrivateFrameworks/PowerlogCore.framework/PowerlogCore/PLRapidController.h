@class NSString, DRConfigMonitor, NSDate;

@interface PLRapidController : NSObject

@property long long stage;
@property double samplingPercentage;
@property (retain) NSString *taskingRequestReason;
@property (retain) NSDate *logCreationStartDate;
@property (retain) NSDate *logCreationEndDate;
@property (retain) NSDate *logCreationResumeDate;
@property (retain) NSString *mdLogFilePath;
@property (retain) NSString *mdLogCompressedFilePath;
@property (retain) NSString *mssFilePath;
@property (retain) NSString *mssCompressedFilePath;
@property (retain) NSString *failureReason;
@property (retain) DRConfigMonitor *taskingMonitor;
@property (retain) NSString *configUUID;

+ (void)cleanup;
+ (id)sharedInstance;
+ (void)dropTablesFromDB:(id)a0 excludingSet:(id)a1;
+ (BOOL)randomBoolWithYesPercentage:(double)a0;
+ (BOOL)finishActivity:(id)a0 withStatus:(long long)a1;
+ (int)hangTypeFromStr:(id)a0;
+ (void)dropDataFromDB:(id)a0 withConfig:(id)a1;
+ (BOOL)diagnosticLogSubmissionEnabled;
+ (void)roundDataInDB:(id)a0 withConfig:(id)a1;
+ (id)allTablesInDB:(id)a0;
+ (id)appsToKeep:(id)a0;
+ (id)dataCollectionCriterion;
+ (BOOL)deferActivity:(id)a0;
+ (void)offsetTimestampsInDB:(id)a0 withConfig:(id)a1 withBaseTimestamp:(double)a2;
+ (id)trimConditionsForTables:(id)a0 trimDate:(id)a1;

- (BOOL)packageDB:(id)a0;
- (void)setMDLogCompressedFilePath;
- (void)setupDRTasking;
- (void)dropAppVersions:(id)a0;
- (void)resetActivity;
- (void)setLogCreationStartDate;
- (void)handleXPCActivityCallback:(id)a0;
- (void)completeTaskingConfig:(id)a0;
- (id)setupConnection;
- (void)setMDLogFilePath;
- (void)logSignpostDataToDB:(id)a0;
- (BOOL)prepareMSSLog;
- (void)rejectTaskingConfig:(id)a0;
- (void)dropDuplicateRows:(id)a0;
- (id)uploadLog:(id)a0;
- (void)trimAndFilterDB:(id)a0 withConfig:(id)a1;
- (void)addMDLogContext:(id)a0;
- (BOOL)copyDB;
- (id)packageAllLogs;
- (id)topAppsRunTime;
- (BOOL)shouldDoRapidCollection;
- (id)logGenerationStats;
- (id)generateContextDictionary:(id)a0;
- (void)addMSSContext:(id)a0;
- (void)logHangSignposts:(id)a0 toDB:(id)a1;
- (void)setMSSCompressedFilePath;
- (void)persistActivityState;
- (void)logToCALogGenerationStats:(id)a0;
- (void)registerDataCollectionActivity;
- (id)init;
- (void)setMSSFilePath;
- (void)stopDRTasking;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)initializeTaskingParams;
- (BOOL)preparePerfPowerlog:(id)a0 shouldDefer:(BOOL *)a1;
- (void)createHangTableInDB:(id)a0;
- (void)initializeSamplingPercentage;
- (void)logToCADataUploadState:(id)a0;
- (id)generateDummyPayload;
- (void).cxx_destruct;
- (id)configFromMonitor:(id)a0;
- (void)pruneDB:(id)a0 withConfig:(id)a1;

@end
