@protocol GKRandom;

@interface GKRandomDistribution : NSObject <GKRandom> {
    id<GKRandom> _source;
}

@property (readonly, nonatomic) long long lowestValue;
@property (readonly, nonatomic) long long highestValue;
@property (readonly, nonatomic) unsigned long long numberOfPossibleOutcomes;

+ (id)d20;
+ (id)d6;
+ (id)distributionForDieWithSideCount:(long long)a0;
+ (id)distributionWithLowestValue:(long long)a0 highestValue:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (BOOL)nextBool;
- (float)nextUniform;

@end
