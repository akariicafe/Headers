@class NSString;
@protocol _GCPhysicalDeviceManager;

@interface _GCAmazonLunaControllerProfile : NSObject <_GCControllerProfile>

@property (class, readonly) id<_GCPhysicalDeviceManager> deviceManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileWithIdentifier:(id)a1;
+ (void)deviceManager:(id)a0 prepareLogicalDevice:(id)a1;
+ (id)logicalDeviceControllerProductCategory:(id)a0;
+ (void)deviceManager:(id)a0 willPublishPhysicalDevice:(id)a1;


@end
