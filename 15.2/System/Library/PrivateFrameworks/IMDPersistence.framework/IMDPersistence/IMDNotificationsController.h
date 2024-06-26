@class UNUserNotificationCenter, UNNotificationCategory, CNContact, NSSet, IMBusinessNameManager;

@interface IMDNotificationsController : NSObject {
    long long _lastAlertedMessageDate;
    long long _lastAlertedFailedMessageDate;
}

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) UNNotificationCategory *incomingMessageNotificationCategory;
@property (retain, nonatomic) UNNotificationCategory *incomingFilesNotificationCategory;
@property (retain, nonatomic) IMBusinessNameManager *businessNameManager;
@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSSet *meTokens;
@property (retain, nonatomic) NSSet *activeAccountAliases;
@property long long lastAlertedMessageDate;
@property long long lastAlertedFailedMessageDate;

+ (id)sharedInstance;
+ (id)_addressBookNameForAddress:(id)a0 orContact:(id)a1;
+ (id)_formattedDisplayStringForAddress:(id)a0 countryCode:(id)a1;
+ (id)_truncateNameIfNeeded:(id)a0;
+ (id)_uncanonicalizedAddressForHandle:(struct _IMDHandleRecordStruct { } *)a0;
+ (id)_displayNameForHandle:(struct _IMDHandleRecordStruct { } *)a0 andContact:(id)a1 suggestionProvider:(id /* block */)a2;
+ (int)reminderAlertCount;
+ (int)validateAlertCount:(int)a0;
+ (id)_displayNameForBusinessChatAddress:(id)a0 businessNameManager:(id)a1;
+ (BOOL)isSpamFilteringOn;
+ (id)_addressForHandle:(struct _IMDHandleRecordStruct { } *)a0;
+ (BOOL)isUnknownSenderFilteringOn;
+ (id)_IMDCoreSpotlightCNContactForAddress:(id)a0;
+ (id)_countryCodeForHandle:(struct _IMDHandleRecordStruct { } *)a0;

