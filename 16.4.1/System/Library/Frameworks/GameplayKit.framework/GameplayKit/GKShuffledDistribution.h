@interface GKShuffledDistribution : GKRandomDistribution {
    long long _delta;
    float _uniformDistance;
    long long _lastInt;
    long long _nextIntsCapacity;
    long long _nextIntsCount;
    long long *_nextInts;
}

- (void)dealloc;
- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2;
- (long long)nextInt;
- (float)uniformDistance;
- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2 delta:(long long)a3;
- (void)setUniformDistance:(float)a0;

@end
