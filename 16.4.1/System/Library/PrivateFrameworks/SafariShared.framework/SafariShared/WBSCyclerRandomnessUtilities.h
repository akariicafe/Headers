@interface WBSCyclerRandomnessUtilities : NSObject

+ (void)initialize;
+ (unsigned long long)seed;
+ (void)setSeed:(unsigned long long)a0;
+ (id)randomString;
+ (id)_randomStringWithCharactersFromString:(id)a0;
+ (id)randomElementOfArray:(id)a0;
+ (id)randomElementOfArray:(id)a0 relativeProbabilities:(id)a1;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)a0;
+ (id)randomURL;
+ (void)reseed;

@end
