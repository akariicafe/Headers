@class NSSet, NSString, GCDeviceLight, NSArray, GCDeviceBattery, GCHapticCapabilityGraph, _GCHIDServiceInfo;
@protocol GCMotionServiceServerInterface, NSObject, GCBatteryServiceServerInterface, _GCMotionEventSourceDescription, _GCDeviceDriverConnection, _GCDeviceManager, GCGameIntentServiceServerInterface, GCLightServiceServerInterface, _GCDefaultPhysicalDeviceDelegate, _GCGamepadEventSourceDescription, GCAdaptiveTriggersServiceServerInterface, NSCopying, NSSecureCoding;

@interface _GCDefaultPhysicalDevice : NSObject <_GCDeviceGamepadComponent, _GCDeviceMotionComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceLightComponent, _GCDeviceAdaptiveTriggersComponent, GCAdaptiveTriggersServiceClientInterface, _GCDeviceBatteryComponent, GCBatteryServiceClientInterface, _GCDeviceHapticCapabilitiesComponent, _GCDeviceGameIntentComponent, GCGameIntentServiceClientInterface, _GCExternalAccessory, _GCPhysicalDevice> {
    id<_GCDeviceDriverConnection> _driverConnection;
    id _driverConnectionInvalidationRegistration;
    id<_GCDeviceDriverConnection> _filterConnection;
    id _filterConnectionInvalidationRegistration;
    id /* block */ _lightComponentServiceConnectedHandler;
    id /* block */ _adaptiveTriggersComponentServiceConnectedHandler;
    id /* block */ _adaptiveTriggersComponentStatusUpdatedHandler;
    id /* block */ _motionComponentServiceConnectedHandler;
    id /* block */ _batteryComponentServiceConnectedHandler;
    id /* block */ _batteryComponentBatteryUpdatedHandler;
    long long _cachedIntentEvent;
    id /* block */ _gameIntentComponentGameIntentTriggeredHandler;
    unsigned long long _cachedGlyphFlags;
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
@property (copy, nonatomic) id /* block */ deviceAdaptiveTriggersServiceConnectedHandler;
@property (copy, nonatomic) id /* block */ deviceAdaptiveTriggersComponentStatusUpdatedHandler;
@property (readonly, nonatomic) NSArray *triggerStatuses;
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
@property (copy, nonatomic) id /* block */ deviceGameIntentComponentGameIntentTriggeredHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_GCDefaultPhysicalDeviceDelegate> delegate;
@property (readonly, nonatomic) id<GCAdaptiveTriggersServiceServerInterface> adaptiveTriggersServiceServer;
@property (readonly, nonatomic) id<GCLightServiceServerInterface> lightServiceServer;
@property (readonly, nonatomic) id<GCMotionServiceServerInterface> motionServiceServer;
@property (readonly, nonatomic) id<GCBatteryServiceServerInterface> batteryServiceServer;
@property (readonly, nonatomic) id<GCGameIntentServiceServerInterface> gameIntentServiceServer;
@property (readonly, nonatomic) _GCHIDServiceInfo *serviceInfo;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly, weak) id<_GCDeviceManager> manager;
@property (readonly) NSSet *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForService:(id)a0;

- (BOOL)conformsToProtocol:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)redactedDescription;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)driverConnection;
- (void)setDriverConnection:(id)a0;
- (void)setFilterConnection:(id)a0;
- (BOOL)supportsBattery;
- (BOOL)supportsGamepad;
- (void)_workaround_backbone_97462229:(id)a0;
- (void)eaAccessoriesDidChange;
- (unsigned long long)getGlyphFlags;
- (id)initWithHIDDevice:(id)a0 manager:(id)a1;
- (void)setAdaptiveTriggersPayload:(id)a0 forIndex:(int)a1;
- (void)setEnableGlobalGameControllerFunctionality:(BOOL)a0;
- (BOOL)supportsAdaptiveTriggers;
- (BOOL)supportsHapticCapabilities;
- (BOOL)supportsLight;
- (BOOL)supportsMotion;
- (BOOL)supportsPlayerIndicator;
- (void)triggerGameIntentWithEvent:(long long)a0;
- (void)updateAdaptiveTriggerStatusWithLeftMode:(unsigned char)a0 leftStatus:(unsigned char)a1 leftArmPosition:(unsigned char)a2 rightMode:(unsigned char)a3 rightStatus:(unsigned char)a4 rightArmPosition:(unsigned char)a5;
- (void)updateBattery:(unsigned char)a0 isCharging:(BOOL)a1;
- (void)updateGlyphFlags;

@end
