@class RTReachabilityManager, RTDefaultsManager, RTDuetKnowledgeStore, RTMotionActivityManager;

@interface RTDeviceMetricManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDuetKnowledgeStore *duetKnowledgeStore;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTReachabilityManager *reachabilityManager;

+ (id)getDateIntervalFromDictionary:(id)a0;
+ (id)getDictionaryFromDateInterval:(id)a0;
+ (id)getMetricsDictionaryForMetricType:(id)a0 intervals:(id)a1 bins:(id)a2;
+ (id)getReachabilityDefaultStringForTopN:(unsigned long long)a0 reachability:(unsigned long long)a1;
+ (id)getStringForMetricType:(id)a0 topN:(long long)a1;

- (void)onDailyMetricsNotification:(id)a0;
- (void)_onDailyMetricsNotification:(id)a0;
- (void)setup;
- (void)_setup;
- (void).cxx_destruct;
- (id)getLongestStationaryMotionIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (BOOL)_addToHeapForReachability:(unsigned long long)a0 endDate:(id)a1 dateInterval:(id)a2;
- (BOOL)_addToHeapForReachability:(unsigned long long)a0 endDate:(id)a1 dateIntervals:(id)a2;
- (id)_flippedDateIntervalsFromIntervals:(id)a0 originalDateInterval:(id)a1 error:(id *)a2;
- (id)_getDeviceMetricsWithError:(id *)a0;
- (id)_getFromHeapDateIntervalsForReachability:(unsigned long long)a0;
- (id)_getLongestIntervalWithStreamType:(long long)a0 topN:(unsigned long long)a1 dateInterval:(id)a2 flipDateIntervals:(BOOL)a3 error:(id *)a4;
- (id)_getLongestStationaryMotionIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (void)_onReachabilityChanged:(id)a0;
- (BOOL)_submitDeviceMetricsWithError:(id *)a0;
- (id)getLongestDeviceChargingIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)getLongestDeviceLockedIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)getLongestDeviceNotChargingIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)getLongestWiFiConnectionIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)initWithDefaultsManager:(id)a0 motionActivityManager:(id)a1 reachabilityManager:(id)a2;
- (void)onReachabilityChanged:(id)a0;

@end
