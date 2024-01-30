@interface RandomNumberGenerator : NSObject

@property (nonatomic) unsigned long long index;
@property unsigned long long seed;

+ (id)randomNumberGeneratorWithSeed:(unsigned long long)a0;

- (double)randomNumberBetweenZeroAndOne;
- (double)randomNumberWithinRangeStart:(double)a0 rangeEnd:(double)a1;

@end
