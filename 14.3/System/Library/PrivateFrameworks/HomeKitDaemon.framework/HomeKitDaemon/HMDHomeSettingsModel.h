@class NSNumber;

@interface HMDHomeSettingsModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;
+ (id)modelNamespace;

@end
