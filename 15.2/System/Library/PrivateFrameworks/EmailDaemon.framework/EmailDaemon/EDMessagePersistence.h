@class EDPersistenceDatabase, NSString, EDMailboxPersistence, EDMessageTransformer, EDMessagePersistenceStatistics, NSNumber, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDMessagePersistence : NSObject <EFLoggable, EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter>

@property (class, readonly, copy, nonatomic) NSString *messagesTableName;
@property (class, readonly, copy, nonatomic) NSString *addressesTableName;
@property (class, readonly, copy, nonatomic) NSString *messageGlobalDataTableName;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedMetadataIsolation;
@property (retain, nonatomic) NSNumber *cachedMetadataEstimatedRowCount;
@property (nonatomic) int cachedMetadataUpdatesSinceLastCheck;
@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (retain, nonatomic) EDMessageTransformer *messageTransformer;
@property (readonly, weak, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly, nonatomic) EDMessagePersistenceStatistics *persistenceStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressesTableSchema;
+ (id)bitExpressionForAttachments;
+ (id)summariesTableSchema;
+ (id)subjectsTableSchema;
+ (id)_messageReferencesTableSchema;
+ (id)protectedTablesAndForeignKeysToResolve:(id *)a0;
+ (id)protectedMessageDataTableSchema;
+ (id)objectPropertyMapperForSchema:(id)a0 protectedSchema:(id)a1;
+ (id)bitExpressionForConversationFlag:(unsigned long long)a0;
+ (id)partialMessagesTableSchemaAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)_cachedMetadataTableSchema;
+ (id)recipientsTableSchemaAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)messageGlobalDataTableSchema;

- (void)reconcileJournalWithCompletionBlock:(id /* block */)a0;
- (id)enabledAccountMailboxesExpression;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)a0;
- (void)performDatabaseWorkInBlockWithHighPriority:(id /* block */)a0;
- (long long)globalIDForMessageWithDatabaseID:(long long)a0 mailboxScope:(id *)a1;
- (long long)countOfMessagesWithGlobalMessageID:(long long)a0 matchingQuery:(id)a1;
- (id)persistedMessagesForDatabaseIDs:(id)a0 requireProtectedData:(BOOL)a1 temporarilyUnavailableDatabaseIDs:(id *)a2;
- (long long)countOfMessagesMatchingQuery:(id)a0;
- (id)collectStatistics;
- (id)requestContentForMessageObjectID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)requestSummaryForMessageObjectID:(id)a0;
- (void)iterateMessagesMatchingQuery:(id)a0 batchSize:(long long)a1 firstBatchSize:(long long)a2 limit:(long long)a3 cancelationToken:(id)a4 handler:(id /* block */)a5;
- (id)persistedMessageForOutgoingMessage:(id)a0 isDraft:(BOOL)a1;
- (BOOL)compressFile:(id)a0 error:(id *)a1;
- (void)iteratePersistedMessagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2 handler:(id /* block */)a3;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)a0 variable:(id)a1;
- (id)messageObjectIDCriterionExpressionForPredicateValue:(id)a0;
- (id)messagesForPersistedMessages:(id)a0 mailboxScope:(id)a1;
- (id)cachedMetadataJSONForKey:(id)a0 messageID:(id)a1;
- (void)setCachedMetadataJSON:(id)a0 forKey:(id)a1 messageID:(id)a2;
- (id)initWithMailboxPersistence:(id)a0 database:(id)a1 userProfileProvider:(id)a2 blockedSenderManager:(id)a3 vipReader:(id)a4;
- (void)iterateMessagesMatchingSmartSortQuery:(id)a0 limit:(long long)a1 handler:(id /* block */)a2;
- (id)queryWithExpandedMailboxesFromQuery:(id)a0;
- (id)persistedMessagesForMessageObjectIDs:(id)a0 requireProtectedData:(BOOL)a1 temporarilyUnavailableMessageObjectIDs:(id *)a2;
- (void)collectStatisticsWithStatistics:(id)a0;
- (BOOL)compressDirectory:(id)a0 shouldCancel:(id /* block */)a1 error:(id *)a2;
- (id)messageObjectIDForURL:(id)a0;
- (id)persistedMessageIDsForGlobalMessageIDs:(id)a0;
- (id)validMailboxesForPrediction;
- (id)persistedMessagesForObjectIDs:(id)a0 requireProtectedData:(BOOL)a1;
- (void)performDatabaseReadBlock:(id /* block */)a0;
- (id)messagesMatchingQuery:(id)a0 limit:(long long)a1;
- (id)databaseIDsDictionaryForMessageObjectIDs:(id)a0;
- (id)messagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2;
- (id)_groupMessageObjectIDsByMailboxScope:(id)a0;
- (id)_databaseIDsDictionaryForGlobalMessageIDs:(id)a0 mailboxScope:(id)a1;
- (id)_threadQueryForThreadObjectID:(id)a0;
- (id)persistedMessagesMatchingQuery:(id)a0 limit:(long long)a1;
- (id)_cachedMetadataJSONForKey:(id)a0 globalMessageID:(long long)a1;
- (void)_setCachedMetadataJSON:(id)a0 forKey:(id)a1 globalMessageID:(long long)a2;
- (void)_checkCachedMetadataRowLimitWithConnection:(id)a0;
- (long long)globalIDForMessageIDHeader:(id)a0;
- (id)messagesForMessageObjectIDs:(id)a0 missedMessageObjectIDs:(id *)a1;
- (id)messagesMatchingQuery:(id)a0;

@end
