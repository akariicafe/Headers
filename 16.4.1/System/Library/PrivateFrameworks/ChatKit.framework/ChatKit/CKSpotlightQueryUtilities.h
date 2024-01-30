@interface CKSpotlightQueryUtilities : NSObject

+ (id)annotatedResultStringWithSearchText:(id)a0 resultText:(id)a1 primaryTextColor:(id)a2 primaryFont:(id)a3 annotatedTextColor:(id)a4 annotatedFont:(id)a5;
+ (unsigned long long)countOfNonSpaceCharsInSearchString:(id)a0;
+ (id)defaultSearchControllers;
+ (id)detailsSearchControllers;
+ (id)matchedRankingQueriesForResult:(id)a0 withRankingQueryCount:(unsigned long long)a1 maxRankingQuery:(unsigned long long *)a2;
+ (id)queryStringByOringSubqueries:(id)a0;
+ (id)queryStringForSearchString:(id)a0 attributes:(id)a1 matchType:(unsigned long long)a2;
+ (id)rankingQueriesForSearchString:(id)a0 attributes:(id)a1;
+ (id)rankingQueryForField:(id)a0 matchType:(unsigned long long)a1 searchString:(id)a2;
+ (id)stringByEscapingSearchString:(id)a0;

@end
