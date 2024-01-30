@class NSString, USBFaultMonitor;

@interface ACCPlatformPluginIOKit : NSObject <ACCPlatformUSBFaultPluginProtocol, ACCPlatformUSBCableTypePluginProtocol, ACCPlatformIOKitPowerPluginProtocol, ACCPlatformUSBCameraKitHubPluginProtocol, ACCPlatformSleepAssertionPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) USBFaultMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)createMFi4SleepAssertion;
- (BOOL)getUSBHubOverCurrentState:(id)a0;
- (void)usbCableTypeMonitor:(BOOL)a0 forUUID:(id)a1;
- (void)initPlugin;
- (void)destroySleepAssertionForUUID:(id)a0;
- (void)startPlugin;
- (unsigned int)getUSBHubSiphoningCurrentRequirementInmA:(id)a0;
- (void)initUSBCameraKitHubNotifications:(id)a0;
- (void)destroySleepNotificationsForClient:(id)a0;
- (id)createBatteryNotificationClient;
- (void)removeEASleepAssertion;
- (void)destroyBatteryNotificationsForClient:(id)a0;
- (void)usbFaultMonitor:(BOOL)a0 forUUID:(id)a1;
- (void)removeMFi4SleepAssertion;
- (void)setUSBHubOverCurrentSiphoning:(id)a0;
- (BOOL)isExternalChargerConnected;
- (unsigned char)getBatteryChargeLevel;
- (int)getExternalBatteryChargingType;
- (void)clientHandledSleepNotification:(id)a0;
- (void)removeApplePencilSleepAssertion;
- (void)createApplePencilSleepAssertion;
- (BOOL)getBatteryChargingTypeIsInductive;
- (void)resetUSBHubOverCurrentSiphoning:(id)a0;
- (unsigned int)getUSBHubUnitLoadInmA:(id)a0;
- (void)createSleepAssertionForUUID:(id)a0;
- (void)stopPlugin;
- (int)getBatteryChargingType;
- (unsigned int)getUSBHubSiphoningCurrentActualRequirementInmA:(id)a0;
- (BOOL)getUSBFaultStateforType:(int)a0;
- (void).cxx_destruct;
- (int)getBatteryChargingState;
- (id)createSleepNotificationClient;
- (void)createEASleepAssertion;
- (BOOL)getExternalBatteryChargingTypeIsInductive;

@end
