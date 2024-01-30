@class NSString, HDProfile, NSMutableDictionary, _HDAWDPeriodicAction, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HDAWDSubmissionManager : NSObject <HDHealthDaemonReadyObserver, HDDiagnosticObject, HDAnalyticsSubmissionCoordinatorDelegate> {
    NSMutableDictionary *_serverConnectionsByComponentId;
    NSMutableArray *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    _HDAWDPeriodicAction *_fitnessDailyAction;
    BOOL _started;
    int _fitnessDailyCollectionEnabledNotifyToken;
}

@property (copy, nonatomic) id /* block */ testHandler;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (BOOL)runTask:(id)a0 error:(id *)a1;
- (id)_sleepSamplesBeforeDate:(id)a0 days:(long long)a1 startDate:(id *)a2 endDate:(id *)a3 calendar:(id)a4;
- (BOOL)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
- (id)_exerciseMinuteHoursFromDate:(id)a0 toDate:(id)a1 error:(id *)a2;
- (long long)_countMobileAssetsDownloadedPast24Hours;
- (BOOL)aggregateDatabaseSizeStats:(id)a0;
- (id)_aFibSamplesBetweenStartDate:(id)a0 endDate:(id)a1;
- (BOOL)_isBradycardiaDetectionEnabled;
- (id)_hourlyStatisticsCollectionForStartDate:(id)a0 endDate:(id)a1 quantityType:(id)a2 statisticsOptions:(unsigned long long)a3 error:(id *)a4;
- (id)_hasWatchSourcesWithTransaction:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_updateDeltaToInt64:(long long)a0 forKey:(id)a1 profile:(id)a2 currentDate:(id)a3 timeInterval:(double)a4 error:(id *)a5;
- (long long)_countRecordedTachogramsBetweenStartDate:(id)a0 endDate:(id)a1;
- (void)dealloc;
- (id)_ecgClassificationsBetweenStartDate:(id)a0 endDate:(id)a1;
- (BOOL)_updateDatabaseStatsEvent:(id)a0 profile:(id)a1 currentDate:(id)a2;
- (BOOL)_enumerateAppleStandHoursFromDate:(id)a0 toDate:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (void)_resetMobileAssetsDownloadedPast24Hours;
- (BOOL)_computeAndSubmitSleepAlarmStatistics:(BOOL)a0;
- (void)_queue_start;
- (id)_activitySummaryForActivityCacheIndex:(long long)a0 error:(id *)a1;
- (BOOL)_computeAndSubmitDatabaseStatsMetric:(BOOL)a0;
- (void)daemonReady:(id)a0;
- (BOOL)isFitnessDailyCollectionEnabled;
- (long long)_manuallyEnteredTypesCountWithTransaction:(id)a0 error:(id *)a1;
- (id)diagnosticDescription;
- (long long)_nonAppleSourcesCountWithTransaction:(id)a0 error:(id *)a1;
- (long long)_nonAppleSourcesWithDataSince:(id)a0 transaction:(id)a1 error:(id *)a2;
- (long long)_countAnalyzedTachogramsPast24Hours;
- (BOOL)_addRowCountDeltaToEvent:(id)a0 profile:(id)a1 currentDate:(id)a2;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (id)_sleepNightEventFromSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 calendar:(id)a3;
- (long long)_int64ForKeyPrefix:(id)a0 profile:(id)a1 date:(id *)a2 error:(id *)a3;
- (void)_registerForFitnessDailyCollection;
- (void)resetTask:(id)a0;
- (id)motionToken;
- (void)updateFitnessDailyCollectionEnabled;
- (BOOL)_submitMetric:(id)a0 container:(id)a1 connection:(id)a2 force:(BOOL)a3;
- (BOOL)_computeAndSubmitHeartDailyAnalyticsWithAction:(id)a0 force:(BOOL)a1;
- (BOOL)_isTachycardiaDetectionEnabled;
- (long long)_deletedRowCountWithTransaction:(id)a0 error:(id *)a1;
- (id)_statisticsForTimeDeltas:(id)a0;
- (void)_resetCountAnalyzedTachogramsPast24Hours;
- (BOOL)_setInt64:(long long)a0 keyPrefix:(id)a1 profile:(id)a2 date:(id)a3 error:(id *)a4;
- (id)_ecgAlgorithmVersion;
- (long long)_countOfObjectsWithSQLQuery:(id)a0 database:(id)a1 error:(id *)a2 bindingHandler:(id /* block */)a3;
- (long long)_objectRowCountWithTransaction:(id)a0 afterRowId:(long long)a1 error:(id *)a2;
- (id)_actions;
- (BOOL)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)a0 force:(BOOL)a1;
- (long long)_countActiveEnergySamplesBetweenStartDate:(id)a0 endDate:(id)a1;
- (BOOL)_computeAndSubmitFitnessDailyReportWithAction:(id)a0 force:(BOOL)a1;
- (void)_queue_updateFitnessDailyCollectionEnabled;
- (long long)_CDACountWithTransaction:(id)a0 error:(id *)a1;
- (id)_sleepConsistencyEventForMonthPriorToDate:(id)a0 calendar:(id)a1;
- (id)_generateHeartDailyAnalyticsWithStartDate:(id)a0 endDate:(id)a1;
- (id)_serverConnectionForComponentId:(unsigned int)a0;

@end
