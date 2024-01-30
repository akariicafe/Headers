@class NSString;

@interface HMDAccessorySettingGroupModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *name;

+ (id)properties;
+ (id)schemaHashRoot;

@end
