@interface NSGlyphGenerator : NSObject

+ (void)initialize;
+ (id)defaultGlyphGenerator;
+ (id)sharedGlyphGenerator;

- (void)generateGlyphsForGlyphStorage:(id)a0 desiredNumberOfCharacters:(unsigned long long)a1 glyphIndex:(unsigned long long *)a2 characterIndex:(unsigned long long *)a3;

@end
