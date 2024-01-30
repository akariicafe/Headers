@class CNContactStore, NSString, NSMutableDictionary, PLNotificationUNCenter, NSObject;
@protocol OS_dispatch_queue;

@interface PLNotificationManager : NSObject <PLNotificationUNCenterDelegate> {
    BOOL _badgeCountIsInvalid;
    BOOL _enableTemporaryDebugMode;
    CNContactStore *_contactStore;
    int _alertFiltrationEnabled;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_waitingAssetsAddNotifications;
}

@property (retain, nonatomic) PLNotificationUNCenter *UNCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filteredAlbumListForContentMode:(int)a0 library:(id)a1;
+ (id)sharedManager;
+ (id)_notificationDeliveryDate;
+ (id)_bestDateForDeliveringNotificationWithError:(id *)a0;

- (void)removeNotificationForSuggestedCMMWithUUID:(id)a0;
- (void)noteDidReceiveExpiringCMMInvitationsWithMomentShares:(id)a0;
- (void)sendResponse:(BOOL)a0 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)a1;
- (void)noteUserDidReadCommentOnSharedAsset:(id)a0 photoLibrary:(id)a1;
- (id)init;
- (id)contactStore;
- (BOOL)_isMyEmailAddress:(id)a0;
- (id)_waitingNotificationForPhotosBatchID:(id)a0;
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)a0;
- (void).cxx_destruct;
- (void)postNotificationForExpiringCMMsWithUUIDs:(id)a0 thumbnailImageData:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3;
- (void)noteUserAssetsAreReadyForMomentShare:(id)a0;
- (void)noteUserDidNavigateIntoSharedAlbum:(id)a0 photoLibrary:(id)a1;
- (void)noteDidReceiveCMMInvitationWithMomentShare:(id)a0;
- (void)dealloc;
- (void)_updateImageDataForNotification:(id)a0;
- (void)calculateCurrentBadgeCountWithCompletionHandler:(id /* block */)a0;
- (void)postNotificationForInterestingMemoryWithMemoryUUID:(id)a0 library:(id)a1 notificationDeliveryDate:(id)a2;
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)a0 photoLibrary:(id)a1;
- (id)_initSharedInstance;
- (void)_deleteNotificationsForObjectWithUUID:(id)a0 notificationDictionaryKey:(id)a1 notificationTypes:(id)a2;
- (BOOL)_notificationType:(long long)a0 matchesCommentsOrLikeNotifications:(BOOL)a1 andPhotosAddedToAlbumNotifications:(BOOL)a2;
- (id)_generateMemoryNotificationRepresentationWithMemoryUUID:(id)a0 keyAssetUUID:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3 notificationDeliveryDate:(id)a4;
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(id)a0;
- (unsigned long long)_appBadgeCount;
- (void)noteDidReceiveLike:(id)a0 mstreamdInfo:(id)a1;
- (void)postNotificationForSuggestedCMMWithUUID:(id)a0 library:(id)a1 notificationDeliveryDate:(id)a2;
- (void)_removeWaitingNotificationForPhotosBatchID:(id)a0;
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)a0;
- (void)discardAllNotifications;
- (void)noteDidReceiveInvitationForSharedAlbum:(id)a0;
- (BOOL)enableTemporaryDebugMode;
- (void)triggerNotificationThumbnailUpdateForAsset:(id)a0;
- (void)noteUserDidLeavePhotosApplication;
- (void)noteSharedAlbumUnseenStatusDidChange:(id)a0;
- (void)_deleteNotificationsForAlbumWithUUID:(id)a0 notificationTypes:(id)a1;
- (BOOL)_shouldAllowAlertsFromContactWithEmail:(id)a0;
- (void)noteDidReceiveComment:(id)a0 mstreamdInfo:(id)a1;
- (void)noteDidChangePlaceholderKindForAsset:(id)a0 fromOldKind:(short)a1 forSharedAlbum:(id)a2 mstreamdInfo:(id)a3;
- (unsigned long long)currentAppBadgeCountForNotificationUNCenter:(id)a0;
- (void)getThumbnailImageDataAssetUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteUserDidViewCloudFeedContent:(long long)a0 photoLibrary:(id)a1;
- (void)removeNotificationForInterestingMemoryWithUUID:(id)a0;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0;
- (void)noteDidDeleteSharedAlbum:(id)a0;
- (void)_resetAlertFiltration;
- (BOOL)_alertFiltrationEnabled;
- (id)_addWaitingNotification:(id)a0 forPhotosBatchID:(id)a1;
- (void)setEnableTemporaryDebugMode:(BOOL)a0;
- (id)_memoryNotificationFromDictionaryRepresentation:(id)a0;
- (void)_deleteNotificationsForAssetWithUUID:(id)a0 shouldDeleteCommentsOrLikeNotifications:(BOOL)a1 shouldDeletePhotosAddedToAlbumNotifications:(BOOL)a2;
- (void)noteUserDidChangeStatusForMomentShare:(id)a0 photoLibrary:(id)a1;
- (void)noteUserDidChangeStatusForSuggestedCMMWithUUID:(id)a0;
- (void)noteDidReceiveAssets:(id)a0 forSharedAlbum:(id)a1 mstreamdInfo:(id)a2;
- (void)userViewedNotificationWithAlbumCloudGUID:(id)a0;
- (void)_deleteNotificationsForMemoriesWithUUID:(id)a0 notificationTypes:(id)a1;
- (void)noteInvitationRecordStatusChanged:(id)a0 fromOldState:(long long)a1 mstreamdInfo:(id)a2;
- (void)noteMultipleContributorStatusChangedForAlbum:(id)a0 mstreamdInfo:(id)a1;
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)a0;

@end
