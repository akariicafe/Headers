@class CKVDatabaseSearcher, CKVSpanMatcher;

@interface CKVSearchServiceConnection : CKVServiceConnection <CKVSearchService> {
    CKVDatabaseSearcher *_databaseSearcher;
    CKVSpanMatcher *_spanMatcher;
}

- (void).cxx_destruct;
- (id)matchSpansWithTokenChain:(id)a0;
- (id)matchSpansWithString:(id)a0;
- (id)searchFTSWithCriteria:(id)a0 error:(id *)a1;
- (id)initWithServiceQueue:(id)a0 databaseSearcherProvider:(id)a1 spanMatcherProvider:(id)a2;
- (id)_convertFTSResultsToSearchResults:(id)a0;

@end
