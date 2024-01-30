@interface HMDRemoteEventRouterAccessControl : NSObject

@property (readonly) unsigned long long allowedUserTypes;
@property (readonly) unsigned long long allowedDeviceTypes;

+ (id)allowAllUsersAndDevicesAccessControl;

- (id)initWithAllowedUserTypes:(unsigned long long)a0 deviceCategories:(unsigned long long)a1;

@end
