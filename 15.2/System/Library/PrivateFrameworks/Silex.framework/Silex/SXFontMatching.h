@interface SXFontMatching : NSObject

+ (id)matchFontFaceForAttributes:(id)a0 fromFamily:(id)a1;
+ (long long)lighterWeightForWeight:(long long)a0;
+ (long long)bolderWeightForWeight:(long long)a0;
+ (long long)bestWidthForIntendedWidth:(long long)a0 forFonts:(id)a1;
+ (long long)bestStyleForIntendedStyle:(long long)a0 forFonts:(id)a1;
+ (long long)bestWeightForIntendedWeight:(long long)a0 forFonts:(id)a1;
+ (id)fontFaceWithAttributes:(id)a0 fromFamily:(id)a1;

@end
