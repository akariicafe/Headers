@class EFLazyCache, MFMailMessageLibrary, MFMailMessageLibraryQueryTransformer, NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log, EFScheduler, OS_dispatch_queue, MFMessageSummaryLoaderProvider;

@interface MFMessagePersistence_iOS : EDMessagePersistence <EFLoggable, EDMessageChangeHookResponder> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _summaryLock;
    NSMutableDictionary *_summaryLoaders;
    EFLazyCache *_obsoleteGlobalMessageIDToDatabaseIDMap;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) MFMailMessageLibraryQueryTransformer *queryTransformer;
@property (retain, nonatomic) id<EFScheduler> networkContentLoadScheduler;
@property (retain, nonatomic) id<EFScheduler> offlineContentLoadScheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestSummaryQueue;
@property (retain, nonatomic) id<MFMessageSummaryLoaderProvider> summaryLoaderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enabledAccountMailboxesExpression;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)a0;
- (unsigned long long)_countOfMessagesMatchingCriteria:(id)a0 includingDuplicates:(BOOL)a1;
- (long long)globalIDForMessageWithDatabaseID:(long long)a0 mailboxScope:(id *)a1;
- (id)libraryMessageForMessageObjectID:(id)a0;
- (long long)countOfMessagesWithGlobalMessageID:(long long)a0 matchingQuery:(id)a1;
- (id)persistedMessagesForDatabaseIDs:(id)a0 requireProtectedData:(BOOL)a1 temporarilyUnavailableDatabaseIDs:(id *)a2;
- (id)initWithMailboxPersistence:(id)a0 database:(id)a1 userProfileProvider:(id)a2 blockedSenderManager:(id)a3 vipReader:(id)a4 hookRegistry:(id)a5 library:(id)a6;
- (long long)countOfMessagesMatchingQuery:(id)a0;
- (id)collectStatistics;
- (id)requestContentForMessageObjectID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)requestSummaryForMessageObjectID:(id)a0;
- (void)iterateMessagesMatchingQuery:(id)a0 batchSize:(long long)a1 firstBatchSize:(long long)a2 limit:(long long)a3 cancelationToken:(id)a4 handler:(id /* block */)a5;
- (id)persistedMessageForOutgoingMessage:(id)a0 isDraft:(BOOL)a1;
- (BOOL)compressFile:(id)a0 error:(id *)a1;
- (void)iteratePersistedMessagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2 handler:(id /* block */)a3;
- (id)_requestSummaryForLibraryMessage:(id)a0;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)a0 variable:(id)a1;
- (void)_iterateMessagesMatchingQuery:(id)a0 options:(unsigned int)a1 cancelationToken:(id)a2 resultHandler:(id)a3 monitor:(id)a4;

@end
