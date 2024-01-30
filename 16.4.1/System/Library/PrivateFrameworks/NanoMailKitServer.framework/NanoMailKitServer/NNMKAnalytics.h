@interface NNMKAnalytics : NSObject

+ (id)sharedInstance;
+ (BOOL)_reportingEnabled;

- (id)stringForSource:(unsigned long long)a0;
- (id)stringForAction:(unsigned long long)a0;
- (void)NNMKSendEventLazyWithKey:(id)a0 metadataBuilder:(id /* block */)a1;
- (void)reportFetch:(unsigned long long)a0 inMode:(unsigned long long)a1 accountType:(id)a2;
- (long long)_delayInMSFromDate:(id)a0;
- (void)reportAction:(unsigned long long)a0 source:(unsigned long long)a1;
- (void)reportAppBackgroundRefreshed;
- (void)reportAppLaunched;
- (void)reportAppResumed;
- (void)reportAttachmentDataReceivedWithType:(unsigned long long)a0 sizeInBytes:(unsigned long long)a1 mode:(unsigned long long)a2;
- (void)reportAttachmentDisplayedWithType:(unsigned long long)a0 actionable:(BOOL)a1 source:(unsigned long long)a2;
- (void)reportAttachmentDownloadFailedInMode:(unsigned long long)a0;
- (void)reportAttachmentTappedWithType:(unsigned long long)a0 actionable:(BOOL)a1 source:(unsigned long long)a2;
- (void)reportCannedReplyUsed:(id)a0 sendingType:(unsigned long long)a1;
- (void)reportCellRighSwipeActionChanged:(id)a0;
- (void)reportContentDisplayedForMessageWithId:(id)a0 hasMainAlternative:(BOOL)a1 hasTextAlternative:(BOOL)a2;
- (void)reportContentDownloadFailedInMode:(unsigned long long)a0;
- (void)reportContentDownloadedForMessageWithId:(id)a0 textSizeInBytes:(unsigned long long)a1 htmlSizeInBytes:(unsigned long long)a2 startTime:(id)a3;
- (void)reportContentSyncedForMessageWithId:(id)a0 textSizeInBytes:(unsigned long long)a1 htmlSizeInBytes:(unsigned long long)a2 fullSyncVersion:(unsigned long long)a3 dateSynced:(id)a4;
- (void)reportCredentialsExpired;
- (void)reportDisplayingMessageWithType:(unsigned long long)a0 isNotification:(BOOL)a1;
- (void)reportFailedFetchWithType:(unsigned long long)a0 inMode:(unsigned long long)a1;
- (void)reportFullSyncRequestedFromDevice:(unsigned long long)a0 corruptionDetected:(BOOL)a1 migrationRelated:(BOOL)a2 idsFailureRelated:(BOOL)a3 fullSyncVersionMatchRelated:(BOOL)a4;
- (void)reportHaltSyncRequestedFromSource:(unsigned long long)a0;
- (void)reportMailboxSelectionChanged:(id)a0 source:(unsigned long long)a1;
- (void)reportMessageDeletionReceivedForMessageWithId:(id)a0 fullSyncVersion:(unsigned long long)a1 dateSynced:(id)a2;
- (void)reportMessageDeliveryDurationWithStartDate:(id)a0 inMode:(unsigned long long)a1;
- (void)reportMessageDeliveryFailedInMode:(unsigned long long)a0;
- (void)reportMessageReceivedWithId:(id)a0 willGenerateNotification:(BOOL)a1 fullSyncVersion:(unsigned long long)a2 dateSynced:(id)a3;
- (void)reportMessageSentFrom:(long long)a0 sendingType:(unsigned long long)a1 attachmentCount:(unsigned long long)a2 sizeInBytes:(unsigned long long)a3;
- (void)reportMessageUpdateReceivedForMessageWithId:(id)a0 fullSyncVersion:(unsigned long long)a1 dateSynced:(id)a2;
- (void)reportMoreMessagesReceivedConversationSpecific:(BOOL)a0 fullSyncVersion:(unsigned long long)a1 dateSynced:(id)a2;
- (void)reportNotificationReceivedInMode:(unsigned long long)a0 accountType:(id)a1;
- (void)reportNotificationReceivedInMode:(unsigned long long)a0 isPCC:(BOOL)a1 accountType:(id)a2;
- (void)reportOpenedMailboxWithFilter:(id)a0 mailboxType:(unsigned long long)a1 accountType:(id)a2;
- (void)reportOriginalMessageContentSizeInBytes:(unsigned long long)a0 source:(unsigned long long)a1;
- (void)reportReachedActionButtonsWithSource:(unsigned long long)a0;
- (void)reportRenderedNotificationUsingLocalContent:(BOOL)a0 mailboxSynced:(BOOL)a1 messageSynced:(BOOL)a2 contentDownloaded:(BOOL)a3;
- (void)reportSubscribedToNotificationForAccountType:(id)a0 isPCC:(BOOL)a1;
- (void)reportThreadViewedWithMessageCount:(long long)a0;
- (void)reportWebKitLinkTapped;
- (void)reportWebKitRenderingProcessCrash;
- (id)stringForAttachmentType:(unsigned long long)a0;
- (id)stringForCompositionSource:(long long)a0;
- (id)stringForDeviceMode:(unsigned long long)a0;
- (id)stringForDeviceSource:(unsigned long long)a0;
- (id)stringForFetchType:(unsigned long long)a0;
- (id)stringForMailboxFilterType:(unsigned long long)a0;
- (id)stringForMailboxType:(unsigned long long)a0;
- (id)stringForMessageType:(unsigned long long)a0;
- (id)stringForSendingType:(unsigned long long)a0;

@end
