@class NSString;

@interface HMDHomeNetworkRouterSettingsModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *activeNetworkRouterAccessoryUUID;
@property (retain, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (retain, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (retain, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;
+ (id)modelNamespace;

- (id)dependentUUIDs;

@end
