@class PLPerson, NSString, PLDetectedFace, NSData, PLManagedAsset;

@interface PLFaceCrop : PLManagedObject <PLSyncableObject, PLCloudDeletable>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (nonatomic) short type;
@property (nonatomic) unsigned short cloudType;
@property (nonatomic) short state;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSData *resourceData;
@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) PLDetectedFace *face;
@property (retain, nonatomic) NSString *invalidMergeCandidatePersonUUID;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (readonly, retain, nonatomic) id localID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;

+ (id)insertOrUpdateWithCPLFaceCrop:(id)a0 inPhotoLibrary:(id)a1;
+ (id)entityName;
+ (id)faceCropsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)faceCropsToUploadInPhotoLibrary:(id)a0 limit:(unsigned long long)a1;
+ (void)resetCloudStateInPhotoLibrary:(id)a0;
+ (long long)_cloudTypeToPushFromLocalType:(short)a0 cachedCloudType:(unsigned short)a1;
+ (int)_trainingFaceTypeForFaceFromFaceCrop:(id)a0;
+ (int)_nameSourceForFaceFromFaceCrop:(id)a0;
+ (id)insertIntoManagedObjectContext:(id)a0 withUUID:(id)a1 resourceData:(id)a2 type:(short)a3;
+ (id)_faceCropsMatchingPredicate:(id)a0 limit:(unsigned long long)a1 inManagedObjectContext:(id)a2;
+ (id)allFaceCropsInPhotoLibrary:(id)a0;
+ (id)faceCropsWithUUIDs:(id)a0 inManagedObjectContext:(id)a1;
+ (short)_localTypeFromCloudType:(long long)a0;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)listOfSyncedProperties;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1 resourceData:(id)a2 type:(short)a3;
+ (id)batchFetchFaceCropByFaceObjectIDWithFaceObjectIDs:(id)a0 library:(id)a1;

- (void)willSave;
- (void)prepareForDeletion;
- (id)momentShare;
- (id)cplFaceCropChange;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (id)cplFullRecord;
- (void)applyPropertiesToTrainingFace;

@end
