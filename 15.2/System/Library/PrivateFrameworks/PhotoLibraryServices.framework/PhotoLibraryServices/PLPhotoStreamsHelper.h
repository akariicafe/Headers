@interface PLPhotoStreamsHelper : NSObject {
    BOOL _appHasPolledOnceThisForegroundSession;
}

+ (BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)a0;
+ (BOOL)photoStreamsEnabledForPhotoLibraryBundle:(id)a0;
+ (void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)a0 withReason:(id)a1 jobStreamID:(id)a2 completion:(id /* block */)a3;
+ (id)sharedPhotoStreamsHelper;
+ (BOOL)_photoStreamsEnabled;
+ (id)iCloudServiceAccount;
+ (BOOL)writeBreadcrumbContent:(id)a0 forHashString:(id)a1;

- (void)clearCachedAccountState;
- (BOOL)removeBreadcrumbsForHashString:(id)a0;
- (void)initiateDeletionOfOriginalAssets:(id)a0;
- (void)savePhotoStreamMetadata:(id)a0 forAsset:(id)a1;
- (BOOL)isValidUploadAsset:(id)a0 type:(id)a1 fileSize:(id)a2;
- (struct CGSize { double x0; double x1; })derivedAssetSizeForMasterSizeWidth:(double)a0 height:(double)a1;
- (void)_accountStoreDidChange:(id)a0;
- (long long)friendsLimit;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)a0 withBlock:(id /* block */)a1;
- (void)fetchMPSStateWithLibrary:(id)a0 completion:(id /* block */)a1;
- (void)resume_mstreamd:(id)a0;
- (void)pollForNewSubscriptionContent;
- (id)lastPhotoStreamUpdateDate;
- (void)writeDidPublishBreadcrumbforHash:(id)a0 imagePath:(id)a1;
- (void)handleMPSStateIfNecessaryInLibrary:(id)a0;
- (id)pause_mstreamd;
- (id)derivedAssetForMasterAsset:(id)a0;
- (long long)maxPixelSizeForDerivative;
- (void)_appDidEnterBackground:(id)a0;
- (void)_clearPhotoStreamAccountSettings;
- (void)initiateDeletionOfPhotoStreamAssets:(id)a0;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (id)psHashAsString:(id)a0;
- (BOOL)shouldPublishScreenShots;
- (id)pathToSavedMetadataForAssetHash:(id)a0 streamID:(id)a1 createIntermediateDirs:(BOOL)a2;
- (long long)imageLimitForFriendStream;
- (id)temporaryPathForRecentlyUploadedAsset:(id)a0;
- (id)init;
- (BOOL)enqueueAssetForPSPublishing:(id)a0 fullPath:(id)a1 fileSize:(id)a2 reenqueueCount:(unsigned long long)a3 publicGlobalUUID:(id *)a4;
- (long long)imageLimitForOwnStream;
- (void)writeDidEnqueueBreadcrumbForHash:(id)a0 imagePath:(id)a1;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)a0 forStreamID:(id)a1;
- (id)temporaryPathForConvertedAssetWithUUID:(id)a0;
- (void)dealloc;
- (void)writeWillEnqueueBreadcrumbForHash:(id)a0 imagePath:(id)a1;
- (BOOL)dequeueAssetsForPSPublishing:(id)a0;
- (long long)_serverIntegerLimitForKey:(id)a0 debugDefaultKey:(id)a1;
- (id)psHashForData:(id)a0;
- (void)resetServerState;
- (id)photoStreamsPublishStreamID;
- (id)imageLimitsByAssetType;

@end
