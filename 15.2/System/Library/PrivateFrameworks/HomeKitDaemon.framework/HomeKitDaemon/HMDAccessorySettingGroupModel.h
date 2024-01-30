@class NSString;

@interface HMDAccessorySettingGroupModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;

+ (id)properties;
+ (id)schemaHashRoot;

- (void)cd_populateParentRelationshipInContext:(id)a0 error:(id *)a1;

@end
