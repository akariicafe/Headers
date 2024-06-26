@class SGSuggestHistory, SGJournal, SGKeyValueCacheManager, NSDictionary, NSObject, SGSGtoCNContactsCacheUpdateAdapter, NSMutableArray, SGBloomFilter, SGDatabaseJournal, NSSet, NSString, _PASLock, SGSpotlightContactsAdapter, SGSqliteDatabase, NSMutableSet, SGSqliteDatabaseSharedLock, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface SGSqlEntityStore : NSObject <CSSearchableIndexDelegate> {
    SGSqliteDatabase *_db;
    SGSqliteDatabaseSharedLock *_sharedWriteLock;
    SGSqliteDatabase *_snippetDb;
    SGDatabaseJournal *_snippetsJournal;
    SGSuggestHistory *_history;
    _Atomic BOOL _identityStoreDirty;
    NSDictionary *_entityMigrations;
    NSDictionary *_snippetsMigrations;
    unsigned int _entityVersion;
    unsigned int _snippetsVersion;
    BOOL _entityMigrationRequiresMergeBlobUpdate;
    unsigned long long _lostMessageOverflow;
    NSMutableArray *_deallocNotifications;
    struct atomic_flag { _Atomic BOOL _Value; } _isClosed;
    SGJournal *_journal;
    unsigned long long _parentMessagesLimit;
    NSSet *_serializedContactEntityIDs;
    unsigned long long _serializedContactsLimit;
    _PASLock *_recentlyDeletedEmailKeys;
    _Atomic int _spotlightReindexCount;
    NSObject<OS_dispatch_queue> *_spotlightReindexQueue;
    NSSet *_prematchedContactIdentifiers;
    NSObject<OS_dispatch_queue> *_precomputationQueue;
    SGBloomFilter *_messageRecipients;
    id /* block */ _crLookup;
    NSString *_snippetDbPath;
    id _lockStateNotificationRegistrationToken;
    BOOL _executeJournals;
    NSMutableSet *_phoneNumbersWithNoContact;
    NSMutableOrderedSet *_otherDetailsWithNoContact;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isEphemeral;
@property (readonly, nonatomic) BOOL waitForMigrations;
@property (readonly) SGSpotlightContactsAdapter *spotlightContactsAdapter;
@property (readonly) SGSGtoCNContactsCacheUpdateAdapter *sgToCNContactsCacheUpdateAdapter;
@property (readonly) SGKeyValueCacheManager *kvCacheManager;

+ (void)releaseInstanceAndWaitForDealloc:(id *)a0;
+ (id)_serializeDate:(id)a0;
+ (id)cnContactIdentifiersForContact:(id)a0;
+ (id)defaultSnippetPath;
+ (id)_deserializeDateComponents:(id)a0;
+ (id)queryForContactMatch;
+ (id)escapeLike:(id)a0;
+ (id)defaultPath;
+ (id)sqlStoreWithEntityDbPath:(id)a0 snippetDbPath:(id)a1 isEphemeral:(BOOL)a2 executeJournals:(BOOL)a3;
+ (id /* block */)binderForCNContactMatch:(id)a0 floorEntityID:(long long)a1 max:(unsigned long long)a2;
+ (id)storeWithDefaultLocationAndExecuteJournals:(BOOL)a0;
+ (id)sqlStoreWithEntityDbPathNoMigrate:(id)a0 snippetDbPath:(id)a1 isEphemeral:(BOOL)a2 executeJournals:(BOOL)a3;
+ (id)sqlStoreWithEntityDbPath:(id)a0 snippetDbPath:(id)a1 isEphemeral:(BOOL)a2 sharedLock:(id)a3 executeJournals:(BOOL)a4;
+ (id)likePrefix:(id)a0;
+ (id)_fieldValuesClassWhitelist;
+ (void)deletePreparedSqlStoreInMemory;
+ (void)setCachedVIPEmailAddresses:(id)a0;
+ (id)defaultStore;
+ (id)journalNameForDbPath:(id)a0;
+ (BOOL)pathHasFutureDbSchema:(id)a0;
+ (id)_initializeDatabaseNolock:(id)a0 withProtection:(BOOL)a1 sharedLock:(id)a2 newDatabaseCreated:(BOOL *)a3;
+ (id)defaultPathCreatingSuggestionsDirectoryIfNeeded:(BOOL)a0;
+ (id)defaultHarvestStore;
+ (void)prepareSqlStoreInMemoryByClearingExistingStore:(id)a0;
+ (id)initializeDatabase:(id)a0 withProtection:(BOOL)a1 sharedLock:(id)a2 newDatabaseCreated:(BOOL *)a3;
+ (id)_recreateCorruptDatabase:(id)a0 sharedLock:(id)a1 withProtection:(BOOL)a2;
+ (void)prepareSqlStoreInMemory;
+ (id)cnContactIdentifiersSpotlightQueryStringForContact:(id)a0;
+ (void)clearMigrationCompletedForPaths;
+ (id)globPrefix:(id)a0;
+ (BOOL)canStoreEventsForAccountType:(id)a0;
+ (id)sqlStoreInMemory;
+ (void)addPathToFutureDbSchemas:(id)a0;
+ (id)_cachedVIPEmailAddresses;

- (void)markMessagesLost:(id)a0;
- (id)_columnList;
- (BOOL)rejectReminderByRecordId:(id)a0 error:(id *)a1;
- (id)suggestContactsByMasterEntityQuery:(id)a0 limit:(unsigned long long)a1 bindings:(id /* block */)a2;
- (BOOL)confirmReminderByRecordId:(id)a0 error:(id *)a1;
- (void)writeCNContactMatchAndUpdateSetForContact:(id)a0 withMatches:(id)a1 andMaxEntityID:(long long)a2;
- (BOOL)confirmEventByRecordId:(id)a0 error:(id *)a1;
- (BOOL)rejectEventByRecordId:(id)a0 error:(id *)a1;
- (id)suggestContactMatchesByPhoneNumber:(id)a0;
- (unsigned long long)_unsignedIntegerFromPhoneIfPossible:(id)a0;
- (void)_writeLabeledBlobs:(id)a0 isDelete:(BOOL)a1;
- (BOOL)needsFullSync;
- (id)selectEntityQuery:(id)a0;
- (void)clearCaches;
- (void)registerSentMailMessage:(id)a0;
- (id)dbHandleForTesting;
- (id)loadEntitiesByEntityKey:(id)a0 entityType:(long long)a1 resolveDuplicates:(id /* block */)a2;
- (void)markMessagesFound:(id)a0;
- (BOOL)reminderAlarmTriggeredForRecordId:(id)a0 error:(id *)a1;
- (BOOL)_isPhoneNumberInNoContactsCache:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (void)deleteSerializedContactForId:(long long)a0;
- (id)_makeBlobsFromConnectedComponents:(id)a0 edges:(id)a1;
- (BOOL)reimportRequestsContainBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1;
- (id)loadExtractionInfoForPrimaryKey:(long long)a0;
- (void)updateReimportItemUniqueIdForBundleId:(id)a0 oldValue:(id)a1 newValue:(id)a2;
- (id)suggestContactByKey:(id)a0;
- (id)allContactsWithEntityType:(unsigned long long)a0;
- (id)loadEventsWithInteractionIdentifiers:(id)a0 fromBundleIdentifier:(id)a1;
- (void)storeStatsCounterWithKey:(id)a0 value:(double)a1;
- (id)domainIdentifierForSpotlightReferenceForBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1;
- (long long)_popQueuedSerializedContactId;
- (long long)commitStorageLocation:(id)a0;
- (id)getReminderWithDuplicateKey:(id)a0;
- (long long)getMaxEntityId;
- (id)_filterOutCancelledEvents:(id)a0;
- (BOOL)databasecheck_contactMergeGroupConsistency;
- (void)setSerializedContactsLimit:(unsigned long long)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (void)logConfirmPercentAfterContactRejection;
- (id)selectMigrationQueue;
- (BOOL)confirm:(BOOL)a0 orRejectContactByRecordID:(id)a1 error:(id *)a2;
- (id)loadReminderByRecordId:(id)a0;
- (id)reminderEntityIdForPrimaryKey:(long long)a0;
- (id)filterOutUndisplayableEntities:(id)a0;
- (long long)migration_RemoveEntityReferencesWithoutBundleIdentifier;
- (BOOL)_runInitMigrationTasks:(id)a0 noMigrate:(BOOL)a1;
- (id)loadContactDetailsForRecordId:(id)a0 type:(unsigned long long)a1;
- (id)allDeliveriesWithLimit:(unsigned long long)a0;
- (id)historyForTesting;
- (id)_uniqueGoodDetailMatchFrom:(id)a0 toDetails:(id)a1 nonUnique:(BOOL *)a2;
- (id)initWithEntityDbPath:(id)a0 snippetDbPath:(id)a1 isEphemeral:(BOOL)a2 sharedLock:(id)a3 executeJournals:(BOOL)a4 noMigrate:(BOOL)a5;
- (void)deleteSpotlightReferencesWithNoBundleIdentifier;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_ { double x0; })a0 endingAt:(struct SGUnixTimestamp_ { double x0; })a1 prefix:(id)a2 limitTo:(unsigned long long)a3 options:(unsigned int)a4;
- (id)_matchinfoForFTSMatchWhere:(id)a0 bindings:(id /* block */)a1;
- (BOOL)isRecentlyDeleted:(id)a0;
- (id)prematchedContactIdentifiers;
- (void)stopJournaling;
- (long long)_writeMessageEntityToDb:(id)a0;
- (BOOL)_shouldContinueReindex:(int)a0;
- (id)_loadReimportRequestsWithWhereClause:(id)a0;
- (id)suggestContactMatchesByContactDetailTag:(id)a0;
- (long long)migration_RecreateFTSTableWithITS;
- (void)pruneNLEventEntitiesOlderThan:(struct SGUnixTimestamp_ { double x0; })a0;
- (BOOL)_analyzeMergeBlobsIncremental:(id)a0;
- (unsigned long long)commitExtractionInfo:(id)a0;
- (id)initForMigratorTestWithEntityDb:(id)a0 snippetDb:(id)a1;
- (id)journal;
- (id)contactsWithIdentifiers:(id)a0;
- (id)batchOf:(unsigned long long)a0 contactsStartingAtEntityId:(unsigned long long)a1;
- (id)_loadIdentityBlobs;
- (void)writeCNContactMatchForContact:(id)a0 withMatches:(id)a1 andMaxEntityID:(long long)a2;
- (void)pruneEntitiesOlderThanOneYearWithSuspensionHandler:(id /* block */)a0;
- (void)deleteMessages:(id)a0;
- (BOOL)performIntegrityCheckOnly;
- (id)nextPendingGeocode;
- (void).cxx_destruct;
- (id)_pendingCNContactIdsJobCache;
- (id)loadOriginByRecordId:(id)a0;
- (int)countContactDetailTableRows;
- (id)_popMergeBlobForAnalysis;
- (id)duplicateKeysFromRecordIds:(id)a0;
- (id)duplicateKeysMatchingAnyEventHash:(id)a0;
- (void)resolveFullDownloadRequests:(id)a0;
- (void)deleteAllReimportRequestsOlderThanDate:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;
- (unsigned long long)entityCount;
- (id)makeInterdictsForBlob:(id)a0 withContactStore:(id)a1;
- (id)_computePseudoContactContentHash:(id)a0 contactDetails:(id)a1;
- (BOOL)processPseudoContactEntity:(id)a0 recordId:(id)a1;
- (void)_prunePseudoContactGeneratingEmails:(id)a0;
- (void)_markRecordsLostIfNoSpotlightReferences:(id)a0;
- (id)computeBlobs;
- (BOOL)registerAndLinkIdentity:(id)a0 recordId:(id)a1 phones:(id)a2 instantMessageAddresses:(id)a3 email:(id)a4 curated:(BOOL)a5 isSent:(BOOL)a6;
- (void)markLostSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (void)_addTimeRange:(id)a0 toEntityWriteDictionary:(id)a1;
- (void)confirmFieldValues:(id)a0 forEntity:(id)a1;
- (BOOL)senderIsSignificantForMessage:(id)a0;
- (long long)reminderPrimaryKeyForEntityId:(id)a0;
- (void)forceBlobSync;
- (void)dealloc;
- (id)loadAllContactDetailsFromTableForRecordId:(id)a0 type:(unsigned long long)a1;
- (BOOL)contactIsSignificantOrSignificanceIsDisabled:(id)a0 usingCoreRecents:(BOOL)a1;
- (long long)writeEnrichment:(id)a0;
- (void)truncateContactDetailTable;
- (id)entityKeyCountsForEntityType:(long long)a0 startDate:(id)a1 endDate:(id)a2;
- (id)entityFromSqlResult:(struct sqlite3_stmt { } *)a0 withSnippets:(BOOL)a1;
- (id)_buildUnknownMatchContactMatchForSGContact:(id)a0;
- (long long)migrateToVersion:(unsigned long long)a0;
- (void)enumerateAllContactsWithSnippets:(BOOL)a0 limitTo:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)markReimportItemsAsSeenByReceiverWithBundleId:(id)a0 items:(id)a1;
- (long long)writeEntity:(id)a0 withSpotlightReferenceForBundleIdentifier:(id)a1 uniqueIdentifier:(id)a2 domainIdentifier:(id)a3;
- (void)_writeMessageEntityToSnippetsDb:(id)a0;
- (void)_deleteOrphanedItems;
- (void)_addPhoneNumberIntegerToNoContactsCache:(unsigned long long)a0;
- (void)markMessagesUndisplayablyLost:(id)a0;
- (void)_enumerateContactsForMasterEntityIds:(id)a0 withSnippets:(BOOL)a1 usingBlock:(id /* block */)a2;
- (id)_filterOutAllButAcceptedWithUpdatedFields:(id)a0;
- (void)writeEntityGeocodeResultToDb:(id)a0;
- (BOOL)rejectRealtimeEvent:(id)a0 error:(id *)a1;
- (void)_removeSnippetsForEmails:(id)a0;
- (id)suggestContactMatchesByEmailAddress:(id)a0 isMaybe:(BOOL)a1 onlySignificant:(BOOL)a2;
- (BOOL)mayHaveSentMessageToEmail:(id)a0;
- (id)loadAllPrecomputedContactMatches;
- (id)duplicateKeysMatchingAnyReminderHash:(id)a0;
- (void)_addPhoneNumberToNoDetailsCache:(id)a0;
- (BOOL)migrationNeeded;
- (void)_deltaSyncContactsWithChangeHistory:(id)a0;
- (id)cnContactMatchesForRecordId:(id)a0 found:(BOOL *)a1;
- (long long)commitContactDetail:(id)a0;
- (id)suggestContactByRecordId:(id)a0;
- (BOOL)writeURL:(id)a0;
- (long long)migration_DropMessagingTermsWithPhoneExtensions;
- (void)deleteCompletedReimportRequests;
- (void)deleteInteractionsWithBundleId:(id)a0;
- (BOOL)_isIdentityStoreDirty;
- (void)updateLanguageForFTSTablesToLanguage:(id)a0;
- (void)setCRLookupForTesting:(id /* block */)a0;
- (id)storageContactByRecordId:(id)a0 withSnippets:(BOOL)a1;
- (id)getNewBlobsIfChanged;
- (void)_addStringToNoContactsCache:(id)a0;
- (long long)configureMigratorThenMigrateToVersion:(unsigned long long)a0;
- (BOOL)syncNewBlobsIfChanged;
- (void)logConfirmPercentAfterContactConfirmation;
- (void)writeIdentityBlobs:(id)a0 forceRewrite:(BOOL)a1;
- (void)writeInteractionEventEntities:(id)a0;
- (id)eventFromSqlResult:(struct sqlite3_stmt { } *)a0;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;
- (id)loadContactForStorageContact:(id)a0 usingSerializedContactCache:(BOOL)a1;
- (id)suggestContactMatchesByEmailAddress:(id)a0;
- (long long)migration_reimport;
- (id)loadReminderByKey:(id)a0;
- (BOOL)confirmContactByRecordID:(id)a0 error:(id *)a1;
- (id)snippetsDbHandleForTesting;
- (void)_writeEventEntityToJournal:(id)a0;
- (BOOL)rebuildIdentityTables;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_ { double x0; })a0 endingAt:(struct SGUnixTimestamp_ { double x0; })a1 prefix:(id)a2 limitTo:(unsigned long long)a3;
- (void)analyzeMergeBlobs:(id)a0;
- (id)splitNeededFor:(id)a0 withInterdicts:(id)a1 curatedRecordIds:(id)a2;
- (void)link:(id)a0 to:(id)a1 type:(unsigned int)a2 strength:(double)a3;
- (id)loadDuplicateKeyByRecordId:(id)a0;
- (id)loadEntitiesBySourceKey:(id)a0 entityType:(long long)a1 resolveDuplicates:(id /* block */)a2;
- (void)addDeallocNotification:(id /* block */)a0;
- (double)incStatsCounterWithKey:(id)a0;
- (id)loadEventByKey:(id)a0;
- (id)_selectingDomainsForDomainIdentifier:(id)a0;
- (BOOL)databasecheck_IntegrityCheck;
- (id)_contactsForMasterEntityIds:(id)a0 withSnippets:(BOOL)a1;
- (void)removeStringFromNoContactsCache:(id)a0;
- (void)_enqueueBatchOfCNContactIds:(id)a0;
- (id)contactDetailEntityIdForDuplicateKey:(id)a0;
- (void)removePhoneNumberFromNoDetailsCache:(id)a0;
- (id)loadAllContactDetailsFromTableForRecordId:(id)a0;
- (id)_deleteEntitiesByDuplicateKeyNoRecurse:(id)a0;
- (id)storageContactByKey:(id)a0;
- (void)clearMasterEntityCache;
- (void)markReimportRequestAsExecutedWithRequestId:(unsigned long long)a0;
- (void)_trimSerializedContacts;
- (id)duplicateKeysMatchingEmailAddressPrefix:(id)a0 limitTo:(unsigned long long)a1;
- (id)loadCNContactMatchesForContact:(id)a0 andGetMaxEntityId:(long long *)a1;
- (id)allPseudoContacts;
- (id)loadAllContactDetailsForRecordId:(id)a0;
- (void)_writeContactDetails:(id)a0;
- (id)_computeBlobsRaw:(id *)a0;
- (void)deleteByRecordId:(id)a0;
- (long long)_writeOneEntityToDb:(id)a0;
- (void)deleteItemsWithEntityTag:(id)a0 preserveEventConfirmationHistory:(BOOL)a1;
- (id)childrenFromParentKey:(id)a0;
- (long long)clearDatabase:(id)a0;
- (id)loadUnseenReimportItemsForRequest:(unsigned long long)a0;
- (void)writeSerializedContactPlaceholder:(long long)a0;
- (struct _PASDBIterAction_ { BOOL x0; })_updateURLs:(id)a0 stmt:(struct sqlite3_stmt { } *)a1;
- (id)suggestContactMatchesByPhoneNumber:(id)a0 isMaybe:(BOOL)a1 onlySignificant:(BOOL)a2;
- (id)loadInterdicts;
- (BOOL)deleteURLsFromBundleIdentifier:(id)a0;
- (void)pruneNLEventEntitiesOlderThanTwoWeeks;
- (long long)migration_AddNewishTablesIfMissing;
- (long long)migrate;
- (void)registerCachePrecomputationWithCTS;
- (BOOL)rejectContactDetailByRecordID:(id)a0 error:(id *)a1;
- (long long)migration_newContactDetailsSchema;
- (void)deleteEntitiesByDuplicateKey:(id)a0 preserveEventConfirmationHistory:(BOOL)a1 emitChangeNotifications:(BOOL)a2;
- (void)clearNoContactsCache;
- (long long)skipFromZeroSchema;
- (void)updateMessages:(id)a0 state:(unsigned long long)a1;
- (void)reindexSearchableItemsWithMinimumEntityId:(unsigned long long)a0 searchableIndex:(id)a1 acknowledgementHandler:(id /* block */)a2 reindexCount:(int)a3;
- (long long)migration_FixupMergeGroups;
- (void)markReimportItemAsSeenByReceiverWithBundleId:(id)a0 uniqueId:(id)a1;
- (long long)runQueries:(id)a0 forVersion:(unsigned int)a1 inTransactionOnDb:(id)a2;
- (id)_filterOutOlderVersionsOfPseudoEvents:(id)a0;
- (id)_deleteChildEntitiesByRecordIdsInTable:(id)a0;
- (id)_loadMessageByKey:(id)a0;
- (BOOL)anyHandleIsSignificant:(id)a0;
- (id)loadStatsCounterWithKey:(id)a0;
- (id)storageLocationWithPrimaryKey:(long long)a0;
- (id)duplicateKeysFromMailMessageKeys:(id)a0;
- (long long)_writeEnrichmentToDb:(id)a0;
- (BOOL)confirmStoredEvent:(id)a0 error:(id *)a1;
- (BOOL)_isBlobAnalysisQueueEmpty;
- (BOOL)deleteURLsOlderThanDate:(id)a0;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (id)languageToUpdateEntityFTSTo;
- (BOOL)confirmStoredReminder:(id)a0 error:(id *)a1;
- (void)_postChangeNotification;
- (void)reportDbStats;
- (id)suggestContactMatchesWithFullTextSearch:(id)a0 limitTo:(unsigned long long)a1;
- (void)analyzeDatabase;
- (id)rejectFieldValuesForRecordId:(id)a0;
- (void)markEntityAsDupeByRecordId:(id)a0;
- (void)_writeFTSTermsForEnrichment:(id)a0 entityId:(long long)a1;
- (id)urlsFoundBetweenStartDate:(id)a0 endDate:(id)a1 excludingBundleIdentifiers:(id)a2 limit:(long long)a3;
- (void)writeEmailVerificationResultForEmailWithKey:(id)a0 eventEntities:(id)a1;
- (id)parentKeysForDuplicateKey:(id)a0;
- (BOOL)contactIsDisplayable:(id)a0;
- (id)loadUnqueriedReimportRequests;
- (id)_duplicateKeysWithZeroSpotlightReferencesFromRecordIds:(id)a0;
- (id)_matchableUTF8TokenRangesInMatchExpression:(id)a0;
- (void)removeSnippetsForEntities:(id)a0;
- (BOOL)confirmContactDetailByRecordID:(id)a0 error:(id *)a1;
- (id)loadStorageContactByRecordId:(id)a0 error:(id *)a1;
- (unsigned long long)maxKnownDbVersion;
- (BOOL)contactIsSignificant:(id)a0 usingCoreRecents:(BOOL)a1;
- (BOOL)contactIsSignificantOrSignificanceIsDisabled:(id)a0;
- (void)deleteCNContactMatchForContactId:(id)a0;
- (BOOL)eventIsCancelled:(id)a0;
- (BOOL)_renameTable:(id)a0 to:(id)a1;
- (void)registerSentTextMessage:(id)a0;
- (BOOL)contactIsSignificant:(id)a0;
- (id)reminderSourceKeyForDuplicateKey:(id)a0;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)a0;
- (void)_writeContactEntityToJournal:(id)a0;
- (void)_removeCorruptionMarker;
- (void)deleteSerializedContactsForIdSet:(id)a0;
- (id)confirmedFieldValuesForEvent:(id)a0;
- (id)loadAllContactDetailsWithWhereClause:(id)a0 onPrep:(id /* block */)a1 dedupeAgainst:(id)a2;
- (id)storageContactByMasterEntityId:(long long)a0 withSnippets:(BOOL)a1;
- (void)_addIndexingTagsToParent:(id)a0;
- (long long)migration_deleteInternalExtractionsFromML;
- (void)_emitChangeNotificationForEnrichment:(id)a0;
- (id)columnQueryPrefixSelect;
- (id)dbStats;
- (BOOL)_isStringInNoContactsCache:(id)a0;
- (BOOL)registerAndLinkIdentity:(id)a0 recordId:(id)a1 phones:(id)a2 instantMessageAddresses:(id)a3 email:(id)a4 curated:(BOOL)a5;
- (void)pruneEntitiesOlderThan:(struct SGUnixTimestamp_ { double x0; })a0 suspensionHandler:(id /* block */)a1 batchSize:(unsigned long long)a2;
- (void)_joinIncompleteIdentityPhonesWithOthersOfTheirIlk:(id)a0 name:(id)a1 recordId:(id)a2;
- (void)_contentWriteEnrichmentToDb:(id)a0;
- (void)_deleteRemindersByDuplicateKey:(id)a0;
- (id)batch:(id /* block */)a0;
- (id)loadReminderByRecordIdOld:(id)a0;
- (long long)migration_deleteLegacyMessages;
- (id)duplicateKeysMatchingAnyTag:(id)a0;
- (void)setLostMessageOverflow:(unsigned long long)a0;
- (void)startJournaling;
- (void)filterOutRejectedDetailsFromContact:(id)a0;
- (BOOL)processContactEnrichment:(id)a0 recordId:(id)a1;
- (BOOL)_tombstoneExistsForBundleIdentifier:(id)a0;
- (void)addSpotlightReferenceToEmailRecordId:(id)a0 withBundleIdentifier:(id)a1 uniqueIdentifier:(id)a2 domainIdentifier:(id)a3;
- (long long)migration_CreateFTSTableWithITS;
- (id)suggestContactByIdentityKey:(id)a0 parentKey:(id)a1;
- (id)_popBatchOfCNContactIds;
- (float)_scoreContactDetail:(id)a0;
- (void)_joinIncompleteIdentityEmailWithOthersOfItsIlk:(id)a0 name:(id)a1 recordId:(id)a2;
- (BOOL)tombstoneExistsForSpotlightReferenceWithBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1 domainIdentifier:(id)a2;
- (id)displayableEntities:(id)a0;
- (id)recentURLsWithLimit:(long long)a0;
- (id)curatedRecordIds;
- (void)pruneLostMessagesWithSource:(id)a0 count:(unsigned long long)a1;
- (id)emailsPendingVerification;
- (BOOL)trimURLs;
- (long long)migration_newRemindersSchema;
- (void)writeSerializedContact:(id)a0;
- (BOOL)realtimeContactIsSignificantOrSignificanceIsDisabled:(id)a0;
- (void)selectAuthoritativeDetailsForContactWithId:(long long)a0;
- (void)_dumpTable:(id)a0 columns:(id)a1 limitTo:(int)a2;
- (BOOL)_processBatchOfSerializedContactJobs;
- (id)reimportRequestDBStats;
- (long long)commitStorageReminder:(id)a0;
- (unsigned long long)storeReimportRequest:(id)a0;
- (id)suggestContactsWithPrefix:(id)a0 limitTo:(unsigned long long)a1;
- (id)allContactsMasterEntityIdsLimitedTo:(unsigned long long)a0;
- (id)allEntitiesOfType:(long long)a0 limitedTo:(unsigned long long)a1 onlyMLExtractions:(BOOL)a2;
- (double)_scoreSGContact:(id)a0 bySimilarityToContact:(id)a1 cnContactFullname:(id)a2;
- (id)loadMessagesToRefresh;
- (long long)migration_RebuildIdentityTables;
- (long long)migration_AddAuthorColumnIfMissing;
- (void)deleteInteractionEntitiesExceedingLimit:(id)a0 withSuspensionHandler:(id /* block */)a1;
- (id)entityFromSqlResult:(struct sqlite3_stmt { } *)a0;
- (long long)migration_FixUpColumnsForDevicesWhoMissedTheImprovedLegacyMigration;
- (long long)migration_rebuildFTSWithDetailEntityIDDocIDs;
- (id)loadCuratedEventsStartingAt:(double)a0;
- (void)addInterdictFrom:(id)a0 with:(id)a1;
- (long long)unmigrateDatabases;
- (id)loadEventByRecordId:(id)a0;
- (id)_deleteMessageMetadataByDuplicateKeyNoRecurse:(id)a0;
- (BOOL)anyEmailAddressIsSignificant:(id)a0;
- (void)vacuum;
- (id)splitBlob:(id)a0 withInterdicts:(id)a1 edges:(id)a2 curatedRecordIds:(id)a3;
- (id)unmergedCandidatesLimitedTo:(int)a0;
- (id)_recordIdsFromRemovingSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (BOOL)reminderAlarmTriggeredForStorageReminder:(id)a0 error:(id *)a1;
- (void)_hashAttachedPseudoContacts:(id)a0;
- (long long)fixupVersionMismatch;
- (BOOL)deleteURLsFromBundleIdentifier:(id)a0 documentIdentifiers:(id)a1;
- (void)pruneDuplicateEventExtractions:(id)a0;
- (id)loadEntityByKey:(id)a0;
- (id)loadFullDownloadRequestBatch:(unsigned long long)a0;
- (void)_reportDbStatsBackground;
- (id)suggestContactMatchesWithContact:(id)a0 limitTo:(unsigned long long)a1;
- (id)_journalEntryFromReminderEntity:(id)a0;
- (void)_emitChangeNotifications:(id)a0;
- (void)storeReimportItems:(id)a0 requestId:(unsigned long long)a1;
- (id)loadReminderByKeyOld:(id)a0;
- (void)_writeEventEntitiesToJournal:(id)a0;
- (id)loadContactDetailsWithWhereClause:(id)a0 onPrep:(id /* block */)a1 type:(unsigned long long)a2 dedupeAgainst:(id)a3 recordId:(id)a4;
- (id)_labelIdentityBlobs:(id)a0;
- (BOOL)rejectStoredReminder:(id)a0 error:(id *)a1;
- (void)clearChangeHistory:(id)a0;
- (id)initForRawDatabaseAccessWithEntityPath:(id)a0 snippetsPath:(id)a1 error:(id *)a2;
- (void)_writeReminderEntitiesToJournal:(id)a0;
- (void)updateCNContactMatches:(id)a0;
- (void)deleteInteractionsWithBundleId:(id)a0 groupIdentifiers:(id)a1;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)a0 domainIdentifier:(id)a1;
- (void)_addIndexingTagsTo:(id)a0;
- (id)allRemindersLimitedTo:(unsigned long long)a0;
- (void)closeDatabases;
- (id)mostRecentParentKeyForDuplicateKey:(id)a0;
- (unsigned long long)_minEntityIdFromMinEntityId:(unsigned long long)a0 withContactIdentifiers:(id)a1;
- (BOOL)confirmRealtimeContact:(id)a0 error:(id *)a1;
- (long long)contactDetailPrimaryKeyForDuplicateKey:(id)a0;
- (id)loadUnexecutedReimportRequests;
- (void)_writeEntityParentageFor:(id)a0 entityId:(long long)a1;
- (BOOL)clearDatabases;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_ { double x0; })a0 endingAt:(struct SGUnixTimestamp_ { double x0; })a1 limitTo:(unsigned long long)a2 options:(unsigned int)a3;
- (void)logConfirmPercentAfterContactDetailConfirmation;
- (BOOL)_prepareToCopyFrom:(id)a0 toNewTableNamed:(id)a1;
- (long long)migration_ConvertContentAndDupKeyHashesToBlobs;
- (id)masterEntityIDsForMasterEntityQuery:(id)a0 bindings:(id /* block */)a1;
- (void)_fullSyncContactsWithStore:(id)a0;
- (void)setParentMessagesLimitForTesting:(unsigned long long)a0;
- (long long)migration_DeduplicateIdentityPhones;
- (struct SGUnixTimestamp_ { double x0; })lastSeenTimestampForKey:(id)a0;
- (void)tryExecuteSnippetsJournal;
- (BOOL)rejectStoredEvent:(id)a0 error:(id *)a1;
- (id)loadAllReimportRequests;
- (void)handleDeviceLockStateEvent:(int)a0;
- (long long)migration_deleteEmergencyExtractions;
- (void)_logConfirmPercentWithConfirmCount:(double)a0 rejectCount:(double)a1 domain:(id)a2 suffix:(id)a3;
- (id)_rankSGContacts:(id)a0 bySimilarityToContact:(id)a1;
- (long long)migration_deleteSerializedContacts;
- (BOOL)rejectRealtimeContact:(id)a0 error:(id *)a1;
- (id)reminderOriginForPrimaryKey:(long long)a0;
- (void)deleteAllCNContactMatchesForIdSet:(id)a0;
- (void)_deleteIfNoSpotlightReferences:(id)a0 addToRecentlyDeletedCache:(BOOL)a1;
- (void)deleteMessagesByDuplicateKey:(id)a0;
- (BOOL)rejectContactByRecordID:(id)a0 error:(id *)a1;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_ { double x0; })a0 endingAt:(struct SGUnixTimestamp_ { double x0; })a1 limitTo:(unsigned long long)a2;
- (void)unsafeMigrateToVersionForTesting:(unsigned long long)a0;
- (long long)migration_deleteInteractions;
- (void)_markIdentityStoreDirty;
- (id)getReminderWithRecordId:(id)a0;
- (id)duplicateKeysMatchingInteractionBundleId:(id)a0 andTags:(id)a1;
- (BOOL)recentsContainSomeOfEmails:(id)a0 phoneNumbers:(id)a1 instantMessageAddresses:(id)a2;
- (unsigned long long)serializedContactsLimit;
- (BOOL)addSpotlightReferenceToEmailIfFullyDownloaded:(id)a0 withBundleIdentifier:(id)a1 uniqueIdentifier:(id)a2 domainIdentifier:(id)a3;
- (id)_journalEntryFromEntity:(id)a0;
- (id)initForDbStatsOnlyWithError:(id *)a0;
- (void)enumerateContactsByMasterEntityQuery:(id)a0 withSnippets:(BOOL)a1 limit:(unsigned long long)a2 bindings:(id /* block */)a3 usingBlock:(id /* block */)a4;
- (long long)runQuery:(id)a0 onDb:(id)a1;
- (void)_writeMergeBlobSnapshotForAnalysis:(id)a0;
- (void)deleteAllCNContactMatchesForEntityID:(long long)a0;
- (id)_derefChildrenOf:(id)a0;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (void)pruneEntitiesOlderThan:(struct SGUnixTimestamp_ { double x0; })a0 suspensionHandler:(id /* block */)a1;
- (id)loadStorageContactByRecordId:(id)a0;
- (id)suggestContactsByMasterEntityQuery:(id)a0 withSnippets:(BOOL)a1 limit:(unsigned long long)a2 bindings:(id /* block */)a3;
- (id)suggestContactMatchesWithMessagingPrefix:(id)a0 limitTo:(unsigned long long)a1;
- (id)getReminder:(long long)a0;
- (BOOL)realtimeContactIsSignificant:(id)a0;
- (void)refreshSuggestionsContact:(id)a0;
- (void)pruneReminders;
- (void)_writeEnrichmentToSnippetsDb:(id)a0;
- (BOOL)confirmRealtimeEvent:(id)a0 error:(id *)a1;
- (void)registerJournalUnlockHandler;
- (long long)migration_MoveContentToSnippets;
- (void)_markIdentityStoreClean;
- (id)loadSerializedContactForId:(long long)a0;
- (void)deleteEntitiesByDuplicateKey:(id)a0 emitChangeNotifications:(BOOL)a1;
- (id)reminderDuplicateKeyForEntityId:(id)a0;
- (id)allContactsWithSnippets:(BOOL)a0 limitTo:(unsigned long long)a1;
- (void)writeCNContactMissForRecordId:(id)a0;
- (id)normalizeHandleForRecipientFilterAndRemoveFromDetailsCache:(id)a0;
- (BOOL)performDatabaseCheck;
- (void)clearAllTombstonesForSpotlightReferencesIf:(id /* block */)a0;
- (void)_addLocations:(id)a0 toEntityWriteDictionary:(id)a1;
- (id)contactIdsMergedWithMasterEntityId:(id)a0;
- (id)loadEntityByRecordId:(id)a0;
- (id)_queryForAllContactsWithLimit;
- (void)deleteItemsWithEntityTag:(id)a0;
- (long long)migrateDatabases;
- (void)_recordPseudoContactsWithDeletedDetailsInTable:(id)a0 deletedChildrenTable:(id)a1;
- (id)recordIdForKey:(id)a0;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_ { double x0; })a0 endingAt:(struct SGUnixTimestamp_ { double x0; })a1 limitTo:(unsigned long long)a2 additionalWhereClause:(id)a3 options:(unsigned int)a4 onPrep:(id /* block */)a5;
- (void)writeSerializedContactAndUpdateEntityIDSet:(id)a0;
- (id)suggestContactsWithContact:(id)a0 limitTo:(unsigned long long)a1;
- (id)reminderEntityIdForDuplicateKey:(id)a0;
- (BOOL)rejectReminderByKey:(id)a0 error:(id *)a1;
- (id)loadAllSerializedContacts;
- (long long)migration_separateMessageEntities;
- (void)_linkNamelessEmailsIfAppropriate:(struct graph_t { unsigned int x0; unsigned int x1; struct _vertex_t *x2; } *)a0 nameToVertex:(id)a1 disjointSets:(struct DisjointSetHandle { } *)a2 edges:(id)a3;
- (BOOL)_createEntityFTSTableWithName:(id)a0;
- (BOOL)hasSpotlightReferenceForBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1;
- (void)_deleteContactDetailsByDuplicateKeys:(id)a0;
- (void)deleteAllCNContactMatches;
- (void)syncContactsWithStore:(id)a0;
- (void)setHasFullSync;
- (long long)writeEntity:(id)a0;
- (BOOL)mayHaveSentMessageToHandle:(id)a0;
- (BOOL)entityWantsFullDownload:(id)a0;
- (void)deleteInteractionsWithBundleId:(id)a0 identifiers:(id)a1;
- (double)incStatsCounterWithKey:(id)a0 byValue:(double)a1;
- (BOOL)deleteURLsFromBundleIdentifier:(id)a0 groupIdentifierGlobs:(id)a1;
- (void)_slowCopyFromTable:(id)a0 toTable:(id)a1 startingAtEntityId:(unsigned long long)a2;
- (id)confirmedFieldValuesForEntity:(id)a0;
- (void)prepMigrator;
- (BOOL)trimURLTableDownToLimit:(long long)a0;
- (id)loadSourceKeyByRecordId:(id)a0;
- (BOOL)databasecheck_BrokenEntityIDReferences;
- (id)getAllLinks;
- (id)_hashWithDuplicateKeysMatchingTags:(id)a0;
- (id)serializedEntityIds;
- (void)updateSerializedContacts:(id)a0;
- (void)_removePhoneNumberIntegerFromNoContactsCache:(unsigned long long)a0;
- (id)allEntitiesOfType:(long long)a0 limitedTo:(unsigned long long)a1;
- (long long)migration_separateMessageSnippets;
- (void)logConfirmPercentAfterContactDetailRejection;
- (void)clearAllTables;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (BOOL)corruptionMarkerPresent;
- (void)_linkNamelessPhonesIfAppropriate:(struct graph_t { unsigned int x0; unsigned int x1; struct _vertex_t *x2; } *)a0 nameToVertex:(id)a1 disjointSets:(struct DisjointSetHandle { } *)a2 edges:(id)a3;

@end
