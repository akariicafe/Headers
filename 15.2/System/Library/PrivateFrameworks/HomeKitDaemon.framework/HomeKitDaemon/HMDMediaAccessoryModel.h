@class NSString;

@interface HMDMediaAccessoryModel : HMDAccessoryTransaction <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)cd_getMKFAccessoryMediaFromAccessory:(id)a0;
+ (id)cd_getMKFAccessoryMediaFromAccessoryUUID:(id)a0;


@end
