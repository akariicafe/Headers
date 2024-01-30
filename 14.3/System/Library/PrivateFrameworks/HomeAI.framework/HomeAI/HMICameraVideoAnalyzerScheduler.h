@class NSString, HMFTimer, HMISystemResourceUsageMonitor, NSArray, MovingAverage, NSObject, NSPointerArray, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMICameraVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate>

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) HMFTimer *tick;
@property (readonly) NSPointerArray *internalAnalyzers;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property long long systemResourceUsageMonitorUsageLevel;
@property (readonly) double averageAnalysisTime;
@property (readonly) MovingAverage *averageAnalysisTimeMovingAverage;
@property (readonly) double averageTotalAnalysisTime;
@property (readonly) MovingAverage *averageTotalAnalysisTimeMovingAverage;
@property (readonly) double analysisFPSPreference;
@property (readonly) double analysisFPS;
@property (readonly) long long systemResourceUsageLevel;
@property (getter=isPaused) BOOL paused;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSArray *analyzers;
@property (readonly) unsigned long long maxConcurrentAnalyzers;
@property (readonly) long long activeAnalyzerCount;
@property (readonly) long long transcodingAnalyzerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)systemResourceUsageDidChangeTo:(long long)a0;
- (void)updateAnalysisFPS:(id)a0;
- (void)_compactInternalAnalyzers;
- (void)logState;
- (BOOL)inFullBypassMode;
- (void)requestDidEnd:(id)a0 outcome:(long long)a1;
- (void)registerAnalyzer:(id)a0;
- (void)removeAllAnalyzers;

@end
