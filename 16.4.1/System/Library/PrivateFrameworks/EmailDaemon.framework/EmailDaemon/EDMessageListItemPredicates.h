@interface EDMessageListItemPredicates : NSObject

+ (id)predicateForSpotlightPredicate:(id)a0;
+ (id)_objectIDsFromRightExpression:(id)a0;
+ (id)_predicateForAnyMailboxWithPredicate:(id)a0;
+ (id)_predicateForRecipientMessagesAddressesKey:(id)a0 addresses:(id)a1;
+ (id)predicateForAnyRecipientPredicate:(id)a0;
+ (id)predicateForBody:(id)a0;
+ (id)predicateForMailboxTypePredicate:(id)a0 mailboxes:(id)a1;
+ (id)predicateForMessageIDHeaderHashPredicate:(id)a0;
+ (id)predicateForMessagesFromVIPs:(id)a0;
+ (id)predicateForMessagesThatCCAddresses:(id)a0;
+ (id)predicateForMessagesToAddresses:(id)a0;
+ (id)predicateForMessagesWithObjectIDsPredicate:(id)a0 objectIDConverter:(id)a1;
+ (id)predicateForSenderPredicate:(id)a0;
+ (id)predicateForSubjectPredicate:(id)a0;

@end
