@class VNAnimalprint;

@interface VNAnimalObservation : VNRecognizedObjectObservation <VNEntityIdentificationModelObservation> {
    VNAnimalprint *_animalprint;
}

@property (readonly, nonatomic) VNAnimalprint *animalprint;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithAnimalprint:(id)a0 confidence:(float)a1;
- (void)setAnimalprint:(id)a0;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)a0 error:(id *)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 labels:(id)a3 animalprint:(id)a4;
- (id)vn_cloneObject;

@end
