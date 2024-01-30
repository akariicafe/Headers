@class NSString, UNUserNotificationCenter;
@protocol PLNotificationUNCenterDelegate;

@interface PLNotificationUNCenter : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_unc;
}

@property (weak, nonatomic) id<PLNotificationUNCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_categoryIdentifierForNotification:(id)a0;
+ (id)_readyToViewInvitationCMMCategory;
+ (id)_notificationEnablementKeyForNotificationType:(long long)a0;
+ (id)_suggestedCMMCategory;
+ (id)_contentUserInfoForNotification:(id)a0;
+ (unsigned long long)_interruptionLevelForNotification:(id)a0;
+ (id)_invitationAcceptedCategory;
+ (id)_soundForNotification:(id)a0;
+ (id)_sharedLibraryParticipantAssetTrashNotificationCategory;
+ (id)_invitationsCategoryWithJunkAction:(BOOL)a0;
+ (id)_sharedLibrarySuggestionsCategory;
+ (id)_threadIdentifierForNotification:(id)a0;
+ (id)_updatesCommentedCategory;
+ (id)_expiringCMMCategory;
+ (id)_updatesLikedCategory;
+ (id)_UNNotificationInitialize;
+ (id)_updatesCategory;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)updateBadgeCountWithDelay:(unsigned long long)a0;
- (void)_updateAppBadge;
- (void)removeNotificationWithRequestIdentifiers:(id)a0;
- (void)updateImageData:(id)a0 forNotificationWithIdentifier:(id)a1;
- (void)removeAllNotifications;
- (void)removeNotificationsForNotifications:(id)a0;
- (id)_makeTempThumbnailFileForImageData:(id)a0 identifier:(id)a1;
- (void)findExistingNotificationByIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)sendNotificationForNotification:(id)a0;
- (id)_notificationContentWithNotification:(id)a0 withImageURL:(id)a1 sound:(BOOL)a2;
- (void)_findNotificationForRequestIdentifier:(id)a0 withPendingHandler:(id /* block */)a1 deliveredHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)mergeExistingAndSendNotificationForNotification:(id)a0 requestIdentifier:(id)a1 thumbnailHandler:(id /* block */)a2;
- (id)init;
- (void)sendNotificationForNotification:(id)a0 withAttachmentURL:(id)a1 forceToSound:(BOOL)a2;
- (id)_makeTempThumbnailFileForNotification:(id)a0;
- (void)enumerateExistingNotificationsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_copiedContentFromContent:(id)a0 WithImageData:(id)a1 identifier:(id)a2;
- (void)mergeExistingAndSendNotificationForNotification:(id)a0 thumbnailHandler:(id /* block */)a1;

@end
