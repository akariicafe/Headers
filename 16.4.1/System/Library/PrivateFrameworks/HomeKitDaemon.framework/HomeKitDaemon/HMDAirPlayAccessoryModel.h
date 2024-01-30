@class NSString, NSNumber, HMFPairingIdentity;

@interface HMDAirPlayAccessoryModel : HMDMediaAccessoryModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSNumber *minimumUserPriviledge;

+ (id)properties;


@end
