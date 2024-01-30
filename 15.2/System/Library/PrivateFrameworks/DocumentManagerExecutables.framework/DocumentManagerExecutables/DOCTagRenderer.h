@interface DOCTagRenderer : NSObject

@property (class, readonly) DOCTagRenderer *shared;

@property (readonly, nonatomic) BOOL differentiateWithShapes;

+ (id)navigationTitleViewForTags:(id)a0 title:(id)a1 layoutDirection:(long long)a2;

- (struct CGSize { double x0; double x1; })sizeOfTagContentForRenderingRequest:(id)a0;
- (void)_renderInContext:(struct CGContext { } *)a0 request:(id)a1;
- (double)_customRenderingBaselineOffsetFromBottomForRequest:(id)a0;
- (double)_tagChainSpacingForSpacingType:(unsigned long long)a0 tagDimension:(double)a1;
- (void)__drawInContext:(struct CGContext { } *)a0 tag:(id)a1 contextSize:(struct CGSize { double x0; double x1; })a2 tagRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 blendMode:(int)a4 fillColor:(id)a5 strokeColor:(id)a6 traitCollection:(id)a7;
- (double)_defaultBorderWidth;
- (id)renderImageWithRequest:(id)a0;
- (id)_spacerImageWithWidth:(double)a0;
- (void)_insertPrefixTextAttachment:(id)a0 spacerAttributedString:(id)a1 ensuringLayoutDirection:(long long)a2 into:(id)a3;
- (void)renderInUncacheableContext:(struct CGContext { } *)a0 request:(id)a1;
- (id)renderAttributedStringWithRequest:(id)a0;

@end
