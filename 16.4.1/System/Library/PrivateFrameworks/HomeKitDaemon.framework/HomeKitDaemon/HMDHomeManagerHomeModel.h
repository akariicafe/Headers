@class NSString, HMDHomeManagerHomeHandle;

@interface HMDHomeManagerHomeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDHomeManagerHomeHandle *handle;

+ (id)properties;
+ (id)deriveUUIDFromHomeUUID:(id)a0;
+ (id)modelForHomeUUID:(id)a0;


@end
