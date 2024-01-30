@class NSNumber, NSString, NSData;

@interface HMDAccessorySettingModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *value;
@property (copy, nonatomic) NSNumber *configurationVersion;

+ (id)properties;
+ (id)schemaHashRoot;

@end
