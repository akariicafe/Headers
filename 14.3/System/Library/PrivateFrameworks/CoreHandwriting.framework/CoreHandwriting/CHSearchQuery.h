@class NSArray, NSString;

@interface CHSearchQuery : CHQuery

@property (copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems;
@property (copy, nonatomic) NSString *queryString;

- (void)dealloc;
- (void)stop;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;
- (id)q_foundItemsForSearchString:(id)a0 sessionResult:(id)a1;
- (void)_enumerateMatchesForStrokeGroupResult:(id)a0 locales:(id)a1 queryString:(id)a2 usingBlock:(id /* block */)a3;
- (BOOL)_findMatchingTokenPathInResult:(id)a0 initialTokenLocation:(struct { long long x0; long long x1; long long x2; })a1 queryString:(id)a2 fromIndex:(long long)a3 coveredStrokeIndexes:(id)a4 reverseMatchedTokens:(id *)a5;
- (BOOL)_isMatchSeparatorBeforeToken:(id)a0 atLocation:(struct { long long x0; long long x1; long long x2; })a1 inResult:(id)a2 queryString:(id)a3 fromIndex:(long long)a4 matchedLength:(long long *)a5;
- (BOOL)_isMatchStringForToken:(id)a0 queryString:(id)a1 fromIndex:(long long)a2 requirePrefixMatch:(BOOL)a3 matchedLength:(long long *)a4;

@end
