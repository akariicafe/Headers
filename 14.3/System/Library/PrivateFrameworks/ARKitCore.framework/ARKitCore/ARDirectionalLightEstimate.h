@class NSData;

@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying> {
    struct { float coefficients[9]; } _sphericalHarmonicIntensity;
    NSData *_sphericalHarmonicsCoefficients;
}

@property (nonatomic) double timestamp;
@property (nonatomic) double confidenceRating;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ primaryLightDirection;
@property (readonly, nonatomic) double primaryLightIntensity;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSphericalHarmonics:(struct { float x0[9]; })a0 ambientIntensity:(double)a1 temperature:(double)a2;
- (id)initWithDirectionalLightEstimate:(id)a0;
- (id)lightEstimateByApplyingRotation:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;

@end
