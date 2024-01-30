@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {
    double opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(double)a0 opacity:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isOpacityStop;
- (double)opacityLocation;
- (double)opacity;
- (id)initWithLocation:(double)a0 opacity:(double)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
