@class NSDictionary;

@interface HMDApplicationDataModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSDictionary *appDataDictionary;

+ (id)properties;
+ (id)schemaHashRoot;

@end
