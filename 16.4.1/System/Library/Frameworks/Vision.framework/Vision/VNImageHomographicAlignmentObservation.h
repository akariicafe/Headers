@interface VNImageHomographicAlignmentObservation : VNImageAlignmentObservation

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } warpTransform;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)vn_cloneObject;

@end
