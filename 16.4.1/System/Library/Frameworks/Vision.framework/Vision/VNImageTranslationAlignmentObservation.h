@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } alignmentTransform;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })alignmentTransformInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;
- (id)vn_cloneObject;

@end
