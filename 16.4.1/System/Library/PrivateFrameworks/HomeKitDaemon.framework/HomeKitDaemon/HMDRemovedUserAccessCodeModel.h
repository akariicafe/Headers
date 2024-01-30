@class NSString, NSUUID, NSData, HMRemovedUserInfo;

@interface HMDRemovedUserAccessCodeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *accessCode;
@property (retain) NSData *removedUserInfoData;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
@property (retain) NSUUID *hh2ModelID;

+ (id)properties;
+ (id)modelUUIDForHomeUUID:(id)a0 removedUserInfo:(id)a1 accessCode:(id)a2;

@end
