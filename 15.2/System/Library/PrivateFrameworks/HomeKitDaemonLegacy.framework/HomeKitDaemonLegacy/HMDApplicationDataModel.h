@class NSDictionary, NSUUID;

@interface HMDApplicationDataModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (retain, nonatomic) NSUUID *homeUUID;

+ (id)properties;
+ (id)schemaHashRoot;

- (void).cxx_destruct;

@end
