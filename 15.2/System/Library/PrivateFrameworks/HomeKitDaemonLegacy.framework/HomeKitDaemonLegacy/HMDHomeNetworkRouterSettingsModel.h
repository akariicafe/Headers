@class NSString;

@interface HMDHomeNetworkRouterSettingsModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *activeNetworkRouterAccessoryUUID;
@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;
+ (id)modelNamespace;

- (id)dependentUUIDs;

@end
