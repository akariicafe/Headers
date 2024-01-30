@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {
    double leadOutOpacity;
}

+ (void)initialize;
+ (id)doubleOpacityStopWithLocation:(double)a0 leadInOpacity:(double)a1 leadOutOpacity:(double)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)leadOutOpacity;
- (id)initWithCoder:(id)a0;
- (BOOL)isDoubleStop;
- (id)initWithLocation:(double)a0 leadInOpacity:(double)a1 leadOutOpacity:(double)a2;
- (double)leadInOpacity;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
