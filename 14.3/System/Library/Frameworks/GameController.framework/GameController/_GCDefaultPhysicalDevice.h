@class _GCCControllerHIDServiceInfo, NSString, GCDeviceLight, GCDeviceBattery, NSArray, GCHapticCapabilityGraph, NSSet;
@protocol NSObject, GCLightServiceServerInterface, _GCGamepadEventSourceDescription, _GCDeviceManager, _GCDeviceDriverConnection, GCBatteryServiceServerInterface, NSCopying, _GCDefaultPhysicalDeviceDelegate, GCMotionServiceServerInterface, _GCMotionEventSourceDescription, NSSecureCoding;

@interface _GCDefaultPhysicalDevice : NSObject <_GCDeviceGamepadComponent, _GCDeviceMotionComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceLightComponent, _GCDeviceBatteryComponent, GCBatteryServiceClientInterface, _GCDeviceHapticCapabilitiesComponent, _GCPhysicalDevice> {
    id<_GCDeviceDriverConnection> _driverConnection;
    id _driverConnectionInvalidationRegistration;
    id /* block */ _lightComponentServiceConnectedHandler;
    id /* block */ _motionComponentServiceConnectedHandler;
    id /* block */ _batteryComponentServiceConnectedHandler;
    id /* block */ _batteryComponentBatteryUpdatedHandler;
}

@property (readonly) id<_GCGamepadEventSourceDescription> gamepadEventSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ deviceMotionServiceConnectedHandler;
@property (readonly, nonatomic) id<_GCMotionEventSourceDescription> motionEventSource;
@property (nonatomic) BOOL sensorsActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long indicatedPlayerIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ deviceLightServiceConnectedHandler;
@property (retain, nonatomic) GCDeviceLight *light;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ deviceBatteryServiceConnectedHandler;
@property (copy, nonatomic) id /* block */ deviceBatteryComponentBatteryUpdatedHandler;
@property (readonly, nonatomic) GCDeviceBattery *battery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *hapticEngines;
@property (readonly, nonatomic) GCHapticCapabilityGraph *hapticCapabilityGraph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_GCDefaultPhysicalDeviceDelegate> delegate;
@property (readonly, nonatomic) id<GCLightServiceServerInterface> lightServiceServer;
@property (readonly, nonatomic) id<GCMotionServiceServerInterface> motionServiceServer;
@property (readonly, nonatomic) id<GCBatteryServiceServerInterface> batteryServiceServer;
@property (readonly, nonatomic) _GCCControllerHIDServiceInfo *serviceInfo;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly, weak) id<_GCDeviceManager> manager;
@property (readonly) NSSet *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForService:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)driverConnection;
- (id)initWithHIDDevice:(id)a0 manager:(id)a1;
- (void)setDriverConnection:(id)a0;
- (BOOL)supportsGamepad;
- (BOOL)supportsPlayerIndicator;
- (BOOL)supportsLight;
- (BOOL)supportsHapticCapabilities;
- (BOOL)supportsMotion;
- (BOOL)supportsBattery;
- (void)updateBattery:(unsigned char)a0 isCharging:(BOOL)a1;

@end
