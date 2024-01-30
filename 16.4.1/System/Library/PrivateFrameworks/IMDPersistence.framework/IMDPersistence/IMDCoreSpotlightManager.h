@class NSMutableOrderedSet;

@interface IMDCoreSpotlightManager : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *blocklistMessageGUIDs;

+ (id)sharedInstance;
+ (Class)__SLCollaborationHandshakeController;
+ (id)chatAutoDonatingCutomKey;
+ (id)chatAutoDonatingServerDateCustomKey;
+ (id)chatStyleCustomKey;
+ (id)handleToIdentityMapKey;
+ (id)localIdentityKey;
+ (id)localIdentityProofKey;
+ (id)resolvedURLCustomKey;

- (id)searchableIndex;
- (void).cxx_destruct;
- (id)_donationManager;
- (id)newChatSearchableItemForChatDictionary:(id)a0 optionalLastMessageDate:(id)a1;
- (void)_FPProviderIDForItems:(id)a0;
- (unsigned long long)_batchSizeForTargetBatchSize:(unsigned long long)a0 lastIndexedRowID:(unsigned long long)a1 lastBatch:(BOOL *)a2;
- (BOOL)_bypassIndexVersionCheck;
- (long long)_chatCountForChats:(id)a0;
- (id)_chatDictionaryForChatAtIndex:(unsigned long long)a0 withChats:(id)a1;
- (id)_chatDictionaryForChatGUID:(id)a0;
- (id)_copyMessagesForIndexingWithLastRowID:(unsigned long long)a0 batchSize:(unsigned long long)a1;
- (unsigned long long)_currentIndexVersion;
- (unsigned long long)_expectedIndexVersion;
- (void)_geocodeItems:(id)a0;
- (void)_indexSearchableChatItems:(id)a0 withIndex:(id)a1;
- (void)_indexSearchableItems:(id)a0 lastIndexedRowID:(unsigned long long)a1 batchSize:(unsigned long long)a2 lastBatch:(BOOL)a3 withIndex:(id)a4 completion:(id /* block */)a5;
- (unsigned long long)_lastDonatedRowID;
- (unsigned long long)_lastIndexedRowID;
- (id)_newCDInteractionForMessages:(id)a0;
- (id)_newLegacySearchableIndexesForMessages:(id)a0;
- (id)_newSearchableChatItemsForChats:(id)a0;
- (id)_newSearchableIndexesForMessages:(id)a0;
- (id)_personIdentityQueue;
- (void)_postProcessIndexingForItem:(id)a0 chatDictionary:(id)a1 isReindexing:(BOOL)a2;
- (void)_resolvedURLForItems:(id)a0;
- (void)_sanitizeIndexesForCurrentVersionIfNeeded:(id /* block */)a0;
- (void)_setBypassIndexVersionCheck;
- (void)_setCurrentIndexVersion:(unsigned long long)a0;
- (void)_setLastDonatedRowID:(unsigned long long)a0;
- (void)_setLastIndexedRowID:(unsigned long long)a0;
- (void)_setMaxIndexRowID:(unsigned long long)a0;
- (void)_setNeedsDeferredIndexing:(BOOL)a0;
- (void)_setNeedsDonation:(BOOL)a0;
- (void)_setNeedsIndexing:(BOOL)a0;
- (BOOL)_shouldBypassForTesting;
- (BOOL)_shouldDonateNextBatchForBatchSize:(unsigned long long)a0;
- (BOOL)_shouldIndexNextBatchForBatchSize:(unsigned long long)a0;
- (void)_updateItem:(id)a0 withFPProviderID:(id)a1;
- (void)_updateItem:(id)a0 withGeoMapItem:(id)a1;
- (void)_updateItem:(id)a0 withIdentityMap:(id)a1 localIdentity:(id)a2 localIdentityProof:(id)a3;
- (void)_updateItem:(id)a0 withResolvedURL:(id)a1;
- (void)addChatSearchableItemForChatGUID:(id)a0;
- (void)clearMessageGUIDFromScrutiny:(id)a0;
- (void)deleteChatSearchableItemForChatGUID:(id)a0;
- (void)donateChat:(id)a0 withMessage:(id)a1;
- (void)donateNextMessageBatchIfNeeded:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)indexChats;
- (void)indexNextMessageBatchIfNeeded:(unsigned long long)a0 completion:(id /* block */)a1;
- (long long)maxRowID;
- (id)newCDContactForURI:(id)a0;
- (id)newCDInteractionForChat:(id)a0 message:(id)a1;
- (id)newCDInteractionForMessage:(id)a0;
- (id)newSearchableItemsForMessage:(id)a0 reindexing:(BOOL)a1;
- (id)newSearchableItemsForMessageGUID:(id)a0 reindexing:(BOOL)a1;
- (void)reIndexWithLocalProofOfInclusionForItemsAsync:(id)a0;
- (void)setMessageGUIDUnderScrutiny:(id)a0;
- (void)setNeedsDonateAllMessagesWithCompletion:(id /* block */)a0;
- (void)setNeedsMessageReindexingWithCompletion:(id /* block */)a0;

@end
