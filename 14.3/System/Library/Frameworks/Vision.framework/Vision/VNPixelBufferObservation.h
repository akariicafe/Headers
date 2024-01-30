@class NSString;

@interface VNPixelBufferObservation : VNObservation

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, copy, nonatomic) NSString *featureName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 featureName:(id)a1 CVPixelBuffer:(struct __CVBuffer { } *)a2;
- (void)encodeWithCoder:(id)a0;

@end
