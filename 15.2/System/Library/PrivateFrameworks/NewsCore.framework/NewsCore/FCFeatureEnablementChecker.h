@interface FCFeatureEnablementChecker : NSObject

+ (unsigned long long)currentSeedTestBit;
+ (BOOL)enabledForCurrentLevel:(unsigned long long)a0;

@end
