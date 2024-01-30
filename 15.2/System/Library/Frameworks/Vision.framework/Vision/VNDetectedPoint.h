@interface VNDetectedPoint : VNPoint {
    float _confidence;
}

@property (readonly) float confidence;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 confidence:(float)a1;

@end