- (void)_setHasMigratedPreferenceTrue;
- (void)retractNotificationsForReadMessages:(id)a0;
- (BOOL)_amIMentionedInMessage:(id)a0;
- (BOOL)_shouldOverrideChatSilencingBecauseImMentioned:(id)a0;
- (void)_populateNotificationCategoryContent:(id)a0 messageDictionary:(id)a1 chatDictionary:(id)a2;
- (id)_generateNotificationRequestForMessageRecord:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a0 isUrgentMessage:(BOOL)a1 isCarouselUITriggered:(BOOL)a2 isMostActive:(BOOL)a3 shouldAdvanceLastAlertedMessageDate:(BOOL *)a4;
- (id)_displayNameForBusinessChatAddress:(id)a0;
- (BOOL)_filteringSettingConfirmed;
- (long long)_legacyRowIDPreference;
- (void)_populateAttachmentsForNotificationContent:(id)a0 messageDictionary:(id)a1 messageRecord:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a2;
- (void)_shouldPostNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_groupHashForHandles:(id)a0 lastAddressedHandle:(id)a1;
- (void)_storeLastAlertedMessageDate:(long long)a0;
- (id)_groupPhotoInternalFilePathForGroupPhotoGuid:(id)a0;
- (id)_suggestedDisplayNameForAddress:(id)a0;
- (BOOL)_messageIsFromFavorite:(id)a0;
- (id)_nicknameDisplayNameForID:(id)a0;
- (id)madridCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (id)_synthesizedMessagingNotificationContentWithContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2 isUrgentMessage:(BOOL)a3;
- (void)_populateBodyAndTitleForSendReceivedAsJunkNotificationContent:(id)a0 messageDictionary:(id)a1;
- (void)_populateUserInfoForMessageContent:(id)a0 messageDictionary:(id)a1 messageIsAddressedToMe:(BOOL)a2;
- (BOOL)_notificationIsFromAFilteredSender:(id)a0 messageDictionary:(id)a1;
- (BOOL)__im_ff_commSafetyUIEnabled;
- (unsigned long long)_getMessagesSpokenAllowlistLevel:(BOOL *)a0;
- (id)_previewFileURLForTransferURL:(id)a0 utiType:(id)a1;
- (id)_chatDictionaryForMessageRecord:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a0;
- (id)_lastTwoMessagesForChat:(struct _IMDChatRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct __CFArray *x3; long long x4; struct _IMDMessageRecordStruct *x5; long long x6; } *)a0;
- (id)_makeNotificationCategories;
- (BOOL)_deviceIsElgibileToBeForcedIntoFilteringUnknownSenders;
- (void)_registerUserNotificationsForFailedDeliveryMessageRecords:(id)a0 isCarouselUITriggered:(BOOL)a1;
- (BOOL)_chatHasDNDSet:(id)a0;
- (void)_populateTitleForNotificationContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2;
- (id)_IMDContactStore;
- (id)_displayNameForHandle:(struct _IMDHandleRecordStruct { } *)a0 andContact:(id)a1;
- (void)_populateIgnoresDoNotDisturb:(id)a0 messageDictionary:(id)a1 isUrgentMessage:(BOOL)a2;
- (BOOL)_messageShouldBeSpoken:(id)a0 chatDictionary:(id)a1 isMostActive:(BOOL)a2;
- (void)_populateUserInfoOnContentForWatch:(id)a0 messageDictionary:(id)a1 chatDictionary:(id)a2 isCarouselUITriggered:(BOOL)a3;
- (BOOL)_fileURLIsActuallyAnimated:(id)a0;
- (BOOL)_shouldRepostNotification:(id)a0 withAlreadyPostedNotification:(id)a1;
- (BOOL)_chatHasCategoryMuted:(id)a0 isFromContact:(BOOL)a1;
- (void)_populateBodyForNotificationContent:(id)a0 messageDictionary:(id)a1;
- (BOOL)_chatHasDNDSetBasedOnChatGUID:(id)a0 chatIdentifier:(id)a1 groupID:(id)a2 handles:(id)a3 lastAddressedHandleString:(id)a4 originalGroupID:(id)a5 style:(long long)a6;
- (BOOL)_haveMigrated;
- (void)repostNotificationsFromFirstUnlockWithContext:(id)a0;
- (BOOL)_isUnknownSenders:(id)a0;
- (void)_proceedMostActiveDevice:(BOOL)a0 isBlockCalled:(BOOL *)a1 completionHandler:(id /* block */)a2;
- (void)_populateRealertCountForNotificationContent:(id)a0;
- (BOOL)_chatHasDNDSetBasedOnDNDIdentifier:(id)a0;
- (void)_setupFirstLoad;
- (void)advanceLastAlertedFailedMessageDate:(long long)a0;
- (void)postFirstUnlockMessage:(id)a0 forIdentifier:(id)a1;
- (unsigned long long)_getSpokenMessageAllowlistLevelVersion;
- (unsigned long long)screenTimeNotificationOptionsForChatDictionary:(id)a0;
- (id)_messages:(id)a0 newerThanDate:(long long)a1;
- (BOOL)_isRaiseGestureEnabled;
- (void)_coalescePostNotifications;
- (void)_setSpokenMessageAllowlistLevelVersion:(unsigned long long)a0;
- (void)_populateSubtitleForNotificationContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2;
- (void)_postNotifications;
- (id)init;
- (void)_populateBodyAndTitleForSendFailedNotificationContent:(id)a0 messageDictionary:(id)a1;
- (void)_setupMeContactAndTokens;
- (id)_messageDictionaryForMessageRecord:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a0;
- (long long)_legacyDateForMessageWithRowIDPreference:(long long)a0;
- (void)_populateSoundAndDisplayActivationForNotificationContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2 isMostActive:(BOOL)a3;
- (id)_messageDictionaryForMessageRecord:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a0 copyThreadOriginator:(BOOL)a1;
- (BOOL)_shouldPostNotificationForChat:(id)a0 messageDictionary:(id)a1;
- (void)_setLastPostedDateFromMigration:(id)a0;
- (void)_storeLastAlertedFailedMessageDate:(long long)a0;
- (id)_messagesSortedByDate:(id)a0;
- (void)__postNotificationsIsMostActiveDevice:(BOOL)a0;
- (BOOL)_messageIsFromKnownContact:(id)a0;
- (void)postUrgentNotificationForMessages:(id)a0 withContext:(id)a1;
- (void)_setupBusinessNameManager;
- (id)allTokens;
- (BOOL)_hasMigratedPreferences;
- (id)_coreSpotlightChatParticipantsFromChatDictionary:(id)a0 senderHandleID:(id)a1;
- (id)_lastMessageTimeForChat:(struct _IMDChatRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct __CFArray *x3; long long x4; struct _IMDMessageRecordStruct *x5; long long x6; } *)a0;
- (id)defaultsSharedInstance;
- (void)_migrateLastedPostedPreferencesIfNeeded;
- (BOOL)_messageShouldBeSilentlyDeliveredForBusinessChat:(id)a0;
- (id)madridBusinessCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (void)_populateBasicNotificationIdentifyingContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2 isCarouselUITriggered:(BOOL)a3;
- (BOOL)areMyTokens:(id)a0 inMessage:(id)a1;
- (void)dealloc;
- (id)SMSCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (void)_setUpNotificationCenter;
- (BOOL)_overrideDNDForMessagesAddressingMe;
- (id)_previewFileURLForTransferURL:(id)a0;
- (unsigned long long)screenTimeNotificationOptionsForContext:(id)a0;
- (void)postNotificationsWithContext:(id)a0;
- (void)_setMessagesSpokenAllowlistLevelInPreferences:(unsigned long long)a0;
- (BOOL)_messageIsBusiness:(id)a0;
- (void)_isMostActiveDeviceWithCompletionBlock:(id /* block */)a0;
- (BOOL)_handleIsSpokenMessageAllowlisted:(struct _IMDHandleRecordStruct { } *)a0 chat:(id)a1 message:(id)a2;
- (id)_generateNotificationRequestForDeliveryError:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a0 isCarouselUITriggered:(BOOL)a1;
- (void)_registerUserNotificationsForMessageRecords:(id)a0 newerThanDate:(long long)a1 areUrgentMessages:(BOOL)a2 isCarouselUITriggered:(BOOL)a3 isMostActiveDevice:(BOOL)a4;
- (id)madridGroupCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (void)advanceLastAlertedMessageDate:(long long)a0;
- (BOOL)_UTITypeMightBeAnimated:(id)a0;
- (id)_legacyDatePreference;
- (void)_setContactInMessageDictionary:(struct _IMDHandleRecordStruct { } *)a0 messageDictionary:(id)a1;

@end
