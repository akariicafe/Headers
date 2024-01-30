@class NSString, PLSQLiteConnection, PLStorageOperator, NSNumber, NSMutableArray;

@interface PLSubmissions : NSObject

@property (retain) PLSQLiteConnection *connection;
@property (retain) NSString *request;
@property (retain) NSString *filterQuery;
@property (retain) NSString *onDemandTasking;
@property (retain) NSNumber *capValue;
@property (weak) PLStorageOperator *storageOperator;
@property BOOL xpcActivityStarted;
@property (retain) NSMutableArray *submissionQueue;
@property double lastXPCActivityTimestamp;
@property double xpcActivityDelay;
@property (readonly) BOOL taskingStarted;

+ (id)sharedInstance;

- (id)workQueue;
- (void)logOTAStatus:(id)a0;
- (id)enqueueFileForUpload:(id)a0;
- (id)init;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (void).cxx_destruct;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)taskingModeSetup;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)registerUploadSchedulingActivity;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)taskingModeSafeguard;
- (void)disableHangtracer;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (void)removeFileAtURL:(id)a0;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)sendSubmissionIssueSignature:(id)a0;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)enableHangtracer;
- (id)getLastBatteryTimestampSystem;
- (int)checkTaskingCompletionStatus;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (void)finishXPCActivity:(id)a0;
- (void)persistSubmissionInfo:(id)a0;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (void)handleXPCActivityCallback:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void)taskingCleanup;
- (void)removeFileAtPath:(id)a0;
- (short)submitReasonForToday;
- (void)fileCleanupWithRecord:(id)a0;
- (void)initSubmissionQueue;

@end
