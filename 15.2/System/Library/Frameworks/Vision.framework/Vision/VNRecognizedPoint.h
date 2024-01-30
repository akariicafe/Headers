@class NSString;

@interface VNRecognizedPoint : VNDetectedPoint

@property (readonly, copy) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 confidence:(float)a1 identifier:(id)a2;

@end
