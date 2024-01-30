@class NSMutableOrderedSet;

@interface IMDCoreSpotlightManager : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *blocklistMessageGUIDs;

+ (id)sharedInstance;
+ (id)resolvedURLCustomKey;
+ (id)chatStyleCustomKey;
+ (id)chatAutoDonatingCutomKey;
+ (id)chatAutoDonatingServerDateCustomKey;

- (BOOL)__im_ff_isInterstellarEnabled;
- (id)searchableIndex;
- (void)dealloc;
- (long long)maxRowID;
- (id)newCDInteractionForChat:(struct _IMDChatRecordStruct { } *)a0 message:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a1;
- (id)newCDContactForHandle:(struct _IMDHandleRecordStruct { } *)a0 handle:(id)a1;
- (void)_postProcessIndexingForItem:(id)a0 chatDictionary:(id)a1 isReindexing:(BOOL)a2;
- (BOOL)_shouldDonateNextBatchForBatchSize:(unsigned long long)a0;
- (unsigned long long)_lastDonatedRowID;
- (unsigned long long)_batchSizeForTargetBatchSize:(unsigned long long)a0 lastIndexedRowID:(unsigned long long)a1 lastBatch:(BOOL *)a2;
- (struct __CFArray { } *)_copyMessagesForIndexingWithLastRowID:(unsigned long long)a0 batchSize:(unsigned long long)a1;
- (id)_newCDInteractionForMessages:(struct __CFArray { } *)a0;
- (void)_setNeedsDonation:(BOOL)a0;
- (void)_setLastDonatedRowID:(unsigned long long)a0;
- (id)newCDInteractionForMessage:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a0;
- (void)indexNextMessageBatchIfNeeded:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)donateChat:(struct _IMDChatRecordStruct { } *)a0 withMessage:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a1;
- (void)donateNextMessageBatchIfNeeded:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setNeedsDonateAllMessagesWithCompletion:(id /* block */)a0;
- (id)newSearchableItemsForMessage:(struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct _IMDHandleRecordStruct *x3; struct _IMDHandleRecordStruct *x4; struct __CFArray *x5; struct __CFDictionary *x6; } *)a0 reindexing:(BOOL)a1;
- (void)deleteChatSearchableItemForChatGUID:(id)a0;
- (void)addChatSearchableItemForChatGUID:(id)a0;
- (id)newSearchableItemsForMessageGUID:(id)a0 reindexing:(BOOL)a1;
- (void)setNeedsMessageReindexingWithCompletion:(id /* block */)a0;
- (void)setMessageGUIDUnderScrutiny:(id)a0;
- (id)_spotlightIndexingQueue;
- (void)clearMessageGUIDFromScrutiny:(id)a0;
- (id)newChatSearchableItemForChatDictionary:(id)a0 optionalLastMessageDate:(id)a1;
- (void)_resolvedURLForItems:(id)a0;
- (id)_donationManager;
- (void)_updateItem:(id)a0 withGeoMapItem:(id)a1;
- (void)_updateItem:(id)a0 withResolvedURL:(id)a1;
- (id)_chatDictionaryForChatGUID:(id)a0;
- (void)_setNeedsIndexing:(BOOL)a0;
- (void)_setNeedsDeferredIndexing:(BOOL)a0;
- (void)_setLastIndexedRowID:(unsigned long long)a0;
- (void)_setMaxIndexRowID:(unsigned long long)a0;
- (void)_setCurrentIndexVersion:(unsigned long long)a0;
- (void)_setBypassIndexVersionCheck;
- (void)indexChats;
- (void)_sanitizeIndexesForCurrentVersionIfNeeded:(id /* block */)a0;
- (BOOL)_bypassIndexVersionCheck;
- (unsigned long long)_currentIndexVersion;
- (unsigned long long)_expectedIndexVersion;
- (id)_newSearchableChatItemsForChats:(struct __CFArray { } *)a0;
- (void)_indexSearchableChatItems:(id)a0 withIndex:(id)a1;
- (long long)_chatCountForChats:(id)a0;
- (id)_chatDictionaryForChatAtIndex:(unsigned long long)a0 withChats:(id)a1;
- (BOOL)_shouldIndexNextBatchForBatchSize:(unsigned long long)a0;
- (unsigned long long)_lastIndexedRowID;
- (id)_newSearchableIndexesForMessages:(struct __CFArray { } *)a0;
- (void)_indexSearchableItems:(id)a0 lastIndexedRowID:(unsigned long long)a1 batchSize:(unsigned long long)a2 lastBatch:(BOOL)a3 withIndex:(id)a4 completion:(id /* block */)a5;
- (id)_newLegacySearchableIndexesForMessages:(struct __CFArray { } *)a0;
- (BOOL)_shouldBypassForTesting;
- (void)_geocodeItems:(id)a0;

@end
