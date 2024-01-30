@class NSString, NSObject;
@protocol OS_os_log;

@interface EMMessageListItemPredicates : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForExcludingMessagesInMailbox:(id)a0;
+ (id)predicateFromPredicate:(id)a0 ignoringKeyPaths:(id)a1;
+ (id)predicateForMessagesInMailboxesWithObjectIDs:(id)a0;
+ (id)predicateForNotifyMessages;
+ (id)predicateForMessagesWithMailboxScope:(id)a0;
+ (id)predicateForCCMeMessages;
+ (id)predicateForMuteMessages;
+ (BOOL)predicate:(id)a0 appliesToFlagChange:(id)a1;
+ (long long)dateSortOrderFromSortDescriptors:(id)a0;
+ (id)_predicateForKeyPath:(id)a0 value:(id)a1;
+ (id)predicateForMessagesInMailboxes:(id)a0;
+ (id)predicateForAccount:(id)a0;
+ (id)predicateForMessagesWithThreadScope:(id)a0;
+ (id)threadScopeForPredicate:(id)a0;
+ (id)predicateForToMeMessages;
+ (id)predicateForMessagesInMailboxWithObjectID:(id)a0;
+ (id)predicateForExcludingMessagesInMailboxWithURL:(id)a0;
+ (id)predicateForMessagesInConversation:(long long)a0;
+ (id)predicateForExcludingMessagesInMailboxes:(id)a0;
+ (id)predicateForMessagesInMailboxesWithTypes:(id)a0;
+ (id)predicateForFlagColor:(unsigned long long)a0;
+ (id)_keyPathsForFlagChange:(id)a0;
+ (id)predicateForExcludingMessagesInMailboxWithType:(long long)a0;
+ (id)predicateForMessagesWithAttachments;
+ (id)_predicateForMessagesInMailboxWithType:(id)a0;
+ (id)predicateForExcludingMessagesInMailboxObjectID:(id)a0;
+ (id)mailboxScopeForPredicate:(id)a0 withMailboxTypeResolver:(id)a1;
+ (id)predicateForUnreadMessages;
+ (id)mailboxURLsForPredicate:(id)a0;
+ (id)predicateForFlaggedMessages;
+ (id)predicateForMessagesWithSender:(id)a0;
+ (id)predicateForExcludingMessagesInMailboxesWithTypes:(id)a0;
+ (id)predicateForReadMessages;
+ (id)predicateForUnflaggedMessages;
+ (id)predicateForTodayMessages;
+ (id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)a0;
+ (id)predicateForMessagesInMailbox:(id)a0;
+ (id)spotlightPredicateForPredicate:(id)a0;
+ (id)sortDescriptorForDateAscending:(BOOL)a0;
+ (id)predicateForVIPMessages;
+ (id)predicateForMessagesInMailboxWithType:(long long)a0;
+ (id)predicateForMessagesNewerThanDate:(id)a0;
+ (id)predicateForIncludesMeMessages;
+ (id)_spotlightPredicateForPredicate:(id)a0;
+ (id)_predicateForMessagesInMailboxWithURL:(id)a0;


@end
