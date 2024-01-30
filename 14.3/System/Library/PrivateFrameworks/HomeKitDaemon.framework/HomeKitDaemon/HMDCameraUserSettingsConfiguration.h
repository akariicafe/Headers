@interface HMDCameraUserSettingsConfiguration : HMFObject

@property (readonly, getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;
@property (readonly, getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;
@property (readonly, getter=isOwner) BOOL owner;

- (id)initWithUser:(id)a0;

@end
