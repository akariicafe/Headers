@class PXGShader, PXGUniform, PXGColorLookupCube;

@interface PXGColorGradingEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_cubeUniform;
    PXGUniform *_valuesUniform;
    PXGUniform *_grayUniform;
}

@property (retain, nonatomic) PXGColorLookupCube *colorLookupCube;
@property (nonatomic) float intensity;

- (id)shader;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;

@end
