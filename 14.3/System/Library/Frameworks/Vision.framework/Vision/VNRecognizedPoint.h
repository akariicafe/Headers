@class NSString;

@interface VNRecognizedPoint : VNDetectedPoint

@property (readonly, copy) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 confidence:(float)a1 identifier:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
