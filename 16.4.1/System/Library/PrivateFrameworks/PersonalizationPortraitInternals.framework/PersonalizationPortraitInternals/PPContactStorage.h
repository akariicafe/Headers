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

- (void)clearChangeHistoryForClient:(id)a0 historyResult:(id)a1;
- (void)loadChineseBirthdayFoundKVData;
- (void)setChineseBirthdayFoundKVData;
- (void)setCachedSignificantContactHandles:(id)a0;
- (id)_joinResults:(id)a0;
- (id)sourcesForContactHandle:(id)a0;
- (id)contactsContactsWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (long long)insertIfNeededAndFetchIdentifierWithHandle:(id)a0 txnWitness:(id)a1;
- (unsigned long long)pruneOrphanedHandlesWithTxnWitness:(id)a0;
- (id /* block */)phoneFilterWithQuery:(id)a0;
- (void)storeHandleSourceMapWithHandles:(id)a0 sourceId:(long long)a1 txnWitness:(id)a2;
- (void)asyncFillResultsFromFoundInAppsWithQuery:(id)a0 explanationSet:(id)a1 group:(id)a2 results:(id)a3;
- (id)contactHandleSourceCountsWithMinimumSourceCount:(unsigned long long)a0;
- (void)setChineseBirthdayFound:(BOOL)a0;
- (BOOL)iterAllNameRecordsFromAllSourcesWithError:(id *)a0 block:(id /* block */)a1;
- (id)_waitForGroup:(id)a0 results:(id)a1 timeoutSeconds:(double)a2 explanationSet:(id)a3;
- (id /* block */)emailFilterWithQuery:(id)a0;
- (id)contactsChangeHistoryForClient:(id)a0 error:(id *)a1;
- (id)init;
- (void)asyncFillResultsFromContactsWithQuery:(id)a0 explanationSet:(id)a1 group:(id)a2 results:(id)a3;
- (id)contactHandlesForTopics:(id)a0;
- (id)_waitForGroup:(id)a0 results:(id)a1;
- (id /* block */)nameFilterWithQuery:(id)a0;
- (id)initWithDatabase:(id)a0 foundInAppsHarvestStore:(id)a1;
- (id)contactNameRecordsWithHistoryResult:(id)a0 truncated:(BOOL *)a1 error:(id *)a2;
- (id)cachedSignificantContactHandles;
- (id /* block */)postalAddressFilterWithQuery:(id)a0;
- (id)contactsWithQuery:(id)a0 explanationSet:(id)a1 timeoutSeconds:(id)a2 error:(id *)a3;
- (id)meCard;
- (void).cxx_destruct;
- (BOOL)chineseBirthdayFound;
- (id)contactHandlesForSource:(id)a0;

@end
