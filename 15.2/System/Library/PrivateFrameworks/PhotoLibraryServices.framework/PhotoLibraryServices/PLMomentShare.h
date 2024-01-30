@class NSString, NSSet, NSData, NSDate;

@interface PLMomentShare : PLShare <PLCloudDeletable>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) int assetCount;
@property (nonatomic) int photosCount;
@property (nonatomic) int videosCount;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) int uploadedVideosCount;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSData *previewData;
@property (nonatomic) BOOL shouldIgnoreBudgets;
@property (nonatomic) BOOL shouldNotifyOnUploadCompletion;
@property (nonatomic) BOOL forceSyncAttempted;
@property (copy, nonatomic) NSString *originatingScopeIdentifier;
@property (retain, nonatomic) NSSet *momentShareAssets;
@property (retain, nonatomic) NSSet *momentShareMasters;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)a0 inPhotoLibrary:(id)a1;
+ (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 inPhotoLibrary:(id)a3;
+ (void)forceSyncMomentShares:(id)a0 photoLibrary:(id)a1;
+ (id)momentSharesReferencedInUploadBatchContainer:(id)a0 inPhotoLibrary:(id)a1;
+ (id)scopeIdentifierPrefix;
+ (id)momentShareWithOriginatingScopeIdentifier:(id)a0 inManagedObjectContext:(id)a1;
+ (id)listOfSyncedProperties;
+ (BOOL)supportsCPLScopeType:(long long)a0;

- (void)prepareForDeletion;
- (void)trash;
- (void)willSave;
- (void)_updateWithScopeChange:(id)a0;
- (void)calculatePropertyValues;
- (BOOL)_shouldAutoAccept;
- (BOOL)_isOwnerInContacts;
- (unsigned long long)estimateUploadSize;
- (id)_contactStore;
- (id)cplScopeChange;
- (BOOL)isSyncableChange;
- (void)autoAcceptShareIfNecessary;
- (void)publishWithCompletionHandler:(id /* block */)a0;
- (BOOL)supportsCloudUpload;

@end
