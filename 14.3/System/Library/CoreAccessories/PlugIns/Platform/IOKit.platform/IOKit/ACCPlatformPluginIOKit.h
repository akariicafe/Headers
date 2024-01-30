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
- (void).cxx_destruct;
- (void)resetUSBHubOverCurrentSiphoning:(id)a0;
- (unsigned int)getUSBHubSiphoningCurrentRequirementInmA:(id)a0;
- (void)removeApplePencilSleepAssertion;
- (id)createBatteryNotificationClient;
- (BOOL)getUSBHubOverCurrentState:(id)a0;
- (BOOL)getBatteryChargingTypeIsInductive;
- (int)getBatteryChargingType;
- (void)removeEASleepAssertion;
- (void)createApplePencilSleepAssertion;
- (int)getExternalBatteryChargingType;
- (unsigned int)getUSBHubSiphoningCurrentActualRequirementInmA:(id)a0;
- (void)createSleepAssertionForUUID:(id)a0;
- (void)destroySleepAssertionForUUID:(id)a0;
- (BOOL)getUSBFaultStateforType:(int)a0;
- (BOOL)isExternalChargerConnected;
- (void)destroyBatteryNotificationsForClient:(id)a0;
- (int)getBatteryChargingState;
- (unsigned char)getBatteryChargeLevel;
- (id)createSleepNotificationClient;
- (BOOL)getExternalBatteryChargingTypeIsInductive;
- (void)createEASleepAssertion;
- (void)clientHandledSleepNotification:(id)a0;
- (void)initUSBCameraKitHubNotifications:(id)a0;
- (void)setUSBHubOverCurrentSiphoning:(id)a0;
- (unsigned int)getUSBHubUnitLoadInmA:(id)a0;
- (void)usbFaultMonitor:(BOOL)a0 forUUID:(id)a1;
- (void)usbCableTypeMonitor:(BOOL)a0 forUUID:(id)a1;
- (void)destroySleepNotificationsForClient:(id)a0;

@end
