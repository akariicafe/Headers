@class EFLazyCache, NSString, NSMutableDictionary, MFMailMessageLibrary, MFMailMessageLibraryQueryTransformer, NSObject;
@protocol OS_os_log, EFScheduler, OS_dispatch_queue, MFMessageSummaryLoaderProvider;

@interface MFMessagePersistence_iOS : EDMessagePersistence <EFLoggable, EDMessageChangeHookResponder> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _summaryLock;
    NSMutableDictionary *_summaryLoaders;
    EFLazyCache *_obsoleteGlobalMessageIDToDatabaseIDMap;
    MFMailMessageLibrary *_library;
    MFMailMessageLibraryQueryTransformer *_queryTransformer;
    id<EFScheduler> _networkContentLoadScheduler;
    id<EFScheduler> _offlineContentLoadScheduler;
    NSObject<OS_dispatch_queue> *_requestSummaryQueue;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<MFMessageSummaryLoaderProvider> summaryLoaderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_requestSummaryForLibraryMessage:(id)a0;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)a0;
- (id)enabledAccountMailboxesExpression;
- (void)iterateMessagesMatchingQuery:(id)a0 batchSize:(long long)a1 firstBatchSize:(long long)a2 limit:(long long)a3 cancelationToken:(id)a4 handler:(id /* block */)a5;
- (long long)globalIDForMessageWithDatabaseID:(long long)a0 mailboxScope:(id *)a1;
- (void)_iterateMessagesMatchingQuery:(id)a0 options:(unsigned int)a1 cancelationToken:(id)a2 resultHandler:(id)a3 monitor:(id)a4;
- (BOOL)compressDirectory:(id)a0 shouldCancel:(id /* block */)a1 error:(id *)a2;
- (unsigned long long)_countOfMessagesMatchingCriteria:(id)a0 includingDuplicates:(BOOL)a1;
- (id)persistedMessageForOutgoingMessage:(id)a0 isDraft:(BOOL)a1;
- (long long)countOfMessagesMatchingQuery:(id)a0;
- (id)collectStatistics;
- (id)initWithMailboxPersistence:(id)a0 database:(id)a1 userProfileProvider:(id)a2 blockedSenderManager:(id)a3 vipReader:(id)a4 hookRegistry:(id)a5 library:(id)a6;
- (id)persistedMessagesForDatabaseIDs:(id)a0 requireProtectedData:(BOOL)a1 temporarilyUnavailableDatabaseIDs:(id *)a2;
- (id)requestContentForMessageObjectID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)a0 variable:(id)a1;
- (BOOL)compressFile:(id)a0 error:(id *)a1;
- (long long)countOfMessagesWithGlobalMessageID:(long long)a0 matchingQuery:(id)a1;
- (void)iteratePersistedMessagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2 handler:(id /* block */)a3;
- (void)generateSummaryForMessage:(id)a0;
- (void)setContentProtectionForAttachmentFile:(id)a0;
- (id)requestSummaryForMessageObjectID:(id)a0;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (id)libraryMessageForMessageObjectID:(id)a0;
- (void).cxx_destruct;

@end
