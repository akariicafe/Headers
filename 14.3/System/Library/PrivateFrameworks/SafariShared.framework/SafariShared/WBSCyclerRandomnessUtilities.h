@interface WBSCyclerRandomnessUtilities : NSObject

+ (unsigned long long)seed;
+ (void)initialize;
+ (void)reseed;
+ (id)randomElementOfArray:(id)a0 relativeProbabilities:(id)a1;
+ (id)randomElementOfArray:(id)a0;
+ (id)randomURL;
+ (id)randomString;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)a0;
+ (id)_randomStringWithCharactersFromString:(id)a0;
+ (void)setSeed:(unsigned long long)a0;

@end
