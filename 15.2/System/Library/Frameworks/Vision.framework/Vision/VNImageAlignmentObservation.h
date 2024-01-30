@class VNImageRegistrationSignature;

@interface VNImageAlignmentObservation : VNObservation

@property (retain, nonatomic) VNImageRegistrationSignature *referenceImageSignature;
@property (retain, nonatomic) VNImageRegistrationSignature *floatingImageSignature;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } alignmentTransform;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;

@end
