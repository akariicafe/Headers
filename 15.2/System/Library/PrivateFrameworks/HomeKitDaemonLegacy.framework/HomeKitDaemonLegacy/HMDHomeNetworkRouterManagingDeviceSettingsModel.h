@class NSString;

@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;
+ (id)modelNamespace;

- (id)dependentUUIDs;

@end
