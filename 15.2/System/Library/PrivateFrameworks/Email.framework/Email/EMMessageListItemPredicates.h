@class NSString, NSObject;
@protocol OS_os_log;

@interface EMMessageListItemPredicates : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForAccount:(id)a0;
+ (id)predicateForVIPMessages;
+ (id)predicateForExcludingMessagesInMailboxes:(id)a0;
+ (id)predicateForExcludingMessagesInMailboxWithType:(long long)a0;
+ (id)_spotlightPredicateForPredicate:(id)a0;
+ (id)_predicateForMessagesInMailboxWithType:(id)a0;
+ (id)predicateForExcludingMessagesInMailboxesWithTypes:(id)a0;
+ (id)predicateForMessagesInMailboxWithObjectID:(id)a0;
+ (id)predicateForCCMeMessages;
+ (id)predicateForMessagesInMailbox:(id)a0;
+ (BOOL)predicate:(id)a0 appliesToFlagChange:(id)a1;
+ (id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)a0;
+ (id)_predicateForMessagesInMailboxWithURL:(id)a0;
+ (id)predicateForMessagesWithAttachments;
+ (id)predicateForNotifyMessages;
+ (id)predicateForUnreadMessages;
+ (id)predicateForToMeMessages;
+ (id)predicateForMessagesWithSender:(id)a0;
+ (id)predicateForExcludingMessagesInMailboxWithURL:(id)a0;
+ (id)predicateForFlagColor:(unsigned long long)a0;
+ (id)sortDescriptorForDateAscending:(BOOL)a0;
+ (id)_keyPathsForFlagChange:(id)a0;
+ (id)predicateForExcludingMessagesInMailboxObjectID:(id)a0;
+ (id)predicateForUnflaggedMessages;
+ (id)mailboxScopeForPredicate:(id)a0 withMailboxTypeResolver:(id)a1;
+ (id)mailboxURLsForPredicate:(id)a0;
+ (long long)dateSortOrderFromSortDescriptors:(id)a0;
+ (id)predicateForReadMessages;
+ (id)threadScopeForPredicate:(id)a0;
+ (id)predicateForMessagesInMailboxes:(id)a0;
+ (id)predicateForMuteMessages;
+ (id)spotlightPredicateForPredicate:(id)a0;
+ (id)predicateForMessagesInConversation:(long long)a0;
+ (id)predicateForMessagesWithThreadScope:(id)a0;
+ (id)predicateForExcludingMessagesInMailbox:(id)a0;
+ (id)predicateForMessagesWithMailboxScope:(id)a0;
+ (id)predicateForMessagesInMailboxWithType:(long long)a0;
+ (id)predicateFromPredicate:(id)a0 ignoringKeyPaths:(id)a1;
+ (id)predicateForMessagesNewerThanDate:(id)a0;
+ (id)predicateForTodayMessages;
+ (id)predicateForFlaggedMessages;
+ (id)predicateForIncludesMeMessages;
+ (id)predicateForMessagesInMailboxesWithObjectIDs:(id)a0;
+ (id)_predicateForKeyPath:(id)a0 value:(id)a1;
+ (id)predicateForMessagesInMailboxesWithTypes:(id)a0;


@end
