@class NSString;

@interface WFSettingsIntentHandler : NSObject <WFSetAirplaneModeIntentHandling, WFSetWiFiIntentHandling, WFSetBluetoothIntentHandling, WFSetCellularDataIntentHandling, WFSetLowPowerModeIntentHandling, WFSetBrightnessIntentHandling, WFSetFlashlightIntentHandling, WFSetAppearanceIntentHandling, WFSetOrientationLockIntentHandling, WFSetPersonalHotspotIntentHandling, WFSetSilenceUnknownCallersIntentHandling, WFSetNightShiftIntentHandling, WFSetTrueToneIntentHandling, WFSetAnnounceNotificationsIntentHandling, WFSetStageManagerIntentHandling, WFSetAlwaysOnDisplayIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSetBrightness:(id)a0 completion:(id /* block */)a1;
- (void)handleSetNightShift:(id)a0 completion:(id /* block */)a1;
- (void)handleSetAppearance:(id)a0 completion:(id /* block */)a1;
- (void)handleSetFlashlight:(id)a0 completion:(id /* block */)a1;
- (void)createSettingsClientForIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleSetAirplaneMode:(id)a0 completion:(id /* block */)a1;
- (void)handleSetAlwaysOnDisplay:(id)a0 completion:(id /* block */)a1;
- (void)handleSetAnnounceNotifications:(id)a0 completion:(id /* block */)a1;
- (void)handleSetBluetooth:(id)a0 completion:(id /* block */)a1;
- (void)handleSetCellularData:(id)a0 completion:(id /* block */)a1;
- (void)handleSetLowPowerMode:(id)a0 completion:(id /* block */)a1;
- (void)handleSetOrientationLock:(id)a0 completion:(id /* block */)a1;
- (void)handleSetPersonalHotspot:(id)a0 completion:(id /* block */)a1;
- (void)handleSetSilenceUnknownCallers:(id)a0 completion:(id /* block */)a1;
- (void)handleSetStageManager:(id)a0 completion:(id /* block */)a1;
- (void)handleSetTrueTone:(id)a0 completion:(id /* block */)a1;
- (void)handleSetWiFi:(id)a0 completion:(id /* block */)a1;
- (void)performSettingIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveOperationForSetAirplaneMode:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOperationForSetAlwaysOnDisplay:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOperationForSetAppearance:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOperationForSetBluetooth:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOperationForSetCellularData:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOperationForSetFlashlight:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOperationForSetLowPowerMode:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOperationForSetWiFi:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStateForSetAirplaneMode:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStateForSetAlwaysOnDisplay:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStateForSetBluetooth:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStateForSetCellularData:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStateForSetFlashlight:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStateForSetLowPowerMode:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStateForSetWiFi:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStyleForSetAppearance:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveValueForSetBrightness:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveValueForSetFlashlight:(id)a0 withCompletion:(id /* block */)a1;

@end
