@interface CPMLNaiveBayesStorageManager : CPMLStorageManager

- (double)getCountXGivenYAndSetXCardinality:(unsigned long long)a0 withX:(unsigned long long)a1 withY:(unsigned long long)a2 withCardinalityX:(double *)a3;
- (double)getCountAndSetYCardinality:(double *)a0;
- (double)getCountY:(unsigned long long)a0;
- (void)setCardinalityXGivenY:(unsigned long long)a0 withY:(unsigned long long)a1 cardinalityValue:(double)a2;
- (void)setCountXGivenY:(unsigned long long)a0 withX:(unsigned long long)a1 withY:(unsigned long long)a2 withValue:(double)a3;
- (void)setCountY:(double)a0;
- (void)setCountY:(unsigned long long)a0 withCount:(double)a1;

@end
