@interface GKShuffledDistribution : GKRandomDistribution {
    long long _delta;
    float _uniformDistance;
    long long _lastInt;
    long long _nextIntsCapacity;
    long long _nextIntsCount;
    long long *_nextInts;
}

- (void)dealloc;
- (long long)nextInt;
- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2;
- (float)uniformDistance;
- (void)setUniformDistance:(float)a0;
- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2 delta:(long long)a3;

@end
