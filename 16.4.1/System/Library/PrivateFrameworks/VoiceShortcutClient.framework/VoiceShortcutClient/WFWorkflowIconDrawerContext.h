@class NSSet;

@interface WFWorkflowIconDrawerContext : NSObject

@property (readonly, nonatomic) struct CGFont { } *glyphFont;
@property (readonly, nonatomic) NSSet *coreGlyphsCatalogs;
@property (readonly, nonatomic) const struct __CTFont { } *glyphTestFont;

+ (id)cachedContextOrNewContext;
+ (double)glyphTestFontSize;

- (void)dealloc;
- (void).cxx_destruct;
- (const struct __CTFont { } *)newGlyphFontForSize:(double)a0;

@end
