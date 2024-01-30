@interface _PSInteractionStoreUtils : NSObject

+ (id)interactionCacheFromStore:(id)a0 size:(unsigned long long)a1 queryPredicate:(id)a2 filterBlock:(id /* block */)a3;
+ (id)interactionsFromStore:(id)a0 startDate:(id)a1 tillDate:(id)a2 withMechanisms:(id)a3 withAccount:(id)a4 withBundleIds:(id)a5 withTargetBundleIds:(id)a6 withDirections:(id)a7 withNsUserName:(id)a8 singleRecipient:(BOOL)a9 fetchLimit:(unsigned long long)a10;
+ (id)mostRecentInteractionWithRecipientMatchingContactIdentifier:(id)a0 bundleIds:(id)a1 store:(id)a2 singleRecipient:(BOOL)a3;
+ (id)interactionsMatchingAnyHandlesOrDomainIds:(id)a0 account:(id)a1 directions:(id)a2 bundleIds:(id)a3 store:(id)a4 fetchLimit:(unsigned long long)a5 singleRecipientOnly:(BOOL)a6;
+ (id)conversationIdFromInteraction:(id)a0;
+ (id)mostRecentInteractionWithSingleRecipientMatchingHandle:(id)a0 store:(id)a1;
+ (id)conversationIdWithExactMatchWithContactHandles:(id)a0 store:(id)a1 bundleIds:(id)a2 messageInteractionCache:(id)a3;
+ (id)interactionsWithContactIdentifiers:(id)a0 store:(id)a1 bundleIds:(id)a2 meContactIdentifier:(id)a3;
+ (id)interactionsHyperRecentFromReferenceDate:(id)a0 bundleIds:(id)a1 recencyMargin:(double)a2 store:(id)a3;
+ (id)allAirDropInteractionsFromStore:(id)a0 fetchLimit:(unsigned long long)a1;
+ (id)interactionsMatchingAnyHandlesOrContactIds:(id)a0 identifiers:(id)a1 account:(id)a2 directions:(id)a3 mechanisms:(id)a4 bundleIds:(id)a5 store:(id)a6 fetchLimit:(unsigned long long)a7 messageInteractionCache:(id)a8;
+ (id)interactionsFromStore:(id)a0 startDate:(id)a1 tillDate:(id)a2 withMechanisms:(id)a3 withAccount:(id)a4 withBundleIds:(id)a5 withTargetBundleIds:(id)a6 withDirections:(id)a7 singleRecipient:(BOOL)a8 fetchLimit:(unsigned long long)a9;
+ (long long)getHandleTypeFromHandleString:(id)a0;
+ (id)mostRecentInteractionWithSenderOrRecipientMatchingContactIdentifier:(id)a0 bundleIds:(id)a1 store:(id)a2 singleRecipient:(BOOL)a3;
+ (id)mostRecentInteractionInvolvingMatchingIdentifier:(id)a0 store:(id)a1 bundleIds:(id)a2;
+ (id)interactionsMostRecentForBundleId:(id)a0 store:(id)a1 resultLimit:(unsigned long long)a2 interactions:(id)a3;
+ (id)interactionsContainingSearchStringInDisplayName:(id)a0 account:(id)a1 directions:(id)a2 bundleIds:(id)a3 store:(id)a4 fetchLimit:(unsigned long long)a5;
+ (id)recentInteractionsFromStore:(id)a0 bundleIDs:(id)a1;
+ (id)interactionsFromStore:(id)a0 referenceDate:(id)a1 withMechanisms:(id)a2 withAccount:(id)a3 withBundleIds:(id)a4 withTargetBundleIds:(id)a5 withDirections:(id)a6 singleRecipient:(BOOL)a7 fetchLimit:(unsigned long long)a8;
+ (id)groupInteractionsContainingSearchStringInDisplayName:(id)a0 excludingInteractionUUIDs:(id)a1 account:(id)a2 directions:(id)a3 bundleIds:(id)a4 excludedDomainIdentifiers:(id)a5 startDate:(id)a6 store:(id)a7 fetchLimit:(unsigned long long)a8 offset:(unsigned long long)a9;
+ (id)mostRecentInteractionWithExactMatchingIdentifiers:(id)a0 store:(id)a1 bundleIds:(id)a2 meContactIdentifier:(id)a3;
+ (id)interactionsMatchingAnyHandlesOrDomainIds:(id)a0 account:(id)a1 directions:(id)a2 mechanisms:(id)a3 bundleIds:(id)a4 store:(id)a5 fetchLimit:(unsigned long long)a6;
+ (id)someIMessageInteractionInvolvingContactIdentifier:(id)a0 store:(id)a1 contactType:(unsigned long long)a2 afterStartDate:(id)a3;
+ (id)mostRecentInteractionWithSingleRecipientMatchingContactIdentifier:(id)a0 store:(id)a1;
+ (id)conversationIdFromInteraction:(id)a0 bundleIds:(id)a1;
+ (id)interactionsFromStore:(id)a0 startDate:(id)a1 tillDate:(id)a2 withMechanisms:(id)a3 withAccount:(id)a4 withBundleIds:(id)a5 withTargetBundleIds:(id)a6 withDirections:(id)a7 withNsUserName:(id)a8 singleRecipient:(BOOL)a9 excludeAnonymousTemporaryRecipients:(BOOL)a10 fetchLimit:(unsigned long long)a11 fetchOffset:(unsigned long long)a12 sortAscending:(BOOL)a13;
+ (id)interactionsFromStore:(id)a0 referenceDate:(id)a1 withMechanisms:(id)a2 withAccount:(id)a3 withBundleIds:(id)a4 withTargetBundleIds:(id)a5 withDirections:(id)a6 fetchLimit:(unsigned long long)a7;
+ (id)interactionsMatchingAnyHandles:(id)a0 account:(id)a1 directions:(id)a2 mechanisms:(id)a3 bundleIds:(id)a4 store:(id)a5 fetchLimit:(unsigned long long)a6 messageInteractionCache:(id)a7;
+ (id)someInteractionWithMatchingIdentifier:(id)a0 store:(id)a1 bundleIds:(id)a2 afterStartDate:(id)a3;
+ (id)conversationIdWithMaximalIntersectionWithContactIdentifiers:(id)a0 store:(id)a1 bundleIds:(id)a2 meContactIdentifier:(id)a3;

@end
