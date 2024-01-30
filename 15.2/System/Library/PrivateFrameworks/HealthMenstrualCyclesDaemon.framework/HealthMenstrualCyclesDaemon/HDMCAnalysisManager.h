@class NSString, HKObserverSet, _HKDelayedOperation, NSArray, HKMCAnalysis, HKFeatureStatusManager, HKCalendarCache, HDProfile, NSObject, HKMCSettingsManager, HDFeatureAvailabilityManager, HAMenstrualAlgorithmsAnalysis;
@protocol OS_dispatch_queue;

@interface HDMCAnalysisManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKMCSettingsManagerObserver, HDFeatureAvailabilityExtensionObserver> {
    HDProfile *_profile;
    HKObserverSet *_observers;
    HKObserverSet *_userInitiatedObservers;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_analyzeOperation;
    HKMCAnalysis *_lock_currentAnalysis;
    HKMCSettingsManager *_settingsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HKFeatureStatusManager *_heartRateFeatureStatusManager;
    HKCalendarCache *_calendarCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _needsMaintenenceAnalysis;
    BOOL _maintenanceOperationQueued;
    HAMenstrualAlgorithmsAnalysis *_test_algorithmsAnalysis;
    NSArray *_test_algorithmsCycles;
}

@property (readonly, copy, nonatomic) HKMCAnalysis *currentAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)addObserver:(id)a0 queue:(id)a1 userInitiated:(BOOL)a2;
- (id)analyzeWithError:(id *)a0;
- (void)_runMaintenanceOperation;
- (void)removeObserver:(id)a0;
- (void)_test_setAlgorithmsCycles:(id)a0;
- (id)_analysisWithAlgorithmsAnalysis:(id)a0 algorithmsCycles:(id)a1 recentSymptoms:(unsigned long long)a2 recentBasalBodyTemperature:(id)a3 lastLoggedDayIndex:(id)a4 lastMenstrualFlowDayIndex:(id)a5 numberOfDailySleepHeartRateStatisticsForPast100Days:(long long)a6 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(long long)a7 useHeartRateInput:(BOOL)a8 isHeartRateInputOnboarded:(BOOL)a9;
- (void)_forceDisablePredictionsFromOngoingCycleFactors:(id)a0 useHeartRateInput:(BOOL)a1 isHeartRateInputOnboarded:(BOOL)a2;
- (void)_queue_enqueueMaintenanceOperationIfNeeded;
- (void).cxx_destruct;
- (void)_test_setAlgorithmsAnalysis:(id)a0;
- (void)settingsManagerDidUpdateAlgorithmVersionMismatchSettings:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)settingsManagerDidUpdateAnalysisSettings:(id)a0;
- (id)_queue_computeAnalysisWithDatabaseAccessibilityAssertion:(id)a0 error:(id *)a1;
- (void)_calendarDayDidChange:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (id)initWithProfile:(id)a0 settingsManager:(id)a1 featureAvailabilityManager:(id)a2 heartRateFeatureAvailabilityManager:(id)a3 calendarCache:(id)a4;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)_queue_analyzeIfNeeded;
- (void)dealloc;
- (void)_startObserving;
- (void)_userCharacteristicsDidChange:(id)a0;
- (id)_queue_analyzeNowWithError:(id *)a0;
- (id)_takeAccessibilityAssertion;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;

@end
