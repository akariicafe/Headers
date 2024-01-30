@interface _GCNintendoProControllerProfile : _GCNintendoJoyConProfile

+ (id)logicalDevice:(id)a0 makeControllerMotionWithIdentifier:(id)a1;
+ (id)physicalDeviceGetHapticCapabilities:(id)a0;
+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileWithIdentifier:(id)a1;
+ (void)physicalDevice:(id)a0 setSensorsActive:(BOOL)a1;
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)a0;
+ (BOOL)physicalDeviceSupportsMotion:(id)a0;
+ (void)physicalDevice:(id)a0 getSensorsEnabledWithReply:(id /* block */)a1;
+ (id)logicalDeviceControllerProductCategory:(id)a0;

@end
