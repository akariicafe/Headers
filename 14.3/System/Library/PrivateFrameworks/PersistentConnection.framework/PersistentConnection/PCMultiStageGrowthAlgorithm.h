@class NSString, NSDictionary, NSDate, NSObject;
@protocol OS_os_log;

@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {
    double _previousMaximumKeepAliveInterval;
    double _lastKeepAliveInterval;
    double _highWatermark;
    double _initialGrowthStageHighWatermark;
    double _initialGrowthStageLastAttempt;
    NSDate *_leaveSteadyStateDate;
    NSDate *_leaveMinimumIntervalFallbackStateDate;
    NSString *_algorithmName;
    NSObject<OS_os_log> *_logObject;
    int _lastKeepAliveAlgorithmMode;
    int _currentKeepAliveAlgorithmMode;
}

@property (nonatomic) int previousAction;
@property (readonly, nonatomic) double currentKeepAliveInterval;
@property (nonatomic) BOOL isServerOriginatedKeepAlive;
@property (nonatomic) double minimumKeepAliveInterval;
@property (nonatomic) double maximumKeepAliveInterval;
@property (nonatomic) double serverStatsExpectedKeepAliveInterval;
@property (nonatomic) double serverStatsMaxKeepAliveInterval;
@property (nonatomic) double serverStatsMinKeepAliveInterval;
@property (nonatomic) double lastSuccessfulKeepAliveInterval;
@property (nonatomic) BOOL minimumIntervalFallbackEnabled;
@property (nonatomic) BOOL usingServerStatsAggressively;
@property (nonatomic) double minimumIntervalFallbackStateTimeout;
@property (readonly, nonatomic) unsigned long long countOfGrowthActions;
@property (readonly, copy, nonatomic) NSDictionary *cacheInfo;
@property (readonly, nonatomic) int growthStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_loadDefaultValue:(double *)a0 forKey:(struct __CFString { } *)a1;
+ (void)_loadDefaults;

- (void)_processMinimumIntervalFallbackStateAction:(int)a0;
- (id)_stringForAction:(int)a0;
- (void)_fallbackToLastSuccessfulKeepAliveInterval;
- (void).cxx_destruct;
- (void)_processSteadyStateAction:(int)a0;
- (void)_processInitialGrowthAction:(int)a0;
- (void)_resetAlgorithmToInterval:(double)a0;
- (id)initWithCacheInfo:(id)a0 loggingIdentifier:(id)a1 algorithmName:(id)a2;
- (void)_resetAlgorithmToInterval:(double)a0 stage:(int)a1;
- (void)_setCurrentKeepAliveInterval:(double)a0;
- (BOOL)useIntervalIfImprovement:(double)a0;
- (void)_processRefinedShrinkAction:(int)a0;
- (void)_processBackoffAction:(int)a0;
- (void)processNextAction:(int)a0;
- (void)_processRefinedGrowthAction:(int)a0;
- (id)_stringForMode:(int)a0;
- (void)_adjustGrowthAlgorithmMode;
- (id)_stringForStage:(int)a0;
- (double)_steadyStateTimeout;
- (void)_processInitialShrinkAction:(int)a0;

@end
