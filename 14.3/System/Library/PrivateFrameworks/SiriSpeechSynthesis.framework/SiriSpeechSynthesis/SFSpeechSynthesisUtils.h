@interface SFSpeechSynthesisUtils : NSObject

+ (BOOL)isInternalBuild;
+ (id)genderStringFromGender:(long long)a0;
+ (long long)genderFromString:(id)a0;
+ (id)footprintStringFromFootprint:(long long)a0;
+ (long long)typeFromString:(id)a0;
+ (id)typeStringFromType:(long long)a0;
+ (long long)footprintFromString:(id)a0;
+ (double)absoluteTimeToSecond:(unsigned long long)a0;

@end
