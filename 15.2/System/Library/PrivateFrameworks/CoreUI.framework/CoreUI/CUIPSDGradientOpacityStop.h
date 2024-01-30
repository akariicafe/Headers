@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {
    double opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(double)a0 opacity:(double)a1;

- (double)opacity;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isOpacityStop;
- (double)opacityLocation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocation:(double)a0 opacity:(double)a1;

@end
