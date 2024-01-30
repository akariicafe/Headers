@class RTDefaultsManager, NSMutableDictionary, RTTimerManager, RTTimer, NSObject;
@protocol OS_dispatch_queue;

@interface RTIntermittentGNSSManagerMetrics : NSObject

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) NSMutableDictionary *powerLogEventDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long mostRecentSignalSwitch;
@property (nonatomic) BOOL currentSessionOngoing;
@property (nonatomic) unsigned long long currentSessionNumLocationsReceived;
@property (nonatomic) double currentSessionDuration;
@property (nonatomic) double currentSessionTimeSinceLastSession;
@property (nonatomic) unsigned long long currentSessionActivationCriteria;
@property (nonatomic) unsigned long long currentSessionDeactivationCriteria;
@property (nonatomic) BOOL currentStreakOngoing;
@property (nonatomic) int currentStreakNumSessions;
@property (nonatomic) double currentStreakDuration;
@property (nonatomic) unsigned long long currentStreakActivationCriteria;
@property (nonatomic) unsigned long long currentStreakDeactivationCriteria;
@property (retain, nonatomic) RTTimer *streakMetricsTimer;

+ (id)signalCategoryToString:(unsigned long long)a0;

- (void)setup;
- (void)shutdown;
- (void)_setup;
- (void).cxx_destruct;
- (void)_clearDailyMetrics;
- (void)_clearSessionMetrics;
- (void)_clearStreakMetrics;
- (id)_collectDailyMetrics;
- (id)_collectSessionMetrics;
- (id)_collectStreakMetrics;
- (double)_getCurrentSessionDuration;
- (id)_getLastRegistrationDate;
- (void)_submitDailyMetricsToCoreAnalytics;
- (void)_submitSessionMetricsToCoreAnalytics;
- (void)_submitStreakMetricsToCoreAnalytics;
- (void)_updateMetricsForKey:(id)a0;
- (id)getLastRegistrationDate;
- (id)initWithDefaultsManager:(id)a0 timerManager:(id)a1;
- (void)processSignalSwitch:(unsigned long long)a0;
- (void)submitDailyMetricsToCoreAnalytics;
- (void)updateMetricsForKey:(id)a0;
- (void)updateSessionLocationCount:(unsigned long long)a0;

@end
