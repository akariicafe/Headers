@class NSString, CKVDatabaseSearcher;

@interface CKVSpanMatchFTS : NSObject <CKVSpanMatchSearchIndex> {
    CKVDatabaseSearcher *_databaseSearcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)locale;
- (void).cxx_destruct;
- (id)init;
- (id)searchIndexForTokenChain:(id)a0;
- (id)initWithDatabaseSearcher:(id)a0;
- (id)_searchFTSForToken:(id)a0 error:(id *)a1;
- (void)_mapSearchResults:(id)a0 toTokenIndex:(unsigned long long)a1 withMap:(id)a2;
- (id)_findLongestSpansMatchingResult:(id)a0 withTokenIndexes:(id)a1 ofTokenChain:(id)a2;
- (BOOL)_shouldMergeSpanWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTokenChain:(id)a1 withSearchResult:(id)a2;
- (id)_characterRangeFromTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTokenChain:(id)a1;
- (id)_preprocessTokenChain:(id)a0;

@end
