@class NSString, NSUUID, NSArray, HMFProductInfo, HMDHomeKitVersion, HMDRPIdentity;

@interface HMDDeviceModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) HMDHomeKitVersion *version;
@property (copy, nonatomic) HMFProductInfo *productInfo;
@property (copy, nonatomic) HMDRPIdentity *rpIdentity;
@property (readonly, nonatomic) NSArray *deviceHandles;

+ (id)properties;
+ (id)schemaHashRoot;

- (BOOL)diff:(id)a0 differingFields:(id *)a1;
- (id)cd_childrenExcluding:(id)a0 error:(id *)a1;

@end
