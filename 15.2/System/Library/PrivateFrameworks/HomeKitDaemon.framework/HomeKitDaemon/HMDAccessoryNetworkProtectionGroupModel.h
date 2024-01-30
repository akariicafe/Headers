@class NSString, NSNumber;

@interface HMDAccessoryNetworkProtectionGroupModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSNumber *targetProtectionMode;

+ (id)properties;
+ (id)modelIDForHome:(id)a0 manufacturer:(id)a1 category:(id)a2;
+ (id)modelNamespace;


@end
