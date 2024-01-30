@class CNContactStore, NSString, PPMeCardCacheManager, SGSqlEntityStore, PPContactDiskCacheManager, NSObject, PPSQLDatabase;
@protocol OS_dispatch_queue, SGSuggestionsServiceContactsProtocol, OS_dispatch_semaphore;

@interface PPContactStorage : NSObject {
    CNContactStore *_contactsStore;
    NSObject<OS_dispatch_semaphore> *_concurrentContactQueryThrottleSem;
    NSObject<OS_dispatch_queue> *_concurrentContactQueryQueue;
    PPContactDiskCacheManager *_contactCacheManager;
    PPMeCardCacheManager *_meCardCacheManager;
    id<SGSuggestionsServiceContactsProtocol> _foundInAppsService;
    SGSqlEntityStore *_foundInAppsHarvestStore;
    NSString *_path;
    PPSQLDatabase *_db;
    BOOL _chineseBirthdayFound;
}

+ (id)normalizeHandle:(id)a0;

- (void)asyncFillResultsFromFoundInAppsWithQuery:(id)a0 explanationSet:(id)a1 group:(id)a2 results:(id)a3;
- (id)_waitForGroup:(id)a0 results:(id)a1;
- (id)_disksCacheHistoryRecordsWithError:(id *)a0;
- (id)_foundInAppsContactsQueryWithTerm:(id)a0 explanationSet:(id)a1 error:(id *)a2 filter:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;
- (id)contactHandleSourceCountsWithMinimumSourceCount:(unsigned long long)a0;
- (id)_historyTokenForClientIdentifier:(id)a0;
- (void)storeHandleSourceMapWithHandles:(id)a0 sourceId:(long long)a1 txnWitness:(id)a2;
- (id)contactsChangeHistoryForClient:(id)a0 error:(id *)a1;
- (id)_namesRecordsForAllFoundInAppsContactsWithKeepGoingBlock:(id /* block */)a0;
- (id /* block */)nameFilterWithQuery:(id)a0;
- (id)contactsContactsWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (void)loadChineseBirthdayFoundKVData;
- (BOOL)_iterContactsNameRecordsForAllContactsFromSouceAndReplaceDiskCacheWithError:(id *)a0 diskCache:(id)a1 block:(id /* block */)a2;
- (id)contactHandlesForTopics:(id)a0;
- (id)initWithDatabase:(id)a0;
- (id)_contactsPostalAddressSearchWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (void)setChineseBirthdayFound:(BOOL)a0;
- (unsigned long long)pruneOrphanedHandlesWithTxnWitness:(id)a0;
- (BOOL)chineseBirthdayFound;
- (id)_contactsContactsWithPredicate:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (BOOL)_addToCache:(id)a0 records:(id)a1;
- (id /* block */)postalAddressFilterWithQuery:(id)a0;
- (id)_contactsPhoneSearchWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (id)_contactsFullTextSearchWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2 filter:(id /* block */)a3;
- (void)setChineseBirthdayFoundKVData;
- (id)sourcesForContactHandle:(id)a0;
- (id)_waitForGroup:(id)a0 results:(id)a1 timeoutSeconds:(double)a2 explanationSet:(id)a3;
- (long long)insertIfNeededAndFetchIdentifierWithHandle:(id)a0 txnWitness:(id)a1;
- (id /* block */)phoneFilterWithQuery:(id)a0;
- (id)_foundInAppsContactsQueryWithIdentifier:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (void)asyncFillResultsFromContactsWithQuery:(id)a0 explanationSet:(id)a1 group:(id)a2 results:(id)a3;
- (id)contactsWithQuery:(id)a0 explanationSet:(id)a1 timeoutSeconds:(id)a2 error:(id *)a3;
- (id)contactHandlesForSource:(id)a0;
- (void)_setHistoryToken:(id)a0 clientIdentifier:(id)a1;
- (id)meCard;
- (id)_nameRecordKeysToFetch;
- (BOOL)_iterNameRecordsFromDiskCache:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)iterAllNameRecordsFromAllSourcesWithError:(id *)a0 block:(id /* block */)a1;
- (BOOL)_iterContactsNameRecordsForAllContactsWithError:(id *)a0 block:(id /* block */)a1;
- (void)clearChangeHistoryForClient:(id)a0 historyResult:(id)a1;
- (id)_contactsNameSearchWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (id /* block */)emailFilterWithQuery:(id)a0;
- (id)_foundInAppsContactsWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (id)contactNameRecordsWithHistoryResult:(id)a0 truncated:(BOOL *)a1 error:(id *)a2;
- (id)_contactsEmailSearchWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (id)_joinResults:(id)a0;

@end
