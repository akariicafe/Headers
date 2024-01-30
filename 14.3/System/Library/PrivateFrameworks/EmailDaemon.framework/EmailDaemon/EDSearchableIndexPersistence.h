@class NSString, EDPersistenceDatabase, NSObject;
@protocol OS_os_log, EDSearchableIndexHookResponder;

@interface EDSearchableIndexPersistence : NSObject <EFLoggable, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EDSearchableIndexDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lastProcessedAttachmentIDLock;
}

@property (class, readonly, copy, nonatomic) NSString *searchableMessagesTableName;
@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, weak, nonatomic) id<EDSearchableIndexHookResponder> hookResponder;
@property long long lastProcessedAttachmentID;
@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) NSString *additionalFilterClause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)searchableMessagesTableSchema;
+ (id)searchableAttachmentsTableSchema;
+ (id)searchableMessageTombstonesTableSchema;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 hookResponder:(id)a1;
- (id)searchableIndexItemsFromMessages:(id)a0 type:(long long)a1;
- (id)messagesWhere:(id)a0 sortedBy:(id)a1 limit:(long long)a2;
- (void)attachmentItemMetadataForAttachmentID:(id)a0 messagePersistentID:(id)a1 name:(id)a2 mailboxID:(long long)a3 result:(id /* block */)a4;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)a0;
- (void)clearOrphanedSearchableMessagesFromDatabase;
- (id)searchableIndex:(id)a0 assignTransaction:(long long)a1 updates:(id)a2;
- (void)searchableIndex:(id)a0 invalidateItemsGreaterThanTransaction:(long long)a1;
- (id)updatesForSearchableIndex:(id)a0 excludingIdentifiers:(id)a1 count:(unsigned long long)a2 cancelationToken:(id)a3;
- (long long)indexingTypeForSearchableIndex:(id)a0 item:(id)a1;
- (void)searchableIndex:(id)a0 assignIndexingType:(long long)a1 forIdentifiers:(id)a2;
- (id)verificationDataSamplesForSearchableIndex:(id)a0 count:(unsigned long long)a1 lastVerifiedMessageID:(long long)a2;
- (id)searchableIndex:(id)a0 invalidateItemsInTransactions:(id)a1;
- (void)searchableIndex:(id)a0 willRemoveIdentifiers:(id)a1 type:(long long)a2;
- (id)childIdentifiersToRemoveFromSearchableIndex:(id)a0 whenRemovingParentIdentifiers:(id)a1;
- (void)searchableIndex:(id)a0 prepareToIndexAttachmentsForMessageWithIdentifier:(id)a1;
- (id)_searchableIndexMessageIndexingTypes;
- (id)_messagesRequiringIndexingForType:(long long)a0 excludingIdentifiers:(id)a1 limit:(long long)a2;
- (id)_identifiersForRemovedItemsUsingConnection:(id)a0;
- (id)_identifiersForTombstonesOfType:(long long)a0 connection:(id)a1;
- (id)_attachmentDataForItemsRequiringIndexingExcludingIdentifiers:(id)a0 limit:(unsigned long long)a1 cancelationToken:(id)a2 connection:(id)a3;
- (id)_attachmentItemsFromAttachmentData:(id)a0 limit:(unsigned long long)a1 cancelationToken:(id)a2;
- (BOOL)_canPerformIncrementalIndexForIdentifier:(id)a0 indexingType:(long long)a1;
- (void)_addTombstonesForIdentifiers:(id)a0 type:(long long)a1 connection:(id)a2;
- (id)_assignIndexedItems:(id)a0 transaction:(long long)a1 connection:(id)a2;
- (void)_assignTombstonesForIdentifiers:(id)a0 type:(long long)a1 transaction:(long long)a2 connection:(id)a3;
- (void)_purgeSpotlightTombstonesBeforeTransaction:(long long)a0 connection:(id)a1;
- (void)_removeIndexedIdentifiers:(id)a0 connection:(id)a1;
- (id)_identifiersForAttachmentsInTransactions:(id)a0 usingConnection:(id)a1;
- (id)_messageIDTransactionIDDictionaryToVerifyUsingConnection:(id)a0 count:(unsigned long long)a1 lastVerifiedMessageID:(long long)a2;
- (id)_assignIndexedItems:(id)a0 connection:(id)a1 query:(id)a2 indexedBindingsGenerator:(id /* block */)a3;
- (id)_assignIndexedAttachmentItems:(id)a0 transaction:(long long)a1 connection:(id)a2;
- (id)_identifiersForDeletedMessagesUsingConnection:(id)a0;
- (id)_identifiersForDeletedAttachmentsUsingConnection:(id)a0;
- (id)_identifiersForAttachmentsWithQuery:(id)a0 usingConnection:(id)a1;

@end
