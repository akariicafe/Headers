@class NSString, USBFaultMonitor;

@interface ACCPlatformPluginIOKit : NSObject <ACCPlatformUSBFaultPluginProtocol, ACCPlatformUSBCableTypePluginProtocol, ACCPlatformIOKitPowerPluginProtocol, ACCPlatformUSBCameraKitHubPluginProtocol, ACCPlatformSleepAssertionPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) USBFaultMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (void)removeMFi4SleepAssertion;
- (BOOL)getUSBHubOverCurrentState:(id)a0;
- (BOOL)getExternalBatteryChargingTypeIsInductive;
- (void)destroyBatteryNotificationsForClient:(id)a0;
- (void)createSleepAssertionForUUID:(id)a0;
- (BOOL)getBatteryChargingTypeIsInductive;
- (void)removeApplePencilSleepAssertion;
- (void)createMFi4SleepAssertion;
- (void)resetUSBHubOverCurrentSiphoning:(id)a0;
- (id)createSleepNotificationClient;
- (void)removeEASleepAssertion;
- (void)destroySleepNotificationsForClient:(id)a0;
- (void)usbCableTypeMonitor:(BOOL)a0 forUUID:(id)a1;
- (void)usbFaultMonitor:(BOOL)a0 forUUID:(id)a1;
- (int)getBatteryChargingState;
- (void)clientHandledSleepNotification:(id)a0;
- (id)createBatteryNotificationClient;
- (void).cxx_destruct;
- (BOOL)getUSBFaultStateforType:(int)a0;
- (void)initUSBCameraKitHubNotifications:(id)a0;
- (BOOL)isExternalChargerConnected;
- (void)createApplePencilSleepAssertion;
- (unsigned int)getUSBHubSiphoningCurrentActualRequirementInmA:(id)a0;
- (unsigned char)getBatteryChargeLevel;
- (void)destroySleepAssertionForUUID:(id)a0;
- (void)setUSBHubOverCurrentSiphoning:(id)a0;
- (unsigned int)getUSBHubUnitLoadInmA:(id)a0;
- (unsigned int)getUSBHubSiphoningCurrentRequirementInmA:(id)a0;
- (int)getExternalBatteryChargingType;
- (int)getBatteryChargingType;
- (void)createEASleepAssertion;

@end
