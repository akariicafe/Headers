@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } alignmentTransform;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
