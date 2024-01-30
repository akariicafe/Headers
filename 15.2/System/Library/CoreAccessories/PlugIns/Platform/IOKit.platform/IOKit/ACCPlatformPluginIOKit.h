@class NSString, USBFaultMonitor;

@interface ACCPlatformPluginIOKit : NSObject <ACCPlatformUSBFaultPluginProtocol, ACCPlatformUSBCableTypePluginProtocol, ACCPlatformIOKitPowerPluginProtocol, ACCPlatformUSBCameraKitHubPluginProtocol, ACCPlatformSleepAssertionPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) USBFaultMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)stopPlugin;
- (void)initPlugin;
- (void)startPlugin;
- (unsigned int)getUSBHubUnitLoadInmA:(id)a0;
- (void)destroySleepAssertionForUUID:(id)a0;
- (void)destroySleepNotificationsForClient:(id)a0;
- (id)createSleepNotificationClient;
- (BOOL)getBatteryChargingTypeIsInductive;
- (BOOL)isExternalChargerConnected;
- (void)removeMFi4SleepAssertion;
- (void)clientHandledSleepNotification:(id)a0;
- (int)getBatteryChargingType;
- (BOOL)getUSBFaultStateforType:(int)a0;
- (void)createApplePencilSleepAssertion;
- (void)destroyBatteryNotificationsForClient:(id)a0;
- (void)createSleepAssertionForUUID:(id)a0;
- (unsigned int)getUSBHubSiphoningCurrentActualRequirementInmA:(id)a0;
- (void).cxx_destruct;
- (void)removeEASleepAssertion;
- (void)removeApplePencilSleepAssertion;
- (void)usbFaultMonitor:(BOOL)a0 forUUID:(id)a1;
- (BOOL)getExternalBatteryChargingTypeIsInductive;
- (void)setUSBHubOverCurrentSiphoning:(id)a0;
- (void)resetUSBHubOverCurrentSiphoning:(id)a0;
- (id)createBatteryNotificationClient;
- (int)getExternalBatteryChargingType;
- (unsigned char)getBatteryChargeLevel;
- (void)createMFi4SleepAssertion;
- (void)initUSBCameraKitHubNotifications:(id)a0;
- (void)createEASleepAssertion;
- (BOOL)getUSBHubOverCurrentState:(id)a0;
- (int)getBatteryChargingState;
- (void)usbCableTypeMonitor:(BOOL)a0 forUUID:(id)a1;
- (unsigned int)getUSBHubSiphoningCurrentRequirementInmA:(id)a0;

@end
