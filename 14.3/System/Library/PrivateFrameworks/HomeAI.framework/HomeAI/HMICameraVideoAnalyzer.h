@class HMIVideoAnalyzer, NSDate, NSObject, HMICameraVideoAnalyzerRequest, HMICameraVideoAnalyzerConfiguration, NSMutableArray, NSSet, HMICameraVideoAnalyzerScheduler, HMICameraVideoAnalyzerHistory, HMIHomePersonManager, HMFUnfairLock, NSString, HMIAnalysisService, NSArray, NSUUID;
@protocol OS_dispatch_queue, HMICameraVideoAnalyzerDelegate;

@interface HMICameraVideoAnalyzer : HMFObject <HMFLogging> {
    int _flagCounts[7];
    int _outcomeCounts[3];
}

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) NSMutableArray *internalPendingRequests;
@property (retain) NSDate *lastRequestSubmissionTime;
@property (readonly) HMICameraVideoAnalyzerHistory *history;
@property (readonly) HMIVideoAnalyzer *streamAnalyzer;
@property (retain) HMICameraVideoAnalyzerRequest *currentRequest;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMICameraVideoAnalyzerScheduler *scheduler;
@property unsigned long long mediaIntegritySequenceNumber;
@property (readonly) BOOL skipSequentialMediaIntegrityCheck;
@property BOOL analysisInProgress;
@property BOOL inErrorState;
@property BOOL inBypassMode;
@property (retain) HMICameraVideoAnalyzerConfiguration *configuration;
@property (retain, nonatomic) HMIAnalysisService *remoteAnalysisService;
@property BOOL sessionEnded;
@property (readonly, getter=shouldUploadVideoAnalysisEvent) BOOL uploadVideoAnalysisEvent;
@property (getter=shouldSaveVideoFramesToDisk) BOOL saveVideoFramesToDisk;
@property (readonly) NSArray *pendingRequests;
@property (readonly) BOOL isActive;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } currentSessionDuration;
@property (readonly) BOOL transcodeFragment;
@property (weak) id<HMICameraVideoAnalyzerDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (retain) HMIHomePersonManager *homePersonManager;
@property (retain) NSSet *externalPersonManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (long long)confidenceThatEventOccurred:(long long)a0 events:(long long)a1 annotationScores:(id)a2;
+ (id)queryVersionInformation;
+ (id)classHierarchyMap;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)analyzeFragment:(id)a0;
- (void)clearPendingFragments;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1;
- (void)processPendingRequests;
- (void)_markPendingRequestsWithFlag:(long long)a0;
- (id)_outcomeCountsAsString;
- (id)_flagCountsAsString;
- (void)_scheduleRequest:(id)a0;
- (void)_handleError:(long long)a0 request:(id)a1;
- (unsigned long long)pendingRequestsCount;
- (void)_handleError:(long long)a0 request:(id)a1 description:(id)a2;
- (void)_handleDidNotAnalyzeRequest:(id)a0 resultCode:(long long)a1;
- (BOOL)_shouldContinueAnalyzingRequest:(id)a0 resultCode:(long long *)a1;
- (void)_analyzeRequest:(id)a0;
- (BOOL)_checkRequest:(id)a0;
- (void)_predictRequest:(id)a0;
- (void)_analyzeRequestRemotely:(id)a0 retryOnConnectionInterruption:(BOOL)a1;
- (void)_analyzeRequestLocally:(id)a0;
- (void)_handleError:(long long)a0 request:(id)a1 underlyingError:(id)a2;
- (void)_handleDidAnalyzeRequest:(id)a0 withResult:(id)a1;
- (void)_handleDidNotAnalyzeRequest:(id)a0 withResult:(id)a1 error:(id)a2;
- (void)_willAnalyzeRequest:(id)a0;
- (void)_handleError:(long long)a0 request:(id)a1 description:(id)a2 underlyingError:(id)a3;
- (void)_analyzeRequestFramesLocally:(id)a0;
- (void)_finishEncodingSessionForRequest:(id)a0 withResult:(id)a1;
- (void)_sendAnalyticsEventForRequest:(id)a0 outcome:(long long)a1 result:(id)a2 error:(id)a3;
- (void)_requestDidEnd:(id)a0 outcome:(long long)a1;
- (void)_notifyDidAnalyzeRequest:(id)a0 withResult:(id)a1;
- (void)_handleDidNotAnalyzeRequest:(id)a0 resultCode:(long long)a1 error:(id)a2;
- (void)_notifyDidNotAnalyzeRequest:(id)a0 withResult:(id)a1;
- (void)_enterErrorState;
- (void)_notifyDidFailAnalysisForRequest:(id)a0 withError:(id)a1;
- (BOOL)_analyzeRequestFrames:(id)a0;
- (void)_handleDidAnalyzeRequest:(id)a0;
- (BOOL)_analyzeVideoFrame:(id)a0 request:(id)a1 result:(id *)a2 error:(id *)a3;
- (void)saveActivityZoneresultsInJSON:(id)a0 result:(id)a1 videoFrame:(id)a2 motionDetection:(id)a3;
- (id)_analyzeFrame:(id)a0 request:(id)a1 error:(id *)a2;
- (id)filterDetectedObjects:(id)a0 request:(id)a1 result:(id)a2;

@end
