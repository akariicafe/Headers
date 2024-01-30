@class NSString, NSUUID;

@interface HMDHomePersonManagerSettingsModel : HMDBackingStoreModelObject

@property (retain) NSString *zoneUUIDString;
@property (retain) NSUUID *zoneUUID;

+ (id)properties;
+ (id)modelUUIDWithUUID:(id)a0;

- (id)initWithHomeUUID:(id)a0;
- (id)createSettings;

@end
