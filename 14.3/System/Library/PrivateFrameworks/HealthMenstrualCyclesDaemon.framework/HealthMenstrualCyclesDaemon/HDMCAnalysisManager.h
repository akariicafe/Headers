@class NSString, HKObserverSet, _HKDelayedOperation, NSArray, HKMCAnalysis, HAMenstrualAlgorithmsAnalysis, HDProfile, NSObject, HKMCSettingsManager, HDFeatureAvailabilityManager;
@protocol OS_dispatch_queue;

@interface HDMCAnalysisManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKMCSettingsManagerObserver, HDFeatureAvailabilityExtensionObserver> {
    HDProfile *_profile;
    HKObserverSet *_observers;
    HKObserverSet *_userInitiatedObservers;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_analyzeOperation;
    HKMCAnalysis *_currentAnalysis;
    HKMCSettingsManager *_settingsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
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

- (id)_queue_analyzeNowWithError:(id *)a0;
- (void)_test_setAlgorithmsCycles:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void).cxx_destruct;
- (void)_forceDisablePeriodProjectionsFromOngoingCycleFactors:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_userCharacteristicsDidChange:(id)a0;
- (void)dealloc;
- (void)_queue_enqueueMaintenanceOperationIfNeeded;
- (void)settingsManagerDidUpdateAnalysisSettings:(id)a0;
- (void)_forceDisableFertileWindowProjectionsFromOngoingCycleFactors:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)_startObserving;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_calendarDayDidChange:(id)a0;
- (void)settingsManagerDidUpdateAlgorithmVersionMismatchSettings:(id)a0;
- (void)_test_setAlgorithmsAnalysis:(id)a0;
- (id)_analysisWithAlgorithmsAnalysis:(id)a0 algorithmsCycles:(id)a1 recentSymptoms:(unsigned long long)a2 recentBasalBodyTemperature:(id)a3 lastLoggedDayIndex:(id)a4 lastMenstrualFlowDayIndex:(id)a5;
- (void)_queue_analyzeOperationDidExecute;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)addObserver:(id)a0 queue:(id)a1 userInitiated:(BOOL)a2;
- (id)initWithProfile:(id)a0 settingsManager:(id)a1 featureAvailabilityManager:(id)a2;
- (void)_checkToForceDisablePredictionsFromOngoingCycleFactors:(id)a0;
- (id)analyzeWithError:(id *)a0;
- (void)_runMaintenanceOperation;
- (void)_queue_analyzeIfNeeded;
- (void)_setLocalizedTextForVersionMismatchFromOngoingCycleFactors:(id)a0;

@end
