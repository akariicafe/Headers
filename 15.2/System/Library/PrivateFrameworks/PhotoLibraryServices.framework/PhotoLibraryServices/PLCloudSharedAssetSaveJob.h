@class NSString, NSDictionary, MSASAssetCollection, NSArray, AssetCollectionInfo, NSMutableArray;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob {
    BOOL _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    NSMutableArray *_pendingDownloadNotifications;
}

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;
@property (retain, nonatomic) NSString *currentFilePath;
@property (retain, nonatomic) NSString *currentCloudAssetGUID;
@property (nonatomic) unsigned long long currentCloudAssetMediaAssetType;
@property (retain, nonatomic) NSString *cloudAlbumGUID;
@property (retain, nonatomic) NSString *cloudPersonID;
@property (retain, nonatomic) MSASAssetCollection *currentCloudAssetCollection;
@property (retain, nonatomic) NSArray *assetCollectionInfos;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isPhotoIris;
@property (retain, nonatomic) NSArray *cloudAssetGUIDsToDelete;

+ (id)pathForInFlightAssetCollectionWithGUID:(id)a0 mediaAssetType:(unsigned long long)a1;
+ (BOOL)_lightweightReimportCacheDirectoryExists;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)a0 cloudPersonID:(id)a1;
+ (id)newCloudSharedAssetSaveJobFromAProcessThatIsNotAssetsd;
+ (void)processMetadataForAssetCollections:(id)a0 inAlbum:(id)a1 personID:(id)a2 info:(id)a3;
+ (void)downloadPendingAssetsForPersonID:(id)a0 info:(id)a1;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)a0 info:(id)a1;
+ (void)saveCloudSharedAssetAtPath:(id)a0 forAssetCollection:(id)a1 mediaAssetType:(unsigned long long)a2 albumGUID:(id)a3 personID:(id)a4 info:(id)a5 shouldPrioritize:(BOOL)a6;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)a0 inAlbum:(id)a1 personID:(id)a2;
+ (id)_dcimDirectoryForFileURL:(id)a0;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)a0 cloudAlbumGUID:(id)a1 fileExtension:(id)a2 assetUUID:(id)a3;
+ (void)assetsdProcessMetadataForAssetCollections:(id)a0 inAlbum:(id)a1 personID:(id)a2 info:(id)a3 libraryServicesManager:(id)a4;

- (long long)daemonOperation;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)run;
- (id)initWithAssetsdClient:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)runDaemonSide;
- (void)_updateAsset:(id)a0 withImageFileURL:(id)a1;
- (void)encodeToXPCObject:(id)a0;
- (void)setupSaveAssetMetadataForCollectionsJobForAssetCollections:(id)a0 album:(id)a1 personID:(id)a2 info:(id)a3;
- (void)dealloc;
- (BOOL)isProcessingThumbnail;
- (short)placeHolderKindFromAssetMetadataType:(unsigned long long)a0;
- (void)executeDaemonOperationSaveAssetJobType;
- (id)_createPlaceHolderInSharedAlbum:(id)a0;
- (void)_processInFlightCommentsForAsset:(id)a0 inAlbum:(id)a1 inPhotoLibrary:(id)a2;
- (BOOL)_processSaveAssetWithPlaceholderKind:(short)a0 inLibrary:(id)a1 withAssetDataFilePath:(id)a2;
- (short)attemptLightweightReimportAssetDataInLibrary:(id)a0;
- (void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)a0 inManagedObjectContext:(id)a1;
- (void)_addDownloadNotification:(id)a0;
- (void)_performSaveTransactionAndWaitOnLibrary:(id)a0 transaction:(id /* block */)a1 completion:(id /* block */)a2;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (BOOL)_processInflightAsset:(id)a0 mediaAssetType:(unsigned long long)a1;
- (void)_prefetchLimitForDerivatives:(long long *)a0 thumbnails:(long long *)a1;
- (void)_incrementDerivativesCount:(long long)a0 thumbnailsCount:(long long)a1;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (unsigned long long)_insertionIndexForAsset:(id)a0 inAlbum:(id)a1;

@end
