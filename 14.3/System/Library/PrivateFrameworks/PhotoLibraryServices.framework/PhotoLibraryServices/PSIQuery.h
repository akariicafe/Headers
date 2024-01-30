@class NSString, NSArray, PSIParse, NSSet, NSDictionary, NSMutableDictionary, NSMutableSet, PSITokenizer;
@protocol PSIQueryDelegate;

@interface PSIQuery : NSObject {
    id<PSIQueryDelegate> _delegate;
    PSIParse *_baseParse;
    BOOL _baseParseCouldHaveResults;
    NSArray *_implicitelyTokenizedParses;
    BOOL _implicitlyTokenizedParsesCouldHaveResults;
    NSArray *_datedParses;
    NSArray *_implicitlyTokenizedDatedParses;
    NSArray *_wordEmbeddingParses;
    NSArray *_identifierTokens;
    NSMutableDictionary *_groupIdsByTokenKey;
    NSDictionary *_substitutionsByStringToken;
    NSArray *_socialGroupPersonIdentifiers;
    _Atomic BOOL _didStart;
    _Atomic BOOL _isCanceled;
}

@property (nonatomic) unsigned long long mergeFilterTokenAssetIDsIntervalID;
@property (readonly, nonatomic) BOOL useWildcardText;
@property (retain, nonatomic) NSDictionary *substitutions;
@property (retain, nonatomic) NSArray *nextKeywordSuggestions;
@property (copy, nonatomic) NSSet *sceneIdentifiers;
@property (copy, nonatomic) NSArray *dedupedGroupResults;
@property (copy, nonatomic) NSMutableSet *socialGroupExtendedAssetIds;
@property (copy, nonatomic) NSMutableSet *socialGroupExtendedCollectionIds;
@property (readonly, nonatomic) PSITokenizer *tokenizer;
@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, copy, nonatomic) NSString *searchText;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (nonatomic) unsigned long long wordEmbeddingMode;
@property (nonatomic) BOOL usesPrefixBasedWordEmbedding;
@property (nonatomic) unsigned long long numberOfNextKeywordSuggestionToProcess;
@property (nonatomic) BOOL calculateTokenCounts;
@property (nonatomic) BOOL enableImplicitTokenization;
@property (nonatomic) BOOL implicitTokenizationUsePrefixMatch;
@property (nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch;
@property (nonatomic) BOOL preventUnnecessaryImplicitTokenization;
@property (nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters;
@property (nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings;
@property (readonly, nonatomic) BOOL implicitTokenizationIncludeBaseParseResults;

+ (id)parsedDatesFromText:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })searchTextExtendedRangeForParse:(id)a0;
+ (BOOL)enumerateDatedParsesWithParse:(id)a0 currentTokenIndex:(unsigned long long)a1 potentialComboAttributes:(id)a2 usingBlock:(id /* block */)a3;
+ (BOOL)tokenIsEligibleForDateParsing:(id)a0;
+ (id)dateAttributesFromToken:(id)a0;
+ (id)datedParsesWithParses:(id)a0;
+ (id)dateFilterWithAttributes:(id)a0 andAttributes:(id)a1;
+ (id)dateFilterByCombiningDateFilter:(id)a0 withDateFilter:(id)a1;
+ (id)dateFilterWithAttributes:(id)a0;
+ (void)_restoreAssetIdsForGroupsInGroupArrays:(id)a0 atRemovalIndexes:(id)a1 groupIdToOriginalAssetIdsMap:(id)a2 searchTokens:(id)a3;
+ (id)_indexesToRemoveForDuplicatedFilterGroupsinGroupArrays:(id)a0 searchTokens:(id)a1;
+ (void)_aggregateAssetIdsOnFilterGroupsInGroupArrays:(id)a0 searchTokens:(id)a1 groupIdToOriginalAssetIdsMap:(id *)a2;
+ (id)_indexesOfFilterTokensInSearchTokens:(id)a0;
+ (BOOL)_shouldApplyFilterTokensForGroupArrays:(id)a0 searchTokens:(id)a1 filterGroupIds:(id)a2;
+ (void)bootstrap;

- (void)cancel;
- (void).cxx_destruct;
- (id)suggestionWhitelistedScenes;
- (BOOL)_enumerateImplicitlyTokenizedParsesWithBaseParse:(id)a0 usingBlock:(id /* block */)a1;
- (id)implicitlyTokenizedParsesWithBaseParse:(id)a0;
- (id)description;
- (void)processDates;
- (void)runWithResultsHandler:(id /* block */)a0;
- (id)processParse:(id)a0;
- (id)initWithQueryTokens:(id)a0 searchText:(id)a1 useWildcardText:(BOOL)a2 delegate:(id)a3;
- (struct __CFSet { } *)_idsOfGroupsMatchingString:(id)a0 categories:(id)a1 textIsSearchable:(BOOL)a2 isFilterTypeToken:(BOOL)a3;
- (void)computeSuggestions;
- (struct __CFSet { } *)_idsOfGroupsMatchingToken:(id)a0;
- (void)processImplicitTokenization;
- (void)processWordEmbeddings;
- (BOOL)recursiveAddToGroupResults:(id)a0 aggregate:(id)a1 atIndex:(unsigned long long)a2 outOf:(unsigned long long)a3 inGroupArrays:(id)a4 dateFilter:(id)a5 datedTokens:(id)a6;
- (void)enumerateParsesWithMode:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessPersonGroupsInGroupArrays:(id)a0;
- (void)bootstrap;

@end
