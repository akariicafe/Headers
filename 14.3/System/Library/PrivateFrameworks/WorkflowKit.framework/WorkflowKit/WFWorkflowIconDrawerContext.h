@class NSSet;

@interface WFWorkflowIconDrawerContext : NSObject

@property (readonly, nonatomic) struct CGFont { } *glyphFont;
@property (readonly, nonatomic) NSSet *coreGlyphsCatalogs;
@property (readonly, nonatomic) const struct __CTFont { } *glyphTestFont;

+ (double)glyphTestFontSize;
+ (id)cachedContextOrNewContext;

- (void).cxx_destruct;
- (void)dealloc;
- (const struct __CTFont { } *)newGlyphFontForSize:(double)a0;

@end
