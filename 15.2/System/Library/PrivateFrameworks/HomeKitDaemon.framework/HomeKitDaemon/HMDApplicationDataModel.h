@class NSString, NSDictionary, NSUUID;

@interface HMDApplicationDataModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (retain, nonatomic) NSUUID *homeUUID;

+ (id)properties;
+ (id)schemaHashRoot;

- (void).cxx_destruct;
- (BOOL)cd_updateManagedObjectInContext:(id)a0 error:(id *)a1;
- (id)initWithManagedObject:(id)a0 error:(id *)a1;

@end
