@interface _CDSpotlightItemUtils : NSObject

+ (id)_locationMetadataForSearchableItem:(id)a0 userAction:(id)a1;
+ (long long)getInteractionMechanismForContentUTI:(id)a0 typeTree:(id)a1;
+ (id)querySpotlightItemsWithStartDate:(id)a0 endDate:(id)a1 getMail:(BOOL)a2 getMessages:(BOOL)a3;
+ (id)contextDictionaryForSearchableItem:(id)a0 userAction:(id)a1;
+ (id)expectedSupportedUTIs;
+ (id)interactionForSearchableItem:(id)a0;
+ (id)collectionEventForSearchableItem:(id)a0 userAction:(id)a1;
+ (id)messageContextDictionaryForSendMessageIntent:(id)a0;
+ (id)expectedUTIsForMechanism:(long long)a0;
+ (BOOL)contentTypeTree:(id)a0 conformsToUTIType:(id)a1;
+ (id)interactionUUIDForSearchableItemWithUID:(id)a0 bundleID:(id)a1;
+ (id)knowledgeEventsForSearchableItem:(id)a0 userAction:(id)a1;

@end
