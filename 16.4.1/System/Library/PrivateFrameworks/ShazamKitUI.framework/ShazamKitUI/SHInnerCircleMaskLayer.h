@interface SHInnerCircleMaskLayer : SHPaletteLayer

@property (nonatomic) double innerCircleRelativeSize;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setup;

@end
