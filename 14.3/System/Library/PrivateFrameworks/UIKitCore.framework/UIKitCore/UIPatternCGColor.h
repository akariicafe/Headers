@interface UIPatternCGColor : UICGColor {
    struct CGColor { } *_cachedUnflippedColor;
}

- (id)colorSpaceName;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (void)dealloc;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (BOOL)isPatternColor;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)description;

@end
