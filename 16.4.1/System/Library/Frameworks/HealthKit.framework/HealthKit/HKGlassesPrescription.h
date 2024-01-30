@class HKGlassesLensSpecification;

@interface HKGlassesPrescription : HKVisionPrescription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKGlassesLensSpecification *rightEye;
@property (readonly, copy, nonatomic) HKGlassesLensSpecification *leftEye;

+ (BOOL)_validatePrism:(id)a0 error:(id *)a1;
+ (id)prescriptionWithRightEyeSpecification:(id)a0 leftEyeSpecification:(id)a1 dateIssued:(id)a2 expirationDate:(id)a3 device:(id)a4 metadata:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (void)_setLeftEyeSpecification:(id)a0;
- (void)_setRightEyeSpecification:(id)a0;
- (BOOL)_validateGlassesFieldsWithError:(id *)a0;
- (id)leftAddPower;
- (id)leftAxis;
- (id)leftCylinder;
- (id)leftSphere;
- (id)rightAddPower;
- (id)rightAxis;
- (id)rightCylinder;
- (id)rightSphere;

@end
