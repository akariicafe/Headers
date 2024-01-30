@class NSString, NSArray, NSData;

@interface HMDMediaSystemModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSArray *mediaSystemComponents;
@property (retain, nonatomic) NSData *symptoms;

+ (id)properties;
+ (id)schemaHashRoot;

- (id)dependentUUIDs;

@end
