@interface UIPatternCGColor : UICGColor {
    struct CGColor { } *_cachedUnflippedColor;
}

- (id)description;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (id)colorSpaceName;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (BOOL)isPatternColor;

@end
