@class NSMutableArray, NSString, PLSQLiteConnection, DRConfigMonitor, NSNumber, PLStorageOperator;

@interface PLSubmissions : NSObject

@property (retain) PLSQLiteConnection *connection;
@property (retain) NSString *request;
@property (retain) NSString *filterQuery;
@property (retain) NSString *onDemandTasking;
@property (retain) NSNumber *capValue;
@property (retain) DRConfigMonitor *taskingMonitor;
@property (weak) PLStorageOperator *storageOperator;
@property BOOL xpcActivityStarted;
@property (retain) NSMutableArray *submissionQueue;
@property double lastXPCActivityTimestamp;
@property double xpcActivityDelay;
@property (readonly) BOOL taskingStarted;

+ (id)sharedInstance;

- (void)submitWithTaskingConfig:(id)a0;
- (BOOL)taskingBlobDRExists;
- (id)getLastBatteryTimestampSystem;
- (id)getCurrentDRConfig;
- (void)setupDRTasking;
- (void)persistSubmissionInfo:(id)a0;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (void)taskingModeSafeguard;
- (void)fileCleanupWithRecord:(id)a0;
- (BOOL)internalSubmissionBehavior;
- (void)handleXPCActivityCallback:(id)a0;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (id)workQueue;
- (void)clearTaskingDRConfig;
- (void)initSubmissionQueue;
- (void)finishXPCActivity:(id)a0;
- (void)enableHangtracer;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)logOTAStatus:(id)a0;
- (short)submitReasonForToday;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)taskingCleanup;
- (BOOL)taskingBlobLegacyExists;
- (void)disableHangtracer;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (void)emitBlobDetectedEvent:(id)a0;
- (id)enqueueFileForUpload:(id)a0;
- (int)checkTaskingCompletionStatus;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)emitCollisionEvent:(id)a0;
- (void)registerUploadSchedulingActivity;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)rejectTaskingDRConfig;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)removeFileAtPath:(id)a0;
- (void)removeFileAtURL:(id)a0;
- (id)init;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (BOOL)taskingTypeSpecified;
- (void)stopDRTasking;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (id)generateCKRecordDictionaryWithRecord:(id)a0;
- (BOOL)taskingBlobExists;
- (void)taskingModeSetup;
- (void).cxx_destruct;
- (id)configFromMonitor:(id)a0;
- (void)sendSubmissionIssueSignature:(id)a0;
- (BOOL)fullModeSubmissionBehavior;
- (void)enqueueSubmissionRecord:(id)a0;

@end
