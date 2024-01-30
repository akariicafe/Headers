@interface VNImageHomographicAlignmentObservation : VNImageAlignmentObservation

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } warpTransform;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
