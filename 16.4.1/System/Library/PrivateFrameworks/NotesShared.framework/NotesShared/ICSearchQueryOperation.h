@class NSArray, NSMutableDictionary, ICTopHitSearchQuery, NSString, ICSearchQuery, NSMutableArray, NSError;

@interface ICSearchQueryOperation : NSOperation

@property (retain, nonatomic) ICSearchQuery *defaultQuery;
@property (retain, nonatomic) ICSearchQuery *fuzzyQuery;
@property (retain, nonatomic) ICSearchQuery *substringQuery;
@property (retain, nonatomic) ICSearchQuery *nlQuery;
@property (retain, nonatomic) ICSearchQuery *spellingQuery;
@property (retain, nonatomic) ICTopHitSearchQuery *topHitQuery;
@property (retain, nonatomic) NSMutableArray *relatedWordQueries;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSMutableDictionary *resultsDictionary;
@property (retain, nonatomic) NSMutableDictionary *uniqueIdentifiersOfAttachmentsFoundInNotes;
@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *suggestionsQueryString;
@property (copy, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) BOOL performTopHitSearch;
@property (nonatomic) BOOL performNLSearch;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL allowEmptySearchString;
@property (nonatomic) BOOL modernResultsOnly;
@property (nonatomic) unsigned long long rankingStrategy;
@property (copy, nonatomic) id /* block */ foundItemsHandler;
@property (nonatomic) long long requestIndex;
@property (readonly, nonatomic) NSArray *searchSuggestions;

+ (void)initialize;
+ (id)newOperationQueueWithName:(id)a0;
+ (id)exactMatchingQueryStringForTitleSearchString:(id)a0;
+ (id)fuzzyMatchingQueryStringForSearchString:(id)a0;
+ (id)highlightStringForAttributedInputs:(id)a0;
+ (void)nlSearchQueryWithSearchString:(id)a0 queryString:(id *)a1 rankingQueries:(id *)a2 highlightString:(id *)a3;
+ (void *)nlpParser;
+ (id)nlpSerialQueue;
+ (id)prefixMatchingQueryStringForSearchString:(id)a0;
+ (id)searchableItemsFromSortableItems:(id)a0;
+ (id)substringMatchingQueryStringForSearchString:(id)a0;

- (void)main;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0 rankingQueries:(id)a1;
- (id)initWithSearchString:(id)a0 performNLSearch:(BOOL)a1 performTopHitSearch:(BOOL)a2 suggestions:(id)a3 suggestionsQueryString:(id)a4 modernResultsOnly:(BOOL)a5;
- (void)appendSortableSearchableItemsToResults:(id)a0;
- (unsigned long long)countOfNonSpaceCharsInSearchString;
- (id)initWithQueryString:(id)a0 rankingQueries:(id)a1 attributes:(id)a2;
- (id)initWithQueryString:(id)a0 rankingQueries:(id)a1 performTopHitSearch:(BOOL)a2 modernResultsOnly:(BOOL)a3;
- (id)initWithQueryString:(id)a0 rankingQueries:(id)a1 performTopHitSearch:(BOOL)a2 modernResultsOnly:(BOOL)a3 attributes:(id)a4;
- (id)jointQueryWithSuggestions:(id)a0;
- (void)performPrefixAndFuzzyAndSubstringQueries;
- (void)performRelatedWordQueriesIfNeeded;
- (void)performSpellCheckerAPIQueryIfNeeded;
- (void)performTopHitSearchQuery;
- (id)retrieveNotesOfFoundAttachmentsForSearchResults:(id)a0;
- (id)runICSearchQuery:(id)a0;

@end
