@class CNContactStore, NSString, NSMutableDictionary, PLNotificationUNCenter, NSObject;
@protocol OS_dispatch_queue;

@interface PLNotificationManager : NSObject <PLNotificationUNCenterDelegate> {
    BOOL _badgeCountIsInvalid;
    BOOL _enableTemporaryDebugMode;
    CNContactStore *_contactStore;
    int _alertFiltrationEnabled;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_waitingAssetsAddNotifications;
    struct __CFUserNotification { } *_processCinematicVideoItemsPrompt;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processCinematicVideoItemsPromptLock;
}

@property (retain, nonatomic) PLNotificationUNCenter *UNCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_bestDateForDeliveringNotificationFromCoreDuetWithError:(id *)a0;
+ (id)_notificationDeliveryDate;
+ (id)sharedManager;
+ (id)_bestDateForDeliveringNotification;
+ (id)filteredAlbumListForContentMode:(int)a0 library:(id)a1;

- (void)postNotificationForPhotosChallengeNewQuestionsWithNotificationDeliveryDate:(id)a0;
- (void)noteUserDidReadCommentOnSharedAsset:(id)a0 photoLibrary:(id)a1;
- (void)_deleteNotificationsForObjectWithUUID:(id)a0 notificationDictionaryKey:(id)a1 notificationTypes:(id)a2;
- (void)calculateCurrentBadgeCountWithCompletionHandler:(id /* block */)a0;
- (void)noteSharedAlbumUnseenStatusDidChange:(id)a0;
- (id)contactStore;
- (void)noteUserAssetsAreReadyForMomentShare:(id)a0;
- (void)_deleteNotificationsForAssetWithUUID:(id)a0 shouldDeleteCommentsOrLikeNotifications:(BOOL)a1 shouldDeletePhotosAddedToAlbumNotifications:(BOOL)a2;
- (void)noteDidReceiveInvitationForSharedAlbum:(id)a0;
- (id)_generateMemoryNotificationRepresentationWithMemoryUUID:(id)a0 keyAssetUUID:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3 notificationDeliveryDate:(id)a4 pathManager:(id)a5;
- (void)noteDidReceiveCMMInvitationWithMomentShare:(id)a0;
- (void)postNotificationForSuggestedCMMWithUUID:(id)a0 library:(id)a1 notificationDeliveryDate:(id)a2;
- (unsigned long long)_appBadgeCount;
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)a0;
- (void)noteDidReceiveAssets:(id)a0 forSharedAlbum:(id)a1 mstreamdInfo:(id)a2;
- (void)removeNotificationForInterestingMemoryWithUUID:(id)a0;
- (void)userViewedNotificationWithAlbumCloudGUID:(id)a0;
- (void)removeNotificationForInterestInUnrenderedCinematicVideoItems;
- (void)sendResponse:(BOOL)a0 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)a1;
- (BOOL)_isMyEmailAddress:(id)a0;
- (void)_postAsyncNotificationForSharedLibraryParticipantAssetTrashWithTrashedAssetPhotoCount:(unsigned long long)a0 videoCount:(unsigned long long)a1 itemCount:(unsigned long long)a2 withNotificationDeliveryDate:(id)a3 transaction:(id)a4;
- (void)_postAsyncNotificationForSharedLibrarySuggestionsWithNotificationDeliveryDate:(id)a0 transaction:(id)a1;
- (void)noteInvitationRecordStatusChanged:(id)a0 fromOldState:(long long)a1 mstreamdInfo:(id)a2;
- (id)_initSharedInstance;
- (void)noteDidReceiveExpiringCMMInvitationsWithMomentShares:(id)a0;
- (void)noteUserDidLeavePhotosApplication;
- (void)triggerNotificationThumbnailUpdateForAsset:(id)a0;
- (void)_updateImageDataForNotification:(id)a0;
- (void)dealloc;
- (void)_deleteNotificationsForAlbumWithUUID:(id)a0 notificationTypes:(id)a1;
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)a0;
- (void)postNotificationForPhotosChallengeSubmissionWithNotificationDeliveryDate:(id)a0;
- (void)discardAllNotifications;
- (void)_postAsyncNotificationForPhotosChallengeSubmissionWithNotificationDeliveryDate:(id)a0 transaction:(id)a1;
- (void)getThumbnailImageDataAssetUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteUserDidViewCloudFeedContent:(long long)a0 photoLibrary:(id)a1;
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)a0;
- (void)postNotificationForInterestInUnrenderedCinematicVideoItems;
- (void)_postNotificationForSharedLibraryExitInitatedByOwnerWithTypeWithExitType:(short)a0 retentionPolicy:(long long)a1 ownerName:(id)a2 notificationDeliveryDate:(id)a3 transaction:(id)a4;
- (unsigned long long)currentAppBadgeCountForNotificationUNCenter:(id)a0;
- (id)_waitingNotificationForPhotosBatchID:(id)a0;
- (void)postNotificationForInterestingMemoryWithMemoryUUID:(id)a0 library:(id)a1 notificationDeliveryDate:(id)a2;
- (void)postNotificationForExpiringCMMsWithUUIDs:(id)a0 thumbnailImageData:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3;
- (void)setEnableTemporaryDebugMode:(BOOL)a0;
- (void)noteDidDeleteSharedAlbum:(id)a0;
- (void)noteDidChangePlaceholderKindForAsset:(id)a0 fromOldKind:(short)a1 forSharedAlbum:(id)a2 mstreamdInfo:(id)a3;
- (id)_memoryNotificationFromDictionaryRepresentation:(id)a0;
- (void)noteMultipleContributorStatusChangedForAlbum:(id)a0 mstreamdInfo:(id)a1;
- (void)_resetAlertFiltration;
- (void)_deleteNotificationsForMemoriesWithUUID:(id)a0 notificationTypes:(id)a1;
- (id)init;
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(id)a0;
- (void)postNotificationForSharedLibraryParticipantAssetTrashWithTrashedAssetPhotoCount:(unsigned long long)a0 videoCount:(unsigned long long)a1 itemCount:(unsigned long long)a2 withNotificationDeliveryDate:(id)a3;
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)a0 photoLibrary:(id)a1;
- (void)removeNotificationForSuggestedCMMWithUUID:(id)a0;
- (id)_addWaitingNotification:(id)a0 forPhotosBatchID:(id)a1;
- (BOOL)_shouldAllowAlertsFromContactWithEmail:(id)a0;
- (void)noteDidReceiveLike:(id)a0 mstreamdInfo:(id)a1;
- (void)noteUserDidChangeStatusForSuggestedCMMWithUUID:(id)a0;
- (void)postNotificationForSharedLibraryExitInitatedByOwnerWithTypeWithExitType:(short)a0 retentionPolicy:(long long)a1 ownerName:(id)a2 notificationDeliveryDate:(id)a3;
- (BOOL)enableTemporaryDebugMode;
- (BOOL)_notificationType:(long long)a0 matchesCommentsOrLikeNotifications:(BOOL)a1 andPhotosAddedToAlbumNotifications:(BOOL)a2;
- (void)noteDidReceiveComment:(id)a0 mstreamdInfo:(id)a1;
- (void)postNotificationForAcceptedSharedLibraryWithScopeIdentifier:(id)a0 participantName:(id)a1 library:(id)a2 notificationDeliveryDate:(id)a3;
- (void)noteUserDidChangeStatusForMomentShare:(id)a0 photoLibrary:(id)a1;
- (void)_postAsyncNotificationForAcceptedSharedLibraryWithScopeIdentifier:(id)a0 participantName:(id)a1 NotificationDeliveryDate:(id)a2 transaction:(id)a3;
- (void)removeNotificationForSharedLibraryParticipantAssetTrash;
- (void)postNotificationForSharedLibrarySuggestionsWithNotificationDeliveryDate:(id)a0;
- (BOOL)_alertFiltrationEnabled;
- (void)_removeWaitingNotificationForPhotosBatchID:(id)a0;
- (void).cxx_destruct;
- (void)_postAsyncNotificationForPhotosChallengeNewQuestionsWithNotificationDeliveryDate:(id)a0 transaction:(id)a1;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0;
- (void)noteUserDidNavigateIntoSharedAlbum:(id)a0 photoLibrary:(id)a1;

@end
