@class NSMutableDictionary, NSString, NSSet, NSMapTable, _GCDeviceConfiguration, GCDeviceLight, GCDeviceBattery;
@protocol _GCPhysicalDevice, _GCDeviceBatteryComponent, _GCDeviceManager, _GCDeviceSettingsComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceLightComponent, NSCopying, NSObject, NSSecureCoding, _GCDefaultLogicalDeviceDelegate, _GCDeviceMotionComponent;

@interface _GCDefaultLogicalDevice : NSObject <_GCDeviceControllerProviding, _GCDeviceSettingsComponent, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCLightXPCProxyServerEndpointDelegate, GCMotionXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, GCSettingsXPCProxyServerEndpointDelegate, _GCLogicalDevice> {
    NSMapTable *_clients;
    id<_GCDevicePlayerIndexIndicatorComponent> _devicePlayerIndicatorComponent;
    long long _indicatedPlayerIndex;
    NSMapTable *_clientPlayerIndicatorEndpoints;
    id<_GCDeviceLightComponent> _deviceLightComponent;
    GCDeviceLight *_light;
    NSMapTable *_clientLightEndpoints;
    id<_GCDeviceMotionComponent> _deviceMotionComponent;
    BOOL _motionSensorsActive;
    NSMapTable *_clientMotionEndpoints;
    id<_GCDeviceBatteryComponent> _deviceBatteryComponent;
    GCDeviceBattery *_battery;
    NSMapTable *_clientBatteryEndpoints;
    id<_GCDeviceSettingsComponent> _deviceSettingsComponent;
    NSMapTable *_clientSettingsEndpoints;
    NSMutableDictionary *_deviceSettingsForBundleIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_GCDefaultLogicalDeviceDelegate> delegate;
@property (readonly, nonatomic) _GCDeviceConfiguration *configuration;
@property (readonly, nonatomic) id<_GCPhysicalDevice> underlyingDevice;
@property (readonly) NSSet *underlyingDevices;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly, weak) id<_GCDeviceManager> manager;
@property (readonly) NSSet *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultSettings;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)_removeClient:(id)a0;
- (BOOL)_addClient:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)makeControllerForClient:(id)a0;
- (void)activateLogical;
- (void)motionXPCProxyServerEndpoint:(id)a0 didReceiveSensorsActiveChange:(BOOL)a1;
- (id)initWithPhysicalDevice:(id)a0 configuration:(id)a1 manager:(id)a2;
- (void)lightXPCProxyServerEndpoint:(id)a0 didReceiveLightChange:(id)a1;
- (id)settingsForBundleIdentifier:(id)a0;
- (void)playerIndicatorXPCProxyServerEndpoint:(id)a0 didReceivePlayerIndexChange:(long long)a1;

@end
