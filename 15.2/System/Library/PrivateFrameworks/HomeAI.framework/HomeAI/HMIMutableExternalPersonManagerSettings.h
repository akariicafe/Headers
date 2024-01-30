@interface HMIMutableExternalPersonManagerSettings : HMIExternalPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
