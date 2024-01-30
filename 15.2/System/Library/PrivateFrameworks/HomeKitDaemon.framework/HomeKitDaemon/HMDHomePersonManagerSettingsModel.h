@class NSString, NSUUID;

@interface HMDHomePersonManagerSettingsModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *zoneUUIDString;
@property (retain) NSUUID *zoneUUID;

+ (id)properties;
+ (id)modelUUIDWithUUID:(id)a0;

@end
