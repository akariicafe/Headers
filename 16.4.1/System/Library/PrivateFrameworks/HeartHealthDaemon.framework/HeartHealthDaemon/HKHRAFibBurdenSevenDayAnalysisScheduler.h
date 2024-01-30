@class HDProfile, HKHRAFibBurdenSevenDayAnalysisManager, HKFeatureStatusManager, HDKeyValueDomain;
@protocol HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate, HKHRDatabaseAnalysisScheduler, HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm;

@interface HKHRAFibBurdenSevenDayAnalysisScheduler : NSObject <HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate, HKHRDatabaseAnalysisSchedulerDelegate> {
    HDProfile *_profile;
    HKHRAFibBurdenSevenDayAnalysisManager *_analysisManager;
    HKFeatureStatusManager *_featureStatusManager;
    id<HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting> _featureStatusInspector;
    id<HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm> _alarm;
    id<HKHRDatabaseAnalysisScheduler> _scheduler;
    HDKeyValueDomain *_syncedKeyValueDomain;
}

@property (weak, nonatomic) id<HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate> delegate;

- (void)initialAnalysisAlarmDidFireWithAlarm:(id)a0;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 featureStatusManager:(id)a2 featureStatusInspector:(id)a3 alarm:(id)a4 scheduler:(id)a5 syncedKeyValueDomain:(id)a6;
- (void)_reportAnalysisResultsToDelegate:(id)a0 featureStatus:(id)a1;
- (id)initWithProfile:(id)a0 featureStatusManager:(id)a1 featureStatusInspector:(id)a2 analyzer:(id)a3;
- (void)_logAnalysisResult:(long long)a0 error:(id)a1;
- (id)_performAnalysisWithFeatureStatus:(id)a0 error:(id *)a1;
- (void)_saveLastAnalysisCompletedDateForResult:(id)a0;
- (BOOL)_determineIfAnotherAnalysisRunIsNecessaryWithAnalysisResult:(long long)a0;
- (BOOL)_shouldAllowFeatureStatus:(id)a0;
- (void)forceAnalysis;
- (void)analysisSchedulerDidFire:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
