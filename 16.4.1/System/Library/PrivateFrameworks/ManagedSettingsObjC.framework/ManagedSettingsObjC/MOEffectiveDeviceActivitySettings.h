@class MOEffectiveBool, MOEffectiveArray;

@interface MOEffectiveDeviceActivitySettings : NSObject

@property (readonly) MOEffectiveArray *allowedClients;
@property (readonly) MOEffectiveBool *shareAcrossDevices;

@end
