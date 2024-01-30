@class NSString;

@interface VNPixelBufferObservation : VNObservation

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, copy, nonatomic) NSString *featureName;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:(id)a0 featureName:(id)a1 CVPixelBuffer:(struct __CVBuffer { } *)a2;

@end
