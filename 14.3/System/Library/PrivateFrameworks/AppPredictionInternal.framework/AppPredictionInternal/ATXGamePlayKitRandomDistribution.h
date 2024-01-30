@protocol ATXGamePlayKitRandom;

@interface ATXGamePlayKitRandomDistribution : NSObject <ATXGamePlayKitRandom> {
    id<ATXGamePlayKitRandom> _source;
}

@property (readonly, nonatomic) long long lowestValue;
@property (readonly, nonatomic) long long highestValue;
@property (readonly, nonatomic) unsigned long long numberOfPossibleOutcomes;

+ (id)d6;
+ (id)d20;
+ (id)distributionWithLowestValue:(long long)a0 highestValue:(long long)a1;
+ (id)distributionForDieWithSideCount:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)nextInt;
- (float)nextUniform;
- (BOOL)nextBool;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2;

@end
