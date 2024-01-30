@interface NNMKAnalytics : NSObject

+ (id)sharedInstance;
+ (BOOL)_reportingEnabled;

- (id)stringForAction:(unsigned long long)a0;
- (id)stringForSource:(unsigned long long)a0;
- (id)stringForFetchType:(unsigned long long)a0;
- (id)stringForDeviceMode:(unsigned long long)a0;
- (void)NNMKSendEventLazyWithKey:(id)a0 metadataBuilder:(id /* block */)a1;
- (long long)_delayInMSFromDate:(id)a0;
- (id)stringForDeviceSource:(unsigned long long)a0;
- (id)stringForMailboxType:(unsigned long long)a0;
- (id)stringForSendingType:(unsigned long long)a0;
- (void)reportFetch:(unsigned long long)a0 inMode:(unsigned long long)a1;
- (void)reportFailedFetchWithType:(unsigned long long)a0 inMode:(unsigned long long)a1;
- (void)reportMessageReceivedWithId:(id)a0 willGenerateNotification:(BOOL)a1 fullSyncVersion:(unsigned long long)a2 dateSynced:(id)a3;
- (void)reportMoreMessagesReceivedConversationSpecific:(BOOL)a0 fullSyncVersion:(unsigned long long)a1 dateSynced:(id)a2;
- (void)reportMessageUpdateReceivedForMessageWithId:(id)a0 fullSyncVersion:(unsigned long long)a1 dateSynced:(id)a2;
- (void)reportMessageDeletionReceivedForMessageWithId:(id)a0 fullSyncVersion:(unsigned long long)a1 dateSynced:(id)a2;
- (void)reportOriginalMessageContentSizeInBytes:(unsigned long long)a0 source:(unsigned long long)a1;
- (void)reportContentSyncedForMessageWithId:(id)a0 textSizeInBytes:(unsigned long long)a1 htmlSizeInBytes:(unsigned long long)a2 fullSyncVersion:(unsigned long long)a3 dateSynced:(id)a4;
- (void)reportContentDownloadedForMessageWithId:(id)a0 textSizeInBytes:(unsigned long long)a1 htmlSizeInBytes:(unsigned long long)a2 startTime:(id)a3;
- (void)reportContentDownloadFailedInMode:(unsigned long long)a0;
- (void)reportAttachmentReceivedForMessageWithId:(id)a0 contentId:(id)a1 sizeInBytes:(unsigned long long)a2 fullSyncVersion:(unsigned long long)a3 dateSynced:(id)a4;
- (void)reportAttachmentDownloadedForMessageWithId:(id)a0 contentId:(id)a1 sizeInBytes:(unsigned long long)a2 startTime:(id)a3;
- (void)reportAttachmentDownloadFailedInMode:(unsigned long long)a0;
- (void)reportAppLaunched;
- (void)reportAppResumed;
- (void)reportAppBackgroundRefreshed;
- (void)reportNotificationReceivedInMode:(unsigned long long)a0;
- (void)reportRenderedNotificationUsingLocalContent:(BOOL)a0 mailboxSynced:(BOOL)a1 messageSynced:(BOOL)a2 contentDownloaded:(BOOL)a3;
- (void)reportFullSyncRequestedFromDevice:(unsigned long long)a0 corruptionDetected:(BOOL)a1 migrationRelated:(BOOL)a2 idsFailureRelated:(BOOL)a3 fullSyncVersionMatchRelated:(BOOL)a4;
- (void)reportHaltSyncRequestedFromSource:(unsigned long long)a0;
- (void)reportContentDisplayedForMessageWithId:(id)a0 hasMainAlternative:(BOOL)a1 hasTextAlternative:(BOOL)a2;
- (void)reportDisplayingHtmlMessageWithStartTime:(id)a0;
- (void)reportDisplayingTextMessageWithStartTime:(id)a0;
- (void)reportWebKitRenderingProcessCrash;
- (void)reportMailboxSelectionChanged:(id)a0 source:(unsigned long long)a1;
- (void)reportAction:(unsigned long long)a0 source:(unsigned long long)a1;
- (void)reportCellRighSwipeActionChanged:(id)a0;
- (void)reportWebKitLinkTapped;
- (void)reportMessageSentFromApp:(BOOL)a0 mailto:(BOOL)a1 sendingType:(unsigned long long)a2 sizeInBytes:(unsigned long long)a3;
- (void)reportMessageDeliveryFailedInMode:(unsigned long long)a0;
- (void)reportMessageDeliveryDurationWithStartDate:(id)a0 inMode:(unsigned long long)a1;
- (void)reportCredentialsExpired;

@end
