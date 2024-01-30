@interface HMDRemoteEventRouterAccessControl : NSObject

@property (readonly) unsigned long long allowedUserTypes;
@property (readonly) unsigned long long allowedDeviceTypes;

+ (id)allowAllUsersAndDevicesAccessControl;
+ (id)allowSharedAdminsAndAllDevicesAccessControl;
+ (unsigned long long)remoteDeviceAccessControlFromNumber:(id)a0;
+ (unsigned long long)remoteUserAccessControlFromNumber:(id)a0;

- (id)initWithAllowedUserTypes:(unsigned long long)a0 deviceCategories:(unsigned long long)a1;

@end
