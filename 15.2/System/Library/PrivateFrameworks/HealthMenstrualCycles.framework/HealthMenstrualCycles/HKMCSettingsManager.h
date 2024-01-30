@class HKObserverSet, NSString, NSArray, NSNumber, NSDateComponents, NSDate, NSUserDefaults;

@interface HKMCSettingsManager : NSObject {
    NSUserDefaults *_menstrualCyclesDefaults;
    HKObserverSet *_observers;
    NSArray *_allSettingsToObserve;
    NSNumber *_unitTest_algorithmVersionMismatchOnWatch;
    NSNumber *_unitTest_watchMenstruationPredictionAlgorithmAttributesSupported;
    NSNumber *_unitTest_watchFertileWindowPredictionAlgorithmAttributesSupported;
    NSNumber *_unitTest_useLocalizedTextForVersionMismatchAndDisabledProjections;
    int _hiddenDisplayTypesNotifyToken;
    int _analysisSettingsNotifyToken;
    int _notificationSettingsNotifyToken;
    int _algorithmVersionMismatchSettingsNotifyToken;
}

@property (readonly, nonatomic) BOOL menstruationProjectionsEnabledAndSupported;
@property (readonly, nonatomic) BOOL fertileWindowProjectionsEnabledAndSupported;
@property (readonly, nonatomic) BOOL sensorBasedProjectionsEnabledAndMenstruationAndFertileWindowProjectionsEnabledAndSupported;
@property (retain, nonatomic) NSString *localizedTextForVersionMismatchAndDisabledProjectionsFromAlgorithmAttributes;
@property (readonly, nonatomic) BOOL notificationsEnabledAndSupported;
@property (nonatomic) BOOL menstruationProjectionsEnabled;
@property (nonatomic) BOOL fertileWindowProjectionsEnabled;
@property (nonatomic) long long minimumAnalysisStartDayIndex;
@property (nonatomic) BOOL menstruationProjectionsDisabledForVersionMismatch;
@property (nonatomic) BOOL fertileWindowProjectionsDisabledForVersionMismatch;
@property (retain, nonatomic) NSString *localizedTextForVersionMismatchAndDisabledProjections;
@property (nonatomic) BOOL sensorBasedProjectionsEnabled;
@property (nonatomic) unsigned long long menstruationProjectionsAlgorithmAttributesPhone;
@property (nonatomic) unsigned long long fertileWindowProjectionsAlgorithmAttributesPhone;
@property (nonatomic) unsigned long long menstruationProjectionsAlgorithmAttributesWatch;
@property (nonatomic) unsigned long long fertileWindowProjectionsAlgorithmAttributesWatch;
@property (nonatomic) BOOL menstruationNotificationsEnabled;
@property (nonatomic) BOOL fertileWindowNotificationsEnabled;
@property (readonly, nonatomic) BOOL notificationsEnabled;
@property (retain, nonatomic) NSDateComponents *menstruationNotificationTimeOfDay;
@property (retain, nonatomic) NSDateComponents *fertileWindowNotificationTimeOfDay;
@property (retain, nonatomic) NSDate *cycleTrackingOnboardingTileDismissedDate;

- (void)addObserver:(id)a0 queue:(id)a1;
- (void)removeObserver:(id)a0;
- (void)_startObservingDefaults;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_stopObservingAllDefaults;
- (BOOL)areAnyMenstruationPredictionAlgorithmAttributesUnsupported;
- (BOOL)areAnyFertileWindowPredictionAlgorithmAttributesUnsupported;
- (BOOL)_areAlgorithmAttributesOnPhone:(unsigned long long)a0 aheadOfAlgorithmAttributesOnWatch:(unsigned long long)a1;
- (BOOL)_forceDisableMenstruationProjectionsFromOngoingCycleFactors:(id)a0;
- (BOOL)_forceDisableFertileWindowProjectionsFromOngoingCycleFactors:(id)a0;
- (void)_setMenstruationProjectionsDisabledForVersionMismatchFromAlgorithmAttributes:(unsigned long long)a0;
- (void)_setFertileWindowProjectionsDisabledForVersionMismatchFromAlgorithmAttributes:(unsigned long long)a0;
- (id)_localizedTextForVersionMismatchFromOnboardedCycleFactors:(BOOL)a0 ongoingCycleFactors:(id)a1 useHeartRateInput:(BOOL)a2;
- (BOOL)algorithmVersionMismatchOnWatch;
- (void)setProjectionAttributesOnWatchFromHeartRateInputOnboarded:(BOOL)a0;
- (void)forceDisableProjectionsFromOnboardedCycleFactors:(BOOL)a0 ongoingCycleFactors:(id)a1 useHeartRateInput:(BOOL)a2;
- (void)_startObservingNPSNotifications;
- (void)_stopObservingNPSNotifications;
- (void)_analysisSettingsDidUpdate;
- (void)_notificationSettingsDidUpdate;
- (void)_hiddenDisplayTypesDidUpdate;
- (void)_algorithmVersionMismatchSettingsDidUpdate;
- (void)setHidden:(BOOL)a0 forDisplayTypeIdentifiers:(id)a1;
- (void)_migrateTestResultHiddenDisplayTypesIfNeeded;
- (void)_setTestDefaults:(id)a0;
- (void)_unitTest_setAlgorithmVersionMismatchOnWatchOverride:(id)a0;
- (void)_unitTest_setWatchMenstruationPredictionAlgorithmAttributesSupportedOverride:(id)a0;
- (void)_unitTest_setWatchFertileWindowPredictionAlgorithmAttributesSupportedOverride:(id)a0;
- (void)setHidden:(BOOL)a0 forDisplayTypeIdentifier:(id)a1;
- (void)setMenstruationTrackingDisplayTypesHidden:(BOOL)a0;
- (void)setFertilityTrackingDisplayTypesHidden:(BOOL)a0;
- (BOOL)hiddenForDisplayTypeIdentifier:(id)a0;
- (void)resetAllSettings;

@end
