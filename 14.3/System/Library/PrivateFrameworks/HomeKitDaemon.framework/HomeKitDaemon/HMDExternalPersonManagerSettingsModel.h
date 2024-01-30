@class NSNumber, NSUUID;

@interface HMDExternalPersonManagerSettingsModel : HMBModel

@property (retain) NSNumber *importingFromPhotoLibraryEnabled;
@property (retain) NSNumber *sharingFaceClassificationsEnabled;
@property (retain) NSUUID *zoneUUID;

+ (id)hmbProperties;

- (id)createSettings;

@end
