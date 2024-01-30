@interface PGMoodVector : NSObject <NSCopying> {
    double _vector[10];
}

- (double)sum;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)normalize;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArray:(id)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (double)valueForMood:(unsigned long long)a0;
- (void)setValue:(double)a0 forMood:(unsigned long long)a1;
- (void)addValue:(double)a0 forMood:(unsigned long long)a1;
- (void)addValue:(double)a0 forMoods:(unsigned long long)a1;
- (void)multiplyByWeight:(double)a0 forMood:(unsigned long long)a1;
- (void)addMoodVector:(id)a0;
- (void)substractMoodVector:(id)a0;
- (void)multiplyMoodVector:(id)a0;
- (void)multiplyByWeight:(double)a0;
- (void)filterWithMoods:(unsigned long long)a0;
- (unsigned long long)moodsWithThreshold:(double)a0;
- (unsigned long long)weightedRandomMoodWithSeed:(unsigned long long)a0;
- (id)moodArray;

@end
