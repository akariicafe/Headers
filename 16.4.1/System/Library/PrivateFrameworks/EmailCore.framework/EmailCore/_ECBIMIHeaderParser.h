@interface _ECBIMIHeaderParser : NSObject

+ (id)_hashFromIndicatorHashHeader:(id)a0 algorithm:(id *)a1;
+ (BOOL)_indicatorDataHasValidSVGProfile:(id)a0;
+ (id)_locationFromLocationHeader:(id)a0 evidenceLocation:(id *)a1;
+ (id)_locationFromScanner:(id)a0 evidenceLocation:(id *)a1;
+ (id)_scanToNextTagForScanner:(id)a0 allowSemicolonSeparator:(BOOL)a1 value:(id *)a2;
+ (id)_scanToNextTagForScanner:(id)a0 url:(id *)a1;
+ (BOOL)_versionIsValidWithScanner:(id)a0;

@end
