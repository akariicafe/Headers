@interface IMCoreAutomationNotifications : NSObject

@property (readonly) long long chatsWrittenCount;
@property (readonly) long long messagesWrittenCount;
@property (readonly) long long attachmentsWrittenCount;
@property (readonly) long long recoverableMessagesWrittenCount;

+ (id)sharedInstance;

- (id)init;
- (void)clearSyncCounts;
- (void)addNewAttachmentsSyncedCount:(long long)a0;
- (void)addNewChatsSyncedCount:(long long)a0;
- (void)addNewMessagesSyncedCount:(long long)a0;
- (void)addNewRecoverableMessagesSyncedCount:(long long)a0;
- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)a0 chatsDidsync:(BOOL)a1 messagesDidSync:(BOOL)a2 attachmentsDidSync:(BOOL)a3 recoverableMessagesDidSync:(BOOL)a4;
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)a0 withErrorString:(id)a1;
- (void)postCoreAutomationNotificationFinishedTapToDownload:(id)a0 downloadedFromCloudKitSuccessfully:(BOOL)a1;
- (void)postCoreAutomationNotificationPeriodicSyncUpdateNotification;
- (void)postCoreAutomationNotificationWithAction:(id)a0;
- (void)postCoreAutomationNotificationWithDictionary:(id)a0 withVerboseLogging:(BOOL)a1;

@end
