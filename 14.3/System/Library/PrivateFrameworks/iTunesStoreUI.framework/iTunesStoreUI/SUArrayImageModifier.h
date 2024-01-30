@class NSArray;

@interface SUArrayImageModifier : SUImageModifier

@property (retain, nonatomic) NSArray *modifiers;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)drawBeforeImageForContext:(struct CGContext { } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;
- (void)drawAfterImageForContext:(struct CGContext { } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)scalesImage;
- (struct CGSize { double x0; double x1; })finalSizeForSize:(struct CGSize { double x0; double x1; })a0 originalSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForImage:(id)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;

@end
