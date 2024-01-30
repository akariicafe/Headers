@class HMAccessoryCollectionSetting, NAFuture, NSSet, NSHashTable, NSMutableSet, COAlarmManager, NSUserDefaults;

@interface HFAccessorySettingMobileTimerAdapter : HFAccessorySettingAdapter

@property (retain, nonatomic) NAFuture *alarmManagerForSynchronizationFuture;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NAFuture *setupAccessoryAdapterModeFuture;
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingAdded;
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingRemoved;
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingUpdated;
@property (retain, nonatomic) NSUserDefaults *soundBoardPrefs;
@property (readonly, nonatomic) BOOL shouldSynchronizeMobileTimerToHomeKit;
@property (readonly, nonatomic) COAlarmManager *coordinationAlarmManager;
@property (readonly, nonatomic) BOOL isAdapterReady;
@property (readonly, nonatomic) HMAccessoryCollectionSetting *alarmCollectionSetting;
@property (readonly, copy, nonatomic) NSSet *alarmsWithPendingEdits;

- (id)removeAlarm:(id)a0;
- (id)addAlarm:(id)a0;
- (id)updateAlarm:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)allAlarms;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 mode:(unsigned long long)a2 updateHandler:(id /* block */)a3;
- (id)initWithHomeKitSettingsVendor:(id)a0 mode:(unsigned long long)a1;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 updateHandler:(id /* block */)a2;
- (void)homeKitSettingWasUpdated:(id)a0 value:(id)a1;
- (id)_beginMonitoringSettingsKeyPath:(id)a0;
- (void)_setupDebugHandler;
- (id)allAlarmsFuture;
- (void)_notifyObserversOfUpdates;
- (id)_synchronizeHomeKitToMobileTimer;
- (id)alarmSettingsCurrentItemsFuture;
- (id)alarmCollectionSettingFuture;
- (void)_submitAnalyticsForUpdatedAlarm:(id)a0 success:(BOOL)a1;
- (void)_submitAnalyticsForDeletedAlarm:(id)a0 success:(BOOL)a1;
- (void)_submitAnalyticsForAddedAlarm:(id)a0 success:(BOOL)a1;
- (id)alarmManagerAlarms;
- (void)_alarmWasAdded:(id)a0;
- (void)_alarmWasDeleted:(id)a0;
- (void)_alarmWasUpdated:(id)a0;
- (void)_respondToAlarmManagerUpdate;
- (id)_synchronizeMobileTimerToHomeKitWithChangeType:(unsigned long long)a0;

@end
