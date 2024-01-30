@interface SFSpeechSynthesisUtils : NSObject

+ (long long)footprintFromString:(id)a0;
+ (id)footprintStringFromFootprint:(long long)a0;
+ (long long)genderFromString:(id)a0;
+ (id)genderStringFromGender:(long long)a0;
+ (BOOL)isInternalBuild;
+ (long long)typeFromString:(id)a0;
+ (id)typeStringFromType:(long long)a0;
+ (double)absoluteTimeToSecond:(unsigned long long)a0;

@end
