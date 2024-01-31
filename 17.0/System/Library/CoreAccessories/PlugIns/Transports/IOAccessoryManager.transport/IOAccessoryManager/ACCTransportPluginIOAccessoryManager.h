@class NSString;

@interface ACCTransportPluginIOAccessoryManager : ACCTransportPlugin <ACCTransportPluginProtocol, ACCPlatformUSBModePluginProtocol, ACCPlatformPowerPluginProtocol, ACCPlatformLightningPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (unsigned int)USBChargingVoltageInmV:(id)a0;
- (int)CableType:(id)a0;
- (BOOL)configureAccessoryPowerMode:(int)a0 forConnectionUUID:(id)a1;
- (BOOL)isPowerDuringSleepEnabled:(id)a0;
- (void)initPlugin;
- (int)USBModeForConnectionUUID:(id)a0;
- (void)startPlugin;
- (BOOL)isBatteryPackModeEnabled:(id)a0;
- (BOOL)setPowerDuringSleepEnabled:(BOOL)a0 forConnectionUUID:(id)a1;
- (unsigned int)sleepPowerCurrentLimitInmA:(id)a0;
- (BOOL)setUSBMode:(int)a0 forEndpointUUID:(id)a1;
- (unsigned int)accessoryChargingCurrentInmA:(id)a0;
- (unsigned int)USBCurrentLimitInmA:(id)a0;
- (int)USBModeForEndpointUUID:(id)a0;
- (void)resetLightningBusForEndpointWithUUID:(id)a0;
- (unsigned int)USBCurrentLimitBaseInmA:(id)a0;
- (unsigned int)USBCurrentLimitOffsetInmA:(id)a0;
- (unsigned int)accessoryPowerModeCurrentLimitInmA:(int)a0 forConnectionUUID:(id)a1;
- (BOOL)setUSBCurrentLimitBase:(unsigned int)a0 forConnectionUUID:(id)a1;
- (BOOL)setAccessoryUsedCurrent:(unsigned int)a0 forConnectionUUID:(id)a1;
- (void)stopPlugin;
- (BOOL)setUSBCurrentOffset:(int)a0 forConnectionUUID:(id)a1;
- (BOOL)isPowerDuringSleepSupported:(id)a0;
- (BOOL)setUSBMode:(int)a0 forConnectionUUID:(id)a1;
- (BOOL)resetAccessoryBaseCurrent:(id)a0;
- (BOOL)sendOutgoingData:(id)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2;
- (void)authStatusDidChange:(int)a0 forConnectionWithUUID:(id)a1 previousAuthStatus:(int)a2 authType:(int)a3 connectionIsAuthenticated:(BOOL)a4 connectionWasAuthenticated:(BOOL)a5;
- (BOOL)setBatteryPackMode:(BOOL)a0 forConnectionUUID:(id)a1;
- (BOOL)setAccessoryRequestedCurrent:(unsigned int)a0 forConnectionUUID:(id)a1;

@end
