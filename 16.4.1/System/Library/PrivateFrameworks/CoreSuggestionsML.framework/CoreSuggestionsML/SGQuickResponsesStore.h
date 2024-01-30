@class _PASLock;

@interface SGQuickResponsesStore : NSObject {
    _PASLock *_readerWriter;
}

+ (id)sharedInstance;
+ (void)warmup;
+ (id)instanceInMemory;
+ (BOOL)isProfane:(id)a0 inLocales:(id)a1;
+ (id)keyWithLanguage:(id)a0 andResponse:(id)a1;

- (BOOL)frailReadTransaction:(id /* block */)a0;
- (BOOL)frailWriteTransaction:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addSelectedToResponse:(id)a0 language:(id)a1;
- (id)getModelVersion;
- (void)_addCustomResponseToDb:(id)a0 reply:(id)a1 language:(id)a2 embedding:(id)a3 sentAt:(double)a4 recipient:(id)a5 messagesRowId:(long long)a6 onError:(id /* block */)a7;
- (void)_incrementCustomResponseInDb:(id)a0 reply:(id)a1 language:(id)a2 embedding:(id)a3 sentAt:(double)a4 recipient:(id)a5 messagesRowId:(long long)a6 onError:(id /* block */)a7;
- (id)_recordsForResponses:(id)a0 language:(id)a1;
- (void)addDisplayedToResponses:(id)a0 language:(id)a1;
- (void)addWrittenToResponse:(id)a0 language:(id)a1 isMatch:(BOOL)a2;
- (BOOL)addingMessageExceedsBatchLimit:(unsigned long long)a0 tableLimit:(unsigned long long)a1 message:(id)a2 language:(id)a3 prompt:(id)a4 recipientHandle:(id)a5 sentAt:(id)a6;
- (void)calculateUsageSpreads;
- (unsigned long long)countCustomResponsesAfterPruningWithMinimumCountThreshold:(double)a0;
- (unsigned long long)countCustomResponsesAfterTruncatingTable:(unsigned long long)a0;
- (void)decayAllCustomResponsesWithDecayFactor:(double)a0 filteringBatchSize:(unsigned long long)a1;
- (BOOL)deltaForResponsesOnRow:(id /* block */)a0 completion:(id /* block */)a1;
- (unsigned long long)designateFilteringBatch:(unsigned long long)a0;
- (void)destroyInstanceInMemory;
- (id)embeddingForPrompt:(id)a0 language:(id)a1 embedder:(id /* block */)a2;
- (void)filterBatchWithMinimumDistinctRecipients:(unsigned long long)a0 minimumReplyOccurences:(unsigned long long)a1;
- (double)getPerRecipientCountForReply:(id)a0 language:(id)a1 recipient:(id)a2;
- (id)getProfanityLocale;
- (double)getUsageSpreadForReply:(id)a0 language:(id)a1;
- (id)initInDirectory:(id)a0 inMemory:(BOOL)a1 withMigration:(BOOL)a2;
- (id)initInDirectory:(id)a0 inMemory:(BOOL)a1 withMigration:(BOOL)a2 forTools:(BOOL)a3;
- (id)messagesForEval:(id)a0;
- (id)nearestCustomResponsesAndScoresToPromptEmbedding:(id)a0 recipient:(id)a1 limit:(unsigned long long)a2 withinRadius:(float)a3 responseCountExponent:(float)a4 minimumDecayedCount:(float)a5 compatibilityVersion:(unsigned long long)a6 language:(id)a7 locale:(id)a8 allowProfanity:(BOOL)a9 minimumTimeInterval:(double)a10 usageSpreadExponent:(float)a11;
- (id)nearestCustomResponsesToPromptEmbedding:(id)a0 recipient:(id)a1 limit:(unsigned long long)a2 withinRadius:(float)a3 responseCountExponent:(float)a4 minimumDecayedCount:(float)a5 compatibilityVersion:(unsigned long long)a6 language:(id)a7 locale:(id)a8 allowProfanity:(BOOL)a9 minimumTimeInterval:(double)a10 usageSpreadExponent:(float)a11;
- (void)prunePerRecipientTableWithMaxRows:(unsigned long long)a0;
- (void)recordKnownCustomResponsesInBatchWithEmbedder:(id /* block */)a0 compatibilityVersion:(unsigned long long)a1;
- (void)recordMessagesInBatchAsCustomResponsesWithEmbedder:(id /* block */)a0 compatibilityVersion:(unsigned long long)a1;
- (id)recordsForResponses:(id)a0 language:(id)a1;
- (id)recordsForResponsesInternal:(id)a0 language:(id)a1;
- (void)resetCustomResponsesAndResetMessages:(BOOL)a0;
- (void)resetCustomResponsesForEval:(id)a0;
- (BOOL)resetDbIfNeededCompareWithCompatibilityVersion:(unsigned long long)a0;
- (void)setProfanityLocale:(id)a0 andModelVersion:(long long)a1;

@end
