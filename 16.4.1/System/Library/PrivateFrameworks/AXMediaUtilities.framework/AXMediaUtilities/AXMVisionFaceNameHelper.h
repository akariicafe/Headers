@class NSDate, NSMutableDictionary, VNPersonsModel;

@interface AXMVisionFaceNameHelper : NSObject

@property (retain, nonatomic) VNPersonsModel *_personsModel;
@property (nonatomic) NSDate *_personsModelFileModifiedDate;
@property (retain, nonatomic) NSMutableDictionary *_personLocalIdentifierToName;
@property (nonatomic) double _lastFileModificationCheckTime;

- (void)_resetState;
- (void).cxx_destruct;
- (BOOL)_checkPhotoLibraryAuthorization;
- (id)_fetchPersonsForLocalIdentifiers:(id)a0 withPhotoLibraryURL:(id)a1;
- (id)_fileModificationDateForPath:(id)a0;
- (id)_filePathForPersonsModelWithPhotoLibraryURL:(id)a0;
- (BOOL)_isDeviceUnlocked;
- (BOOL)_loadPersonsModelWithPhotoLibraryURL:(id)a0;
- (id)_photoAuthorizationMessage:(long long)a0;
- (BOOL)_shouldReloadPersonsModelWithPhotoLibraryURL:(id)a0;
- (unsigned long long)faceprintRequestRevisionForPersonsModel;
- (id)nameForFaceObservation:(id)a0;
- (id)photoLibraryWithURL:(id)a0;
- (BOOL)prepareForLookupWithPhotoLibraryURL:(id)a0;

@end
