@interface CKSpotlightQueryUtilities : NSObject

+ (id)queryStringForSearchString:(id)a0 attributes:(id)a1 matchType:(unsigned long long)a2;
+ (id)detailsSearchControllers;
+ (id)annotatedResultStringWithSearchText:(id)a0 resultText:(id)a1 primaryTextColor:(id)a2 primaryFont:(id)a3 annotatedTextColor:(id)a4 annotatedFont:(id)a5;
+ (id)stringByEscapingSearchString:(id)a0;
+ (id)rankingQueryForField:(id)a0 matchType:(unsigned long long)a1 searchString:(id)a2;
+ (unsigned long long)countOfNonSpaceCharsInSearchString:(id)a0;
+ (id)queryStringByOringSubqueries:(id)a0;
+ (id)rankingQueriesForSearchString:(id)a0 attributes:(id)a1;
+ (id)matchedRankingQueriesForResult:(id)a0 withRankingQueryCount:(unsigned long long)a1 maxRankingQuery:(unsigned long long *)a2;
+ (id)defaultSearchControllers;

- (BOOL)__im_ff_isInterstellarEnabled;

@end
