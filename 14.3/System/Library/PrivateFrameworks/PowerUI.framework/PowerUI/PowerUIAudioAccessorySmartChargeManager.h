@class NSLock, PowerUIBluetoothHandler, NSXPCListener, NSString, PowerUIMLAudioAccessoryModelPredictor, NSMutableDictionary, PowerUIWalletSignalMonitor, NSMutableArray, NSObject, UNUserNotificationCenter, NSNumber, NSDistributedNotificationCenter;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_semaphore;

@interface PowerUIAudioAccessorySmartChargeManager : NSObject <UNUserNotificationCenterDelegate, NSXPCListenerDelegate, PowerUISmartChargeManagingAudioAccessoriesPrivate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingAudioAccessories>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) PowerUIMLAudioAccessoryModelPredictor *predictor;
@property struct BTSessionImpl { } *session;
@property (retain, nonatomic) NSObject<OS_os_log> *accessoryLog;
@property (retain, nonatomic) NSMutableArray *deviceArray;
@property (retain, nonatomic) NSLock *deviceArrayLock;
@property (retain) NSMutableDictionary *accessoryStates;
@property (retain, nonatomic) NSNumber *hardcodedTimeDelta;
@property (retain, nonatomic) NSNumber *hardcodedTimeBetweenUpdates;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;
@property (retain) NSObject<OS_dispatch_semaphore> *btConnectionSemaphore;
@property (retain, nonatomic) PowerUIWalletSignalMonitor *walletMonitor;
@property (retain) NSMutableDictionary *acceptMessageFromRightBudForDevice;
@property (retain) NSMutableDictionary *acceptMessageFromLeftBudForDevice;
@property (retain) PowerUIBluetoothHandler *btHandler;
@property (retain, nonatomic) UNUserNotificationCenter *unCenter;
@property (nonatomic) BOOL firstNotificationDisplayed;
@property (retain, nonatomic) NSMutableDictionary *latestAnalyticsForDevice;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readArrayForPreferenceKey:(id)a0;
+ (void)setNumber:(id)a0 forPreferenceKeyPrefix:(id)a1 andDevice:(id)a2;
+ (id)readStringForPreferenceKeyPrefix:(id)a0 andDevice:(id)a1;
+ (void)setString:(id)a0 forPreferenceKeyPrefix:(id)a1 andDevice:(id)a2;
+ (id)readNumberForPreferenceKeyPrefix:(id)a0 andDevice:(id)a1;
+ (void)bulkDeleteDefaultsEntries:(id)a0;
+ (void)setArray:(id)a0 forPreferenceKey:(id)a1;

- (id)defaultDateToDisableUntilGivenDate:(id)a0;
- (BOOL)runUpdateForDevice:(struct BTDeviceImpl { } *)a0 withHash:(id)a1 asInitialUpdate:(BOOL)a2;
- (void)fakeConnectionForDevice:(id)a0;
- (void)unfilteredDeadlineForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)isSmartChargingCurrentlyEnabledForDevice:(id)a0 withHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)deleteRecordsForDevices:(id)a0;
- (void)setFakeConnectionStatusTo:(BOOL)a0;
- (void)clearLastActionForDevice:(id)a0;
- (id)stringFromState:(unsigned long long)a0;
- (id)firsUseNotificationRequest;
- (void)client:(id)a0 updateOBCDeadline:(id)a1 forDevice:(id)a2 withHandler:(id /* block */)a3;
- (void)fullChargeDeadlineForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)reportSessionMetricsForSide:(unsigned char)a0 withTimeSpendAtLowerSoC:(unsigned short)a1 timeSpentAtHigherSoC:(unsigned short)a2 engagementEventsSinceLastReport:(unsigned char)a3 underchargeEventsSinceLastReport:(unsigned char)a4 chargingEventsSinceLastReport:(unsigned char)a5 budSocAtLastEngagement:(unsigned char)a6 successRatio:(unsigned short)a7;
- (id)returnAccessoryStatusForDevice:(id)a0;
- (void)stopMockingBluetooth;
- (void)recordBudMetricsLocallyForDevice:(id)a0 withTimeSpendAtLowerSoC:(unsigned short)a1 timeSpentAtHigherSoC:(unsigned short)a2 engagementEventsSinceLastReport:(unsigned char)a3 underchargeEventsSinceLastReport:(unsigned char)a4 chargingEventsSinceLastReport:(unsigned char)a5 budSocAtLastEngagement:(unsigned char)a6 successRatio:(unsigned short)a7;
- (void)persistentlySetStatusForDevice:(id)a0 withCurrentState:(unsigned long long)a1 withEnabled:(BOOL)a2 withDisabledUntilDate:(id)a3 withTemporarilyDisabled:(BOOL)a4;
- (unsigned long long)sendTimeDeltaInSeconds:(unsigned int)a0 toAccessory:(struct BTDeviceImpl { } *)a1;
- (void)client:(id)a0 setState:(unsigned long long)a1 forDevice:(id)a2 withHandler:(id /* block */)a3;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)persistentlySetExpectedHash:(id)a0 forDevice:(id)a1;
- (void)lastActionForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)persistentlySetLastUnderchargeRecordedForPrediction:(id)a0 forDevice:(id)a1;
- (void)persistentlyHandleSeeingDevice:(id)a0;
- (BOOL)runUpdateForDevice:(struct BTDeviceImpl { } *)a0 withHash:(id)a1;
- (void)getAvailableDevicesWithHandler:(id /* block */)a0;
- (void)attachToBluetoothSession;
- (long long)secondsLeftInHourForDate:(id)a0;
- (BOOL)setOBCState:(BOOL)a0 forDevice:(id)a1;
- (void)client:(id)a0 connectAndDisableOBCforDevice:(id)a1 withHandler:(id /* block */)a2;
- (void)persistentlySetLastSentDate:(id)a0 forDevice:(id)a1;
- (void)engageUntil:(id)a0 forDevice:(id)a1 overrideAllSignals:(BOOL)a2 withHandler:(id /* block */)a3;
- (void)getStatusForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)startMockingBluetoothForFakeDevice:(id)a0;
- (void)monitor:(id)a0 maySuggestNewFullChargeDeadline:(id)a1;
- (void)reportDailyMetrics;

@end
