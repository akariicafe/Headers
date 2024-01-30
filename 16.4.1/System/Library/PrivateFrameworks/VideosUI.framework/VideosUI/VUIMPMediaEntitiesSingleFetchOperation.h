@class NSError, MPMediaPredicate, NSArray, VUIMediaEntityFetchResponse, VUIMPMediaLibrary, VUIMediaEntityFetchRequest, VUIMediaEntityKind, NSMutableSet, NSDictionary, VUIMediaEntityType;

@interface VUIMPMediaEntitiesSingleFetchOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIMediaEntityFetchRequest *request;
@property (copy, nonatomic) VUIMediaEntityFetchResponse *response;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaEntityKind *mediaEntityKind;
@property (retain, nonatomic) NSMutableSet *prefetchProperties;
@property (retain, nonatomic) MPMediaPredicate *mediaQueryPredicate;
@property (retain, nonatomic) NSArray *mediaQuerySortOrderingProperties;
@property (retain, nonatomic) NSDictionary *mediaQuerySortOrderingDirectionMappings;
@property (retain, nonatomic) NSArray *postFetchSortDescriptors;
@property (nonatomic) BOOL processPredicateAfterFetch;
@property (nonatomic) BOOL processRangeAfterFetch;
@property (retain, nonatomic) VUIMediaEntityType *currentFetchMediaEntityType;

+ (id)_sortIndexesWithMediaQuerySection:(id)a0;

- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;
- (id)_mediaQuery;
- (id)_baseMediaQuery;
- (void)_addEntityLimitToMediaQuery:(id)a0;
- (void)_addPredicateToMediaQuery:(id)a0;
- (void)_addPrefetchPropertiesToMediaQuery:(id)a0;
- (void)_addSortingPropertiesToMediaQuery:(id)a0;
- (id)_bitTestMediaQueryPropertyPredicateWithKeyPathBitTestExpression:(id)a0 operatorType:(unsigned long long)a1 constantExpression:(id)a2;
- (id)_coalesceResponses:(id)a0;
- (id)_collectionsFetchResponseWithMediaQuery:(id)a0;
- (id)_fetchResponseWithMediaEntities:(id)a0 mediaQuerySections:(id)a1;
- (BOOL)_isSortingBeingPerformedByMediaQuery;
- (id)_itemsFetchResponseWithMediaQuery:(id)a0;
- (id)_keyPathMediaQueryPropertyPredicateWithKeyPathExpression:(id)a0 operatorType:(unsigned long long)a1 constantExpression:(id)a2;
- (id)_mediaEntities:(id)a0 subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_mediaEntityKind;
- (id)_mediaEntityPropertyDescriptorForFilteringWithKeyPath:(id)a0;
- (id)_mediaQueryPredicateForCompoundPredicate:(id)a0;
- (id)_mediaQueryPredicateForPredicate:(id)a0;
- (id)_mediaQueryPropertyPredicateForComparisonPredicate:(id)a0;
- (void)_populatePrefetchProperties;
- (id)_processFetchedMediaEntities:(id)a0;
- (void)_processPredicate;
- (void)_processRange;
- (void)_processSortDescriptors;
- (BOOL)_shouldSortUsingMediaQuery;
- (id)initWithMediaLibrary:(id)a0 request:(id)a1;

@end
