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

- (void)logOTAStatus:(id)a0;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (void)deferXPCActivity:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)handleXPCActivityCallback:(id)a0;
- (void)setupDRTasking;
- (BOOL)internalSubmissionBehavior;
- (void)removeFileAtURL:(id)a0;
- (int)checkTaskingCompletionStatus;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (id)workQueue;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void)emitCollisionEvent:(id)a0;
- (void)taskingModeSafeguard;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (BOOL)taskingBlobDRExists;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)disableHangtracer;
- (id)enqueueFileForUpload:(id)a0;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (void)sendSubmissionIssueSignature:(id)a0;
- (short)submitReasonForToday;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)stopDRTasking;
- (void)enableHangtracer;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)emitBlobDetectedEvent:(id)a0;
- (void).cxx_destruct;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (void)persistSubmissionInfo:(id)a0;
- (id)configFromMonitor:(id)a0;
- (id)init;
- (void)clearTaskingDRConfig;
- (id)getCurrentDRConfig;
- (void)taskingCleanup;
- (BOOL)taskingBlobLegacyExists;
- (void)fileCleanupWithRecord:(id)a0;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)initSubmissionQueue;
- (void)rejectTaskingDRConfig;
- (id)getLastBatteryTimestampSystem;
- (void)removeFileAtPath:(id)a0;
- (void)registerUploadSchedulingActivity;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)taskingModeSetup;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)finishXPCActivity:(id)a0;

@end
