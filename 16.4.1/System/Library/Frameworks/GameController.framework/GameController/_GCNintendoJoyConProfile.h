@class NSString;
@protocol _GCPhysicalDeviceManager;

@interface _GCNintendoJoyConProfile : NSObject <_GCControllerProfile>

@property (class, readonly) id<_GCPhysicalDeviceManager> deviceManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)a0;
+ (void)physicalDevice:(id)a0 setIndicatedPlayerIndex:(long long)a1;
+ (void)physicalDevice:(id)a0 getBatteryWithReply:(id /* block */)a1;


@end
