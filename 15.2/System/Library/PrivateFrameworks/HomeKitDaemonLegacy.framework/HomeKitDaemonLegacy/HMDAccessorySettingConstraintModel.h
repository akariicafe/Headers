@class NSNumber, NSData;

@interface HMDAccessorySettingConstraintModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSData *value;

+ (id)properties;
+ (id)schemaHashRoot;

@end
