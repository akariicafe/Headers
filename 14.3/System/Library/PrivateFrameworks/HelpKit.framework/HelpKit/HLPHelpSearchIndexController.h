@class CSSearchQuery, NSArray, HLPHelpBookController, CSPrivateSearchableIndex, NSDictionary, NSMutableArray;

@interface HLPHelpSearchIndexController : HLPRemoteDataController {
    CSSearchQuery *_spotlightSearchQuery;
}

@property (retain, nonatomic) CSPrivateSearchableIndex *privateSearchableIndex;
@property (retain, nonatomic) NSMutableArray *spotlightSearchScores;
@property (nonatomic) BOOL useCSSearch;
@property (retain, nonatomic) HLPHelpBookController *helpBookController;
@property (retain, nonatomic) NSDictionary *searchIndex;
@property (readonly, nonatomic) NSArray *spotlightSearchResults;

+ (id)_stopwordsForLanguage:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchDataWithDataType:(long long)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)resultsWithSearchText:(id)a0 localeCode:(id)a1 searchTerms:(id *)a2;
- (void)cancelSpotlightSearch;
- (id)spotlightSearchResults;
- (void)CSSearchForSearchText:(id)a0 completionHandler:(id /* block */)a1;
- (void)processFileURLWithCompletionHandler:(id /* block */)a0;
- (void)processData:(id)a0 formattedData:(id)a1;
- (id)searchTermsForSearchText:(id)a0 localeCode:(id)a1;
- (id)searchTree:(id)a0 forQueryWord:(id)a1 withMaxDepth:(int)a2;
- (id)mergeDictionary:(id)a0 withDictionary:(id)a1;
- (id)getAllIdentifiersFromTree:(id)a0 withMaxDepth:(int)a1;
- (id)_tokenizeSearchTerm:(id)a0;
- (id)_strippedSearchTermFromSearchTerm:(id)a0;
- (double)_relevanceScore:(double)a0 forRankingQueries:(id)a1;
- (id)_csQueryStringForSearchTerm:(id)a0;
- (id)_rankingQueriesForSearchTerm:(id)a0;
- (id)_fetchAttributesForCSSearchQuery;
- (void)_hpdResultsFromCSSearchableItems:(id)a0 rankingQueries:(id)a1;

@end
