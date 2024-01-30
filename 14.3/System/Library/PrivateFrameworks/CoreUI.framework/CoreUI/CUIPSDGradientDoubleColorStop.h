@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding> {
    struct _psdGradientColor { double red; double green; double blue; double alpha; } leadOutColor;
}

+ (void)initialize;
+ (id)doubleColorStopWithLocation:(double)a0 leadInColor:(struct _psdGradientColor { double x0; double x1; double x2; double x3; })a1 leadOutColor:(struct _psdGradientColor { double x0; double x1; double x2; double x3; })a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _psdGradientColor { double x0; double x1; double x2; double x3; })leadOutColor;
- (id)initWithCoder:(id)a0;
- (BOOL)isDoubleStop;
- (id)initWithLocation:(double)a0 leadInColor:(struct _psdGradientColor { double x0; double x1; double x2; double x3; })a1 leadOutColor:(struct _psdGradientColor { double x0; double x1; double x2; double x3; })a2;
- (struct _psdGradientColor { double x0; double x1; double x2; double x3; })leadInColor;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
