@class NSDate, IMDirectoryContentsSizes, NSArray, IMMessageDirectoryContents, NSString, NSDictionary, STStorageOptionTip, STStorageActionTip, IMCloudKitHooks;

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
@property (readonly, nonatomic) IMMessageDirectoryContents *messageDirectoryContents;
@property (readonly, nonatomic) IMDirectoryContentsSizes *messageDirectorySizes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_representedApp;

- (void)_loadTips;
- (unsigned long long)messageDatabaseSize;
- (void).cxx_destruct;
- (id)init;
- (void)_loadAppSpecifiers;
- (void)_loadiCloudAppSpecifiers;
- (void)dealloc;
- (void)_iCloudHooksSetEnabledReturned:(id)a0;
- (void)_iCloudHooksValuesChanged:(id)a0;
- (BOOL)_cloudKitEnabled;
- (void)calculateDirectorySizesIfNeeded;
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
- (void)enableOptionForTip:(id)a0;
- (void)_displayICloudErrorMessage;
- (void)_refreshMessageOniCloudTipIfNeeded;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)a0;
- (id)cloudDocumentSpecifiers;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)a0;
- (long long)_purgeableDiskSpace;
- (unsigned long long)_spaceSavedByDeletingNonSyncedAttachments;

@end
