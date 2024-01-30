@interface VSUtilities : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)hasANE;
+ (id)hardwarePlatform;
+ (BOOL)hasAMX;
+ (BOOL)isHomePod;
+ (BOOL)isNeuralTTSPlatform;
+ (id)legacyPlatforms;
+ (BOOL)isSeedBuild;
+ (BOOL)isWatch;

@end
