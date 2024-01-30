@interface MiroRandomNumberGenerator : NSObject

@property (nonatomic) unsigned long long index;
@property unsigned long long seed;

+ (double)mapValue:(double)a0 fromRangeStart:(double)a1 fromRangeEnd:(double)a2 toRangeStart:(double)a3 toRangeEnd:(double)a4 clamp:(BOOL)a5;
+ (id)randomNumberGeneratorWithSeed:(unsigned long long)a0;

- (double)randomNumberBetweenZeroAndOne;
- (double)randomNumberWithinRangeStart:(double)a0 rangeEnd:(double)a1;

@end
