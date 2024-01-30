@class NSString, NSUUID;

@interface HMDHomePersonManagerSettingsModel : HMDHomeSettingsBaseModel

@property (retain) NSString *zoneUUIDString;
@property (retain) NSUUID *zoneUUID;

+ (id)properties;
+ (id)defaultModelForHomeUUID:(id)a0;
+ (id)modelIDForHomeUUID:(id)a0;

- (id)initWithHomeUUID:(id)a0;
- (id)createSettings;

@end
