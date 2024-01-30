@class UNUserNotificationCenter;
@protocol PLNotificationUNCenterDelegate;

@interface PLNotificationUNCenter : NSObject {
    UNUserNotificationCenter *_unc;
}

@property (weak, nonatomic) id<PLNotificationUNCenterDelegate> delegate;

+ (id)_soundForNotification:(id)a0;
+ (id)_invitationsCategoryWithJunkAction:(BOOL)a0;
+ (id)_threadIdentifierForNotification:(id)a0;
+ (id)_readyToViewInvitationCMMCategory;
+ (id)_updatesCommentedCategory;
+ (id)_contentUserInfoForNotification:(id)a0;
+ (id)_topicIdentifiersForNotificationType:(long long)a0;
+ (id)_invitationAcceptedCategory;
+ (id)_expiringCMMCategory;
+ (id)_categoryIdentifierForNotification:(id)a0;
+ (id)_suggestedCMMCategory;
+ (id)_UNNotificationInitialize;
+ (id)_updatesLikedCategory;
+ (id)_updatesCategory;

- (id)init;
- (void).cxx_destruct;
- (id)_copiedContentFromContent:(id)a0 WithImageData:(id)a1 identifier:(id)a2;
- (id)_makeTempThumbnailFileForImageData:(id)a0 identifier:(id)a1;
- (void)removeNotificationWithRequestIdentifiers:(id)a0;
- (void)enumerateExistingNotificationsUsingBlock:(id /* block */)a0;
- (void)sendNotificationForNotification:(id)a0;
- (id)_makeTempThumbnailFileForNotification:(id)a0;
- (void)_findNotificationForRequestIdentifier:(id)a0 withPendingHandler:(id /* block */)a1 deliveredHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)removeNotificationsForNotifications:(id)a0;
- (void)_updateAppBadge;
- (void)mergeExistingAndSendNotificationForNotification:(id)a0 thumbnailHandler:(id /* block */)a1;
- (void)sendNotificationForNotification:(id)a0 withAttachmentURL:(id)a1 forceToSound:(BOOL)a2;
- (id)_notificationContentWithNotification:(id)a0 withImageURL:(id)a1 sound:(BOOL)a2;
- (void)updateImageData:(id)a0 forNotificationWithIdentifier:(id)a1;
- (void)mergeExistingAndSendNotificationForNotification:(id)a0 requestIdentifier:(id)a1 thumbnailHandler:(id /* block */)a2;
- (void)updateBadgeCountWithDelay:(unsigned long long)a0;
- (void)findExistingNotificationByIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeAllNotifications;

@end
