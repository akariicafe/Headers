@class NSString, NSDate;

@interface PLRapidController : NSObject

@property double samplingPercentage;
@property (retain) NSDate *logCreationStartDate;
@property (retain) NSDate *logCreationEndDate;
@property (retain) NSString *mdLogFilePath;
@property (retain) NSString *mdLogCompressedFilePath;
@property (retain) NSString *failureReason;

+ (id)sharedInstance;
+ (void)cleanup;
+ (id)contextDictionary;
+ (id)dataCollectionCriterion;
+ (BOOL)finishActivity:(id)a0 withStatus:(long long)a1;
+ (BOOL)diagnosticLogSubmissionEnabled;
+ (BOOL)randomBoolWithYesPercentage:(double)a0;
+ (void)dropTablesFromDB:(id)a0 excludingSet:(id)a1;
+ (void)dropDataFromDB:(id)a0 tableColumnMap:(id)a1;
+ (id)trimConditionsForTables:(id)a0 trimDate:(id)a1;
+ (BOOL)offsetTimestampsInDB:(id)a0 forTables:(id)a1 withBaseTimestamp:(double)a2;
+ (id)allTablesInDB:(id)a0;
+ (id)queryToDropColumns:(id)a0 fromTable:(id)a1;
+ (int)hangTypeFromStr:(id)a0;
+ (BOOL)deferActivity:(id)a0;

- (void)handleXPCActivityCallback:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerDataCollectionActivity;
- (void)initializeSamplingPercentage;
- (void)logToCADataUploadState:(id)a0;
- (BOOL)shouldDoRapidCollection;
- (BOOL)prepareMicroDiagnosticLog;
- (void)logToCALogGenerationStats;
- (id)uploadMDLog;
- (void)setMDLogFilePath;
- (void)setMDLogCompressedFilePath;
- (void)logSignpostDataToDB:(id)a0;
- (void)logHangSignposts:(id)a0 toDB:(id)a1;
- (void)createHangTableInDB:(id)a0;

@end
