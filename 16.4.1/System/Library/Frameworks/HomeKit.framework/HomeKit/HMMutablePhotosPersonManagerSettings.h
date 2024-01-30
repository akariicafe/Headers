@interface HMMutablePhotosPersonManagerSettings : HMPhotosPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setSharingFaceClassificationsAllowed:(BOOL)a0;

@end
