@class VNDetectionprint;

@interface VNDetectionprintObservation : VNObservation

@property (readonly, copy) VNDetectionprint *detectionprint;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:(id)a0 detectionprint:(id)a1;

@end
