@interface PRSRankingSpanCalculator : NSObject

@property (nonatomic) float unordered;
@property (nonatomic) float ordered;
@property (nonatomic) float firstTermPosition;
@property (nonatomic) float normCount;
@property (nonatomic) float pairDist;
@property (nonatomic) BOOL pathExists;
@property (nonatomic) BOOL n2Exists;
@property (nonatomic) BOOL n3Exists;

+ (BOOL)doesOrderedSpanExistWithArrayOfIndexArrays:(unsigned long long **)a0 arrayOfIndexArraysCounts:(unsigned long long *)a1 arrayOfIndexArraysCount:(unsigned long long)a2 orderedSpan:(long long *)a3 firstTermPosition:(unsigned long long *)a4 queryTermCount:(unsigned long long)a5;
+ (BOOL)doesOrderedSpanExistWithArrayOfIndexArrays:(unsigned long long **)a0 arrayOfIndexArraysCounts:(unsigned long long *)a1 arrayOfIndexArraysCount:(unsigned long long)a2 queryTermCount:(unsigned long long)a3 kTermCount:(unsigned long long)a4;
+ (long long)minimumAnyOrderSpanWithArrayOfIndexArrays:(unsigned long long **)a0 arrayOfIndexArraysCounts:(unsigned long long *)a1 arrayOfIndexArraysCount:(unsigned long long)a2 queryTermCount:(unsigned long long)a3;
+ (long long)minimumPairDistanceWithArrayOfIndexArrays:(unsigned long long **)a0 arrayOfIndexArraysCounts:(unsigned long long *)a1 arrayOfIndexArraysCount:(unsigned long long)a2 queryTermCount:(unsigned long long)a3 tokenCount:(unsigned long long)a4;

- (id)description;
- (void)reset;
- (void)resetSpans;
- (void)updateWithTermPositions:(id)a0 queryTermCount:(unsigned long long)a1 tokenCount:(unsigned long long)a2;

@end
