@class CBCentralManager, NSMutableArray, NSString, NSDateFormatter, STLocationStatusDomain, NSTimer, STPlaygroundsStatusDomain, SBSStatusBarStyleOverridesAssertion, STVoiceControlStatusDomain, SBSystemStatusWifiDataProvider, SBTelephonyManager, NSMutableDictionary, STTelephonyStatusDomainDataProvider, SBSystemStatusBatteryDataProvider, STBatteryStatusDomain, SBStatusBarDefaults, STFocusStatusDomain, STCallingStatusDomain, SBUserSessionController, STWifiStatusDomain, STTelephonyStatusDomain, NSHashTable;

@interface SBStatusBarStateAggregator : NSObject <SBDateTimeOverrideObserver, SBAVSystemControllerCacheObserver, CBCentralManagerPrivateDelegate> {
    SBStatusBarDefaults *_statusBarDefaults;
    unsigned long long _coalescentBlockDepth;
    BOOL _hasPostedOnce;
    unsigned long long _itemPostState[44];
    BOOL _nonItemDataChanged;
    struct { BOOL itemIsEnabled[44]; char timeString[64]; char shortTimeString[64]; char dateString[256]; int gsmSignalStrengthRaw; int secondaryGsmSignalStrengthRaw; int gsmSignalStrengthBars; int secondaryGsmSignalStrengthBars; char serviceString[100]; char secondaryServiceString[100]; char serviceCrossfadeString[100]; char secondaryServiceCrossfadeString[100]; char serviceImages[2][100]; char operatorDirectory[1024]; unsigned int serviceContentType; unsigned int secondaryServiceContentType; unsigned char cellLowDataModeActive : 1; unsigned char secondaryCellLowDataModeActive : 1; int wifiSignalStrengthRaw; int wifiSignalStrengthBars; unsigned char wifiLowDataModeActive : 1; unsigned int dataNetworkType; unsigned int secondaryDataNetworkType; int batteryCapacity; unsigned int batteryState; char batteryDetailString[150]; int bluetoothBatteryCapacity; int thermalColor; unsigned char thermalSunlightMode : 1; unsigned char slowActivity : 1; unsigned char syncActivity : 1; char activityDisplayId[256]; unsigned char bluetoothConnected : 1; unsigned char displayRawGSMSignal : 1; unsigned char displayRawWifiSignal : 1; unsigned char locationIconType : 2; unsigned char voiceControlIconType : 2; unsigned char quietModeInactive : 1; unsigned int tetheringConnectionCount; unsigned char batterySaverModeActive : 1; unsigned char deviceIsRTL : 1; unsigned char lock : 1; char breadcrumbTitle[256]; char breadcrumbSecondaryTitle[256]; char personName[100]; unsigned char electronicTollCollectionAvailable : 1; unsigned char radarAvailable : 1; unsigned char announceNotificationsAvailable : 1; unsigned char wifiLinkWarning : 1; unsigned char wifiSearching : 1; double backgroundActivityDisplayStartDate; unsigned char shouldShowEmergencyOnlyStatus : 1; unsigned char secondaryCellularConfigured : 1; char primaryServiceBadgeString[100]; char secondaryServiceBadgeString[100]; char quietModeImage[256]; char quietModeName[256]; } _data;
    int _actions;
    BOOL _performingAtomicUpdate;
    unsigned long long _atomicUpdateItemPostState[44];
    struct { BOOL itemIsEnabled[44]; char timeString[64]; char shortTimeString[64]; char dateString[256]; int gsmSignalStrengthRaw; int secondaryGsmSignalStrengthRaw; int gsmSignalStrengthBars; int secondaryGsmSignalStrengthBars; char serviceString[100]; char secondaryServiceString[100]; char serviceCrossfadeString[100]; char secondaryServiceCrossfadeString[100]; char serviceImages[2][100]; char operatorDirectory[1024]; unsigned int serviceContentType; unsigned int secondaryServiceContentType; unsigned char cellLowDataModeActive : 1; unsigned char secondaryCellLowDataModeActive : 1; int wifiSignalStrengthRaw; int wifiSignalStrengthBars; unsigned char wifiLowDataModeActive : 1; unsigned int dataNetworkType; unsigned int secondaryDataNetworkType; int batteryCapacity; unsigned int batteryState; char batteryDetailString[150]; int bluetoothBatteryCapacity; int thermalColor; unsigned char thermalSunlightMode : 1; unsigned char slowActivity : 1; unsigned char syncActivity : 1; char activityDisplayId[256]; unsigned char bluetoothConnected : 1; unsigned char displayRawGSMSignal : 1; unsigned char displayRawWifiSignal : 1; unsigned char locationIconType : 2; unsigned char voiceControlIconType : 2; unsigned char quietModeInactive : 1; unsigned int tetheringConnectionCount; unsigned char batterySaverModeActive : 1; unsigned char deviceIsRTL : 1; unsigned char lock : 1; char breadcrumbTitle[256]; char breadcrumbSecondaryTitle[256]; char personName[100]; unsigned char electronicTollCollectionAvailable : 1; unsigned char radarAvailable : 1; unsigned char announceNotificationsAvailable : 1; unsigned char wifiLinkWarning : 1; unsigned char wifiSearching : 1; double backgroundActivityDisplayStartDate; unsigned char shouldShowEmergencyOnlyStatus : 1; unsigned char secondaryCellularConfigured : 1; char primaryServiceBadgeString[100]; char secondaryServiceBadgeString[100]; char quietModeImage[256]; char quietModeName[256]; } _atomicUpdateData;
    NSHashTable *_postObservers;
    BOOL _notifyingPostObservers;
    long long _showsRecordingOverrides;
    NSTimer *_timeItemTimer;
    NSDateFormatter *_timeItemDateFormatter;
    NSDateFormatter *_shortTimeItemDateFormatter;
    NSDateFormatter *_dateItemDateFormatter;
    NSString *_timeItemTimeString;
    NSString *_shortTimeItemTimeString;
    NSString *_dateItemTimeString;
    NSString *_serviceString;
    NSString *_serviceCrossfadeString;
    NSString *_secondaryServiceString;
    NSString *_secondaryServiceCrossfadeString;
    NSString *_serviceBadgeString;
    NSString *_secondaryServiceBadgeString;
    unsigned long long _airplaneTransitionToken;
    BOOL _suppressCellServiceForAirplaneModeTransition;
    BOOL _cachedShowRSSI;
    BOOL _showsActivityIndicatorOnHomeScreen;
    long long _activityIndicatorEverywhereCount;
    long long _syncActivityIndicatorCount;
    NSString *_activityDisplayIdentifier;
    NSString *_batteryDetailString;
    NSMutableArray *_connectedClassicBluetoothDevices;
    NSMutableArray *_connectedLEBluetoothDevices;
    CBCentralManager *_coreBluetoothManager;
    BOOL _shouldShowBluetoothHeadphoneGlyph;
    BOOL _shouldShowBluetoothHeadphoneBatteryPercent;
    BOOL _alarmEnabled;
    unsigned int _locationIconPendingRequestCount;
    int _locationStatusBarIconState;
    int _oldLocationStatusBarIconState;
    BOOL _prominentLocationOverride;
    NSTimer *_prominentLocationTimer;
    SBSStatusBarStyleOverridesAssertion *_tetheringStatusBarStyleOverrideAssertion;
    NSMutableDictionary *_callingStatusBarStyleOverrideAssertionsByStyleOverride;
    SBSStatusBarStyleOverridesAssertion *_playgroundsStatusBarStyleOverrideAssertion;
    SBUserSessionController *_lazy_userSessionController;
    NSString *_personName;
    NSString *_overridePersonName;
    BOOL _isInternalOrDeveloperDevice;
}

