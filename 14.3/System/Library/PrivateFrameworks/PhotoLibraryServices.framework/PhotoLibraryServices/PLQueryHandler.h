@interface PLQueryHandler : NSObject

+ (id)_predicateForTextQuery:(id)a0 inLibrary:(id)a1;
+ (BOOL)_findAndReplaceLatitudeLongitudeKeyInQuery:(id)a0;
+ (id)_equalityPredicateForDoubleQuery:(id)a0 withValue:(double)a1 comparator:(int)a2 inLibrary:(id)a3;
+ (id)_predicateForQuery:(id)a0 inLibrary:(id)a1 changeDetectionCriteria:(id)a2;
+ (BOOL)_needToNegateQueryForComparator:(int)a0;
+ (id)constructQueryFromData:(id)a0;
+ (id)_smartAlbumAssetTypeFilter;
+ (id)_predicateForRangeQuery:(id)a0 inLibrary:(id)a1 changeDetectionCriteria:(id)a2;
+ (id)_getTargetDateWithUnit:(int)a0 dateValue:(id)a1;
+ (BOOL)includeHiddenAssets:(id)a0;
+ (id)dataFromQuery:(id)a0;
+ (BOOL)hasMatchingFetchingAlbumForSingleQuery:(id)a0 outKind:(int *)a1;
+ (id)queryFromInfo:(id)a0;
+ (id)_predicateFromAlbumKind:(int)a0 negate:(BOOL)a1;
+ (id)_expressionForStringValue:(id)a0 inLibrary:(id)a1;
+ (id)_predicateForNotAbleToUploadQuery;
+ (id)_getTargetDateForTheLastDays:(long long)a0 weeks:(long long)a1 months:(long long)a2 years:(long long)a3 seconds:(long long)a4 targetDate:(id)a5;
+ (unsigned long long)_comparatorToOperatorType:(int)a0;
+ (BOOL)_isTextComparator:(int)a0;
+ (id)infoFromQuery:(id)a0;
+ (id)_predicateForDoubleQuery:(id)a0 inLibrary:(id)a1;
+ (id)_predicateFromSearchIndexForText:(id)a0 comparator:(int)a1 inLibrary:(id)a2;
+ (id)_predicateForSingleQuery:(id)a0 inLibrary:(id)a1 changeDetectionCriteria:(id)a2;
+ (id)_predicateForPersonQuery:(id)a0 inLibrary:(id)a1 changeDetectionCriteria:(id)a2;
+ (id)_predicateForTaggedWithGPSQuery:(id)a0 inLibrary:(id)a1;
+ (id)_personMatchesPredicateForCriteria:(id)a0;
+ (BOOL)_needEqualityForDoubleQuery:(int)a0;
+ (id)_getConvertedQueryKey:(id)a0;
+ (id)_getConvertedKeys:(id)a0;
+ (id)_personNameQueryKeyPaths;
+ (BOOL)_containsKey:(int)a0 inQuery:(id)a1;
+ (id)_predicateForEmptyQuery:(id)a0 inLibrary:(id)a1;
+ (id)predicateForQuery:(id)a0 inLibrary:(id)a1 changeDetectionCriteria:(id)a2;
+ (id)_convertQueryValueForAssetType:(int)a0;
+ (id)_predicateForLoopingQuery:(id)a0 inLibrary:(id)a1;
+ (id)_predicateForIsReferencedQuery:(id)a0 inLibrary:(id)a1;
+ (id)_infoFromSingleQuery:(id)a0;
+ (id)_convertQueryKeyTypeToString:(int)a0;
+ (BOOL)fixUserQueryDataInQuery:(id)a0;
+ (int)_convertComparatorToNumericComparator:(int)a0;

@end
