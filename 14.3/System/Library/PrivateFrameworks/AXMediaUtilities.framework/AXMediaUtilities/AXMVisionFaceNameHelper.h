@class NSDate, NSMutableDictionary, VNPersonsModel;

@interface AXMVisionFaceNameHelper : NSObject

@property (retain, nonatomic) VNPersonsModel *_personsModel;
@property (nonatomic) NSDate *_personsModelFileModifiedDate;
@property (retain, nonatomic) NSMutableDictionary *_personLocalIdentifierToName;
@property (nonatomic) double _lastFileModificationCheckTime;

- (void)_resetState;
- (void).cxx_destruct;
- (void)_loadPersonsModel;
- (BOOL)prepareForLookup;
- (unsigned long long)faceprintRequestRevisionForPersonsModel;
- (BOOL)_isDeviceUnlocked;
- (id)nameForFaceObservation:(id)a0;
- (id)_filePathForPersonsModel;
- (id)_fileModificationDateForPath:(id)a0;
- (BOOL)_shouldReloadPersonsModel;
- (BOOL)_checkPhotoLibraryAuthorization;
- (id)_photoAuthorizationMessage:(long long)a0;
- (id)_fetchPersonsForLocalIdentifiers:(id)a0;

@end
