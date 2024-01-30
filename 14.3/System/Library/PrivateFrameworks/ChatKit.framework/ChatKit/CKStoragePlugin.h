@class IMCloudKitHooks, NSArray, NSDictionary, NSString, NSDate, STStorageOptionTip, STStorageActionTip;

@interface CKStoragePlugin : STStoragePlugin <STStorageOptionTipDelegate>

@property (retain, nonatomic) STStorageOptionTip *cachedAutoDeleteMessagesTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByAutoDeletingMessages;
@property (nonatomic) double lastQuerySpaceSavedByAutoDeletingMessagesTime;
@property (retain, nonatomic) STStorageActionTip *cachedReviewLargeConversationsTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByReviewingLargeConversations;
@property (nonatomic) double lastQuerySpaceSavedByReviewingLargeConversationsTime;
@property (retain, nonatomic) STStorageActionTip *cachedReviewLargeAttachmentsTip;
@property (nonatomic) BOOL cachedAttachmentsTakeUpSignificantSpace;
@property (retain, nonatomic) NSDate *cachedAttachmentsTakeUpSignificantSpaceDate;
@property (retain, nonatomic) STStorageOptionTip *cachedMessagesOniCloudTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByDeletingNonSyncedAttachments;
@property (nonatomic) double lastQuerySpaceSavedByNonSyncedDeletingAttachments;
@property (retain, nonatomic) NSArray *appSpecifiers;
@property (retain, nonatomic) NSArray *cloudAppSpecifiers;
@property (retain, nonatomic) NSDictionary *spaceTakenByAttachmentClass;
@property (retain, nonatomic) IMCloudKitHooks *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_representedApp;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)messageDatabaseSize;
- (void)_loadTips;
- (BOOL)_cloudKitEnabled;
- (void)_iCloudHooksSetEnabledReturned:(id)a0;
- (void)_iCloudHooksValuesChanged:(id)a0;
- (void)_loadAppSpecifiers;
- (void)_loadiCloudAppSpecifiers;
- (long long)_purgeableDiskSpace;
- (void)_enableAutoDeleteMessages;
- (void)_enableMessagesOniCloud;
- (unsigned long long)_spaceSavedByReviewingLargeConversations;
- (id)_spaceTakenForSpecifier:(id)a0;
- (void)_loadAttachmentSizes;
- (id)_autoDeleteMessagesTip;
- (id)_reviewLargeAttachmentsTip;
- (id)_messagesOniCloudTip;
- (BOOL)_attachmentsTakeUpMoreSpaceThanBytes:(unsigned long long)a0;
- (BOOL)_forceShowingAutoDeleteMessagesTip;
- (unsigned long long)_spaceSavedByAutoDeleteMessages;
- (BOOL)_shouldDisplayAutoDeleteMessagesTip;
- (unsigned long long)_totalSpaceOfLargeConversations;
- (BOOL)_forceShowingReviewLargeAttachmentsTip;
- (BOOL)_attachmentsTakeUpSignificantSpace;
- (BOOL)_shouldDisplayReviewLargeAttachmentsTip;
- (long long)_totalSpaceOfAttachments;
- (void)_displayICloudErrorMessage;
- (void)_refreshMessageOniCloudTipIfNeeded;
- (void)enableOptionForTip:(id)a0;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)a0;
- (id)cloudDocumentSpecifiers;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)a0;
- (unsigned long long)_spaceSavedByDeletingNonSyncedAttachments;

@end
