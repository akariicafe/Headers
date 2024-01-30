@class HKObserverSet, NSString, NSArray, NSDateComponents, NSDate, NSUserDefaults;

@interface HKMCSettingsManager : NSObject {
    NSUserDefaults *_menstrualCyclesDefaults;
    HKObserverSet *_observers;
    NSArray *_allSettingsToObserve;
    int _hiddenDisplayTypesNotifyToken;
    int _analysisSettingsNotifyToken;
    int _notificationSettingsNotifyToken;
    int _algorithmVersionMismatchSettingsNotifyToken;
}

@property (nonatomic) BOOL menstruationProjectionsEnabled;
@property (nonatomic) BOOL fertileWindowProjectionsEnabled;
@property (nonatomic) long long minimumAnalysisStartDayIndex;
@property (nonatomic) BOOL menstruationProjectionsDisabledForVersionMismatch;
@property (nonatomic) BOOL fertileWindowProjectionsDisabledForVersionMismatch;
@property (retain, nonatomic) NSString *localizedTextForVersionMismatchAndDisabledProjections;
@property (nonatomic) BOOL menstruationNotificationsEnabled;
@property (nonatomic) BOOL fertileWindowNotificationsEnabled;
@property (readonly, nonatomic) BOOL notificationsEnabled;
@property (retain, nonatomic) NSDateComponents *menstruationNotificationTimeOfDay;
@property (retain, nonatomic) NSDateComponents *fertileWindowNotificationTimeOfDay;
@property (retain, nonatomic) NSDate *cycleTrackingOnboardingTileDismissedDate;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)_startObservingDefaults;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_startObservingNPSNotifications;
- (void)_stopObservingAllDefaults;
- (void)_stopObservingNPSNotifications;
- (void)_analysisSettingsDidUpdate;
- (void)_notificationSettingsDidUpdate;
- (void)_hiddenDisplayTypesDidUpdate;
- (void)_algorithmVersionMismatchSettingsDidUpdate;
- (void)setHidden:(BOOL)a0 forDisplayTypeIdentifiers:(id)a1;
- (void)_setTestDefaults:(id)a0;
- (void)setHidden:(BOOL)a0 forDisplayTypeIdentifier:(id)a1;
- (void)setMenstruationTrackingDisplayTypesHidden:(BOOL)a0;
- (void)setFertilityTrackingDisplayTypesHidden:(BOOL)a0;
- (BOOL)hiddenForDisplayTypeIdentifier:(id)a0;
- (void)resetAllSettings;

@end
