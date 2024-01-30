@interface _PSInteractionStoreUtils : NSObject

+ (id)mostRecentInteractionWithSingleRecipientMatchingHandle:(id)a0 store:(id)a1;
+ (id)interactionsFromStore:(id)a0 referenceDate:(id)a1 withMechanisms:(id)a2 withAccount:(id)a3 withBundleIds:(id)a4 withTargetBundleIds:(id)a5 withDirections:(id)a6 fetchLimit:(unsigned long long)a7;
+ (id)interactionsMostRecentForBundleId:(id)a0 store:(id)a1 resultLimit:(unsigned long long)a2 interactions:(id)a3;
+ (id)recentInteractionsFromStore:(id)a0 bundleIDs:(id)a1;
+ (id)conversationIdWithMaximalIntersectionWithContactIdentifiers:(id)a0 store:(id)a1 bundleIds:(id)a2 meContactIdentifier:(id)a3;
+ (id)interactionsFromStore:(id)a0 startDate:(id)a1 tillDate:(id)a2 withMechanisms:(id)a3 withAccount:(id)a4 withBundleIds:(id)a5 withTargetBundleIds:(id)a6 withDirections:(id)a7 singleRecipient:(BOOL)a8 fetchLimit:(unsigned long long)a9;
+ (id)interactionsContainingSearchStringInDisplayName:(id)a0 account:(id)a1 directions:(id)a2 bundleIds:(id)a3 store:(id)a4 fetchLimit:(unsigned long long)a5;
+ (id)interactionsMatchingAnyHandlesOrDomainIds:(id)a0 account:(id)a1 directions:(id)a2 bundleIds:(id)a3 store:(id)a4 fetchLimit:(unsigned long long)a5;
+ (id)allAirDropInteractionsFromStore:(id)a0 fetchLimit:(unsigned long long)a1;
+ (id)mostRecentInteractionWithSingleRecipientMatchingContactIdentifier:(id)a0 store:(id)a1;
+ (id)interactionsFromStore:(id)a0 referenceDate:(id)a1 withMechanisms:(id)a2 withAccount:(id)a3 withBundleIds:(id)a4 withTargetBundleIds:(id)a5 withDirections:(id)a6 singleRecipient:(BOOL)a7 fetchLimit:(unsigned long long)a8;
+ (id)mostRecentInteractionWithSenderOrRecipientMatchingContactIdentifier:(id)a0 bundleIds:(id)a1 store:(id)a2 singleRecipient:(BOOL)a3;
+ (id)interactionsHyperRecentFromReferenceDate:(id)a0 bundleIds:(id)a1 recencyMargin:(double)a2 store:(id)a3;
+ (id)interactionsMatchingAnyHandles:(id)a0 account:(id)a1 directions:(id)a2 mechanisms:(id)a3 bundleIds:(id)a4 store:(id)a5 fetchLimit:(unsigned long long)a6;

@end
