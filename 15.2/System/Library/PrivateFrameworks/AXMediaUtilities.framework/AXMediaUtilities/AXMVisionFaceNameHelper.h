@class NSDate, NSMutableDictionary, VNPersonsModel;

@interface AXMVisionFaceNameHelper : NSObject

@property (retain, nonatomic) VNPersonsModel *_personsModel;
@property (nonatomic) NSDate *_personsModelFileModifiedDate;
@property (retain, nonatomic) NSMutableDictionary *_personLocalIdentifierToName;
@property (nonatomic) double _lastFileModificationCheckTime;

- (void)_resetState;
- (BOOL)_isDeviceUnlocked;
- (void).cxx_destruct;
- (BOOL)prepareForLookup;
- (unsigned long long)faceprintRequestRevisionForPersonsModel;
- (id)nameForFaceObservation:(id)a0;
- (id)_photoAuthorizationMessage:(long long)a0;
- (id)_filePathForPersonsModel;
- (id)_fileModificationDateForPath:(id)a0;
- (BOOL)_shouldReloadPersonsModel;
- (BOOL)_checkPhotoLibraryAuthorization;
- (BOOL)_loadPersonsModel;
- (id)_fetchPersonsForLocalIdentifiers:(id)a0;

@end
