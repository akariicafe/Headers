@interface PLPhotoSharingHelper : NSObject

+ (BOOL)isCellularConnection;
+ (void)retryOutstandingActivities;
+ (BOOL)hasReachedLimitOfOwnedStreamsInLibrary:(id)a0;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)a0;
+ (BOOL)accountMatchesEmail:(id)a0;
+ (BOOL)hasReachedLimitOfSubscribedStreamsInLibrary:(id)a0;
+ (long long)maxNumDerivativesToPrefetchPerDay;
+ (void)clearCachedAccountState;
+ (void)_userDidDeleteSharedAlbum:(id)a0;
+ (id)_phoneInvitationFailureFile;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)a0 inSharedAlbum:(id)a1;
+ (void)_userDidDeleteSharedAssets:(id)a0;
+ (void)requestVideoPlaybackURLForAsset:(id)a0 videoType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)a0;
+ (id)sharingFirstName;
+ (BOOL)canAcceptPendingInvitationForAlbum:(id)a0 error:(id *)a1;
+ (BOOL)debugDownloadThumbnailsOnly;
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)a0;
+ (double)derivedAssetSmallDimensionLimitForType:(int)a0;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)a0;
+ (struct CGSize { double x0; double x1; })derivedAssetSizeForMasterSizeWidth:(double)a0 height:(double)a1 derivativeType:(int)a2 withSpecificationInfo:(id)a3;
+ (void)removeSubscribers:(id)a0 fromOwnedAlbum:(id)a1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)a0;
+ (void)_resetServerSideConfigurationDictionary;
+ (id)_transactionWithName:(const char *)a0;
+ (BOOL)canSetUserCloudSharedLiked:(BOOL)a0 forAssets:(id)a1 error:(id *)a2;
+ (void)publishCloudSharedAlbumToServer:(id)a0;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)a0;
+ (void)markPendingInvitationAsSpamForAlbum:(id)a0 completionHandler:(id /* block */)a1;
+ (id)temporaryDerivativePathForCollectionGUID:(id)a0 uti:(id)a1;
+ (void)pruneCloudSharingContentIfNecessaryInLibrary:(id)a0;
+ (long long)maxAssetsPerStream;
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)a0;
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)a0 inAlbum:(id)a1;
+ (id)_videoDerivativeForVideoAtURL:(id)a0 outputURL:(id)a1 withPreset:(id)a2 reason:(id)a3 outputFileType:(id)a4;
+ (id)sharingLastName;
+ (void)refreshSubscriberListForAlbumGUID:(id)a0;
+ (void)declinePendingInvitationForAlbum:(id)a0;
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int *)a0 handler:(id /* block */)a1;
+ (void)downloadAsset:(id)a0 cloudPlaceholderKind:(short)a1 shouldPrioritize:(BOOL)a2 shouldExtendTimer:(BOOL)a3;
+ (void)pollForAlbumListUpdatesIfNecessary;
+ (id)_processPhoneFailuresQueue;
+ (unsigned long long)purgeableSpace;
+ (id)streamdVideoCache;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)a0 state:(int)a1 error:(id)a2;
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)a0;
+ (void)_markStreamVideosAsPurgeable;
+ (id)sharingUsername;
+ (BOOL)_sharedStreamsExplicitlyDisabled;
+ (long long)maxCommentsPerAsset;
+ (struct CGSize { double x0; double x1; })videoPosterFrameDimension;
+ (long long)_serverLimitValueForKey:(id)a0 withDefaultResult:(long long)a1;
+ (BOOL)_derivativeExistsForAsset:(id)a0 cloudPlaceholderKind:(short)a1;
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)a0;
+ (BOOL)sharedStreamsEnabledForPhotoLibraryURL:(id)a0;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)a0;
+ (void)acceptPendingInvitationForAlbum:(id)a0 completionHandler:(id /* block */)a1;
+ (void)initializeMSPlatform;
+ (long long)maxNumDerivativesToDownloadPerPush;
+ (id)sharingDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
+ (BOOL)_recentlyRequestedDownloadAsset:(id)a0 cloudPlaceholderKind:(short)a1;
+ (long long)maxNumThumbnailsToPrefetchPerDay;
+ (BOOL)debugAutoAcceptInvitation;
+ (id)sharingPersonID;
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(id /* block */)a0;
+ (void)photosPreferencesChanged;
+ (long long)maxVideoLengthForPublishing;
+ (BOOL)removeCloudSharingDirectories:(id *)a0;
+ (BOOL)debugAlwaysStreamSharedVideos;
+ (id)temporaryVideoPathForCollectionGUID:(id)a0;
+ (void)deleteCommentWithGUIDFromServer:(id)a0;
+ (BOOL)hasPhoneInvitationForAlbum:(id)a0;
+ (void)markAlbumGUIDAsViewed:(id)a0 clearUnseenAssetsCount:(BOOL)a1;
+ (void)deleteCloudSharedAssetsFromServer:(id)a0 inSharedAlbum:(id)a1;
+ (BOOL)isBreadcrumbDebugEnabled;
+ (double)intervalBetweenAlbumPolls;
+ (id)derivativesForMasterAsset:(id)a0 withSpecifications:(id)a1;
+ (long long)maxGIFSizeForPublishing;
+ (id)downloadNotificationForAssetwithUUID:(id)a0 cloudPlaceholderKind:(short)a1;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUID:(id)a0 inviterAddress:(id)a1;
+ (void)applicationIsInForeground:(BOOL)a0 photoLibraryURL:(id)a1;
+ (void)deleteCloudSharedAlbumFromServer:(id)a0;
+ (BOOL)debugDownloadMetadataOnly;
+ (long long)maxOwnedStreams;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)a0 create:(BOOL)a1;
+ (void)forgetSharingPersonID:(id)a0;
+ (id)_temporaryUploadDerivativesPathForCollectionGUID:(id)a0 pathExtension:(id)a1;
+ (id)serverSideConfigurationDictionary;
+ (void)resetAllLocalState;
+ (void)prioritizeDownloadsForAlbumGUID:(id)a0;
+ (long long)maxSubscribedStreams;
+ (BOOL)sharedStreamsExplictlyDisabledForPhotoLibraryURL:(id)a0;
+ (void)accountSettingsChanged;
+ (id)videoDerivativesForAssetCollection:(id)a0 withSpecifications:(id)a1;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)a0 create:(BOOL)a1;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)a0 info:(id)a1;
+ (double)intervalBetweenPolls;
+ (void)markCommentsForAssetCollectionWithGUID:(id)a0 asViewedWithLastViewedDate:(id)a1;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)a0 albumGUID:(id)a1 content:(id)a2 state:(int)a3 error:(id)a4;
+ (id)_localizationKeyForAssets:(id)a0;
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)a0;
+ (BOOL)_sharedStreamsEnabled;
+ (void)writeAlbumNameBreadCrumb:(id)a0 forAlbumGUID:(id)a1 isUpload:(BOOL)a2;
+ (BOOL)canCreateStreamInPhotoLibrary:(id)a0 error:(id *)a1;
+ (void)publishCloudSharedCommentToServer:(id)a0;
+ (long long)maxCharactersPerComment;
+ (unsigned long long)purgeSpace:(unsigned long long)a0;
+ (long long)maxSubscribersPerStream;
+ (void)unsubscribeFromAlbum:(id)a0;
+ (id)prefixForBreadcrumbState:(int)a0;
+ (id)_pathToServerConfigurationCache;
+ (id)photoSharingOriginalFilenameForAsset:(id)a0;
+ (BOOL)debugDownloadAllDerivatives;
+ (id)_downloadRequestQueue;
+ (void)checkServerModelForAlbum:(id)a0 photoLibrary:(id)a1;
+ (void)pollForAlbumListUpdates;

@end