@property (readonly, nonatomic) SBSystemStatusBatteryDataProvider *batteryDataProvider;
@property (readonly, nonatomic) STTelephonyStatusDomainDataProvider *telephonyDataProvider;
@property (readonly, nonatomic) SBSystemStatusWifiDataProvider *wifiDataProvider;
@property (retain, nonatomic) STBatteryStatusDomain *batteryDomain;
@property (retain, nonatomic) STCallingStatusDomain *callingDomain;
@property (retain, nonatomic) STFocusStatusDomain *focusDomain;
@property (retain, nonatomic) STLocationStatusDomain *locationDomain;
@property (retain, nonatomic) STPlaygroundsStatusDomain *playgroundsDomain;
@property (retain, nonatomic) STTelephonyStatusDomain *telephonyDomain;
@property (retain, nonatomic) STVoiceControlStatusDomain *voiceControlDomain;
@property (retain, nonatomic) STWifiStatusDomain *wifiDomain;
@property (retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager;
@property (retain, nonatomic, getter=_userSessionController, setter=_setUserSessionController:) SBUserSessionController *userSessionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (int)_thermalColorForLevel:(long long)a0;

- (void)_updateLocationItem;
- (void)_updateSignalStrengthItem:(int)a0 withData:(id)a1 SIMInfo:(id)a2 barsGetter:(id /* block */)a3 barsSetter:(id /* block */)a4;
- (const struct { BOOL x0[44]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; char x53[100]; char x54[100]; char x55[256]; char x56[256]; } *)_statusBarData;
- (void)_updateCallForwardingItem;
- (void)_updateSensorActivityItem;
- (void)_temporarilyOverrideLocationItemForProminentIndication;
- (void)controller:(id)a0 didChangeOverrideDateFromDate:(id)a1;
- (void)_tickRefCount:(long long *)a0 up:(BOOL)a1 withTransitionBlock:(id /* block */)a2;
- (void)removePostingObserver:(id)a0;
- (void)_removeTetheringStatusBarStyleOverrideAssertion;
- (void)_registerForNotifications;
- (void)_updateAirplaneMode;
- (void)setAlarmEnabled:(BOOL)a0;
- (void)_updateTimeItems;
- (BOOL)_setItem:(int)a0 enabled:(BOOL)a1;
- (void)_updateLockItem;
- (void)_updateRotationLockItem;
- (void)_updateBluetoothItem;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)addPostingObserver:(id)a0;
- (void)_updateServiceItem:(int)a0 withData:(id)a1 SIMInfo:(id)a2 otherSIMInfo:(id)a3 serviceStringGetter:(id /* block */)a4 serviceStringSetter:(id /* block */)a5 serviceCrossfadeStringGetter:(id /* block */)a6 serviceCrossfadeStringSetter:(id /* block */)a7 serviceContentTypeGetter:(id /* block */)a8 serviceContentTypeSetter:(id /* block */)a9 serviceBadgeStringGetter:(id /* block */)a10 serviceBadgeStringSetter:(id /* block */)a11;
- (void)_updateQuietModeItem;
- (void)_updateDataNetworkItem:(int)a0 withData:(id)a1 primary:(BOOL)a2 dataNetworkTypeGetter:(id /* block */)a3 dataNetworkTypeSetter:(id /* block */)a4;
- (BOOL)_shouldShowPersonName;
- (void)_updateCallForwardingItem:(int)a0 withInfo:(id)a1;
- (int)_statusBarBatteryStateForSystemStatusChargingState:(unsigned long long)a0;
- (void)_updateAirplayItem;
- (void)setShowsActivityIndicatorEverywhere:(BOOL)a0;
- (void)_updateStatusBarForSystemStatusDomainName:(unsigned long long)a0 data:(id)a1;
- (void)_stopTimeItemTimer;
- (id)_statusBarStyleOverridesForCallDescriptors:(id)a0;
- (void)_updateSignalStrengthItem;
- (void)_updateBatteryItems;
- (BOOL)_shouldShowEmergencyOnlyStatusForInfo:(id)a0;
- (void)_updateVoiceControlItem;
- (void)_updatePersonNameItem;
- (void)_updateServiceItem;
- (void)_buildLocationState;
- (void)setShowsActivityIndicatorOnHomeScreen:(BOOL)a0;
- (void)_updateSecondaryServiceItem;
- (void)_restartTimeItemTimer;
- (void)_requestActions:(int)a0;
- (void)setShouldShowBluetoothHeadphoneGlyph:(BOOL)a0 andShouldShowBluetoothHeadphoneBatteryPercent:(BOOL)a1;
- (void)_updateDataNetworkItem;
- (BOOL)_setItem:(int)a0 enabled:(BOOL)a1 inList:(BOOL *)a2 itemPostState:(unsigned long long *)a3;
- (void)cache:(id)a0 didUpdatePickableRoutes:(id)a1;
- (void)_updateSecondaryDataNetworkItem;
- (void)_updateSecondarySignalStrengthItem;
- (void)_postItem:(int)a0 withState:(unsigned long long)a1 inList:(unsigned long long *)a2;
- (void).cxx_destruct;
- (void)_updateSecondaryCallForwardingItem;
- (void)_updateActivityItem;
- (void)_notifyItemChanged:(int)a0;
- (void)_removePlaygroundsStatusBarStyleOverrideAssertion;
- (id)init;
- (void)_updateStateAtomicallyWithoutAnimationUsingBlock:(id /* block */)a0;
- (void)cache:(id)a0 didUpdateActiveAudioRoute:(id)a1;
- (void)setShowsOverridesForRecording:(BOOL)a0;
- (void)_updateLocationState;
- (void)setShowsSyncActivityIndicator:(BOOL)a0;
- (void)endCoalescentBlock;
- (void)_noteAirplaneModeChanged;
- (void)_updateAlarmItem;
- (void)_updateCarPlayItem;
- (void)beginCoalescentBlock;
- (void)_updateTTYItem;
- (void)_updateLiquidDetectionItem;
- (void)setUserNameOverride:(id)a0;
- (void)sendStatusBarActions:(int)a0;
- (void)dealloc;
- (void)_resetTimeItemFormatter;
- (void)centralManager:(id)a0 didUpdatePeripheralConnectionState:(id)a1;
- (void)_updateBluetoothHeadphonesItem;
- (void)_updateStatusBarStyleOverrideAssertionsForSystemStatusDomain:(unsigned long long)a0 andData:(id)a1;
- (void)_updateThermalColorItem;
- (void)_updateTetheringState;
- (void)_notifyNonItemDataChanged;
- (void)updateStatusBarItem:(int)a0;
- (void)_updateVPNItem;
- (void)_updateCallingStatusBarStyleOverrideAssertionsForCallDescriptors:(id)a0;
- (void)_updateBluetoothBatteryItem;

@end
