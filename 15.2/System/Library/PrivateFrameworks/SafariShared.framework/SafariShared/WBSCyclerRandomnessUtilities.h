@interface WBSCyclerRandomnessUtilities : NSObject

+ (void)initialize;
+ (id)randomString;
+ (void)setSeed:(unsigned long long)a0;
+ (void)reseed;
+ (unsigned long long)seed;
+ (id)randomElementOfArray:(id)a0;
+ (id)randomElementOfArray:(id)a0 relativeProbabilities:(id)a1;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)a0;
+ (id)randomURL;
+ (id)_randomStringWithCharactersFromString:(id)a0;

@end
