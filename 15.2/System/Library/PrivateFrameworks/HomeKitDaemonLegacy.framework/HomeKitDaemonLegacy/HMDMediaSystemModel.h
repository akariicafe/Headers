@class NSString, NSArray, NSData;

@interface HMDMediaSystemModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSArray *mediaSystemComponents;
@property (retain, nonatomic) NSData *symptoms;

+ (id)properties;
+ (id)schemaHashRoot;

- (id)dependentUUIDs;

@end
