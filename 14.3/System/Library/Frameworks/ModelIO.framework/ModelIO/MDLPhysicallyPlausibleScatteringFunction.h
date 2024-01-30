@class MDLMaterialProperty;

@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction {
    struct PhysicallyPlausibleDistribution { void /* function */ **x0; struct BSDFMaterialValues { struct CGColor *x0; float x1; struct CGColor *x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x1; } *_physicalBSDF;
}

@property (readonly, nonatomic) long long version;
@property (readonly, retain, nonatomic) MDLMaterialProperty *subsurface;
@property (readonly, retain, nonatomic) MDLMaterialProperty *metallic;
@property (readonly, retain, nonatomic) MDLMaterialProperty *specularAmount;
@property (readonly, retain, nonatomic) MDLMaterialProperty *specularTint;
@property (readonly, retain, nonatomic) MDLMaterialProperty *roughness;
@property (readonly, retain, nonatomic) MDLMaterialProperty *anisotropic;
@property (readonly, retain, nonatomic) MDLMaterialProperty *anisotropicRotation;
@property (readonly, retain, nonatomic) MDLMaterialProperty *sheen;
@property (readonly, retain, nonatomic) MDLMaterialProperty *sheenTint;
@property (readonly, retain, nonatomic) MDLMaterialProperty *clearcoat;
@property (readonly, retain, nonatomic) MDLMaterialProperty *clearcoatGloss;

- (id)init;
- (void).cxx_destruct;

@end
