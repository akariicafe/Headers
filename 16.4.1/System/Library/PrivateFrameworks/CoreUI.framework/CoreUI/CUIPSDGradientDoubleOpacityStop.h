@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {
    double leadOutOpacity;
}

+ (void)initialize;
+ (id)doubleOpacityStopWithLocation:(double)a0 leadInOpacity:(double)a1 leadOutOpacity:(double)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithLocation:(double)a0 leadInOpacity:(double)a1 leadOutOpacity:(double)a2;
- (BOOL)isDoubleStop;
- (double)leadInOpacity;
- (double)leadOutOpacity;

@end
