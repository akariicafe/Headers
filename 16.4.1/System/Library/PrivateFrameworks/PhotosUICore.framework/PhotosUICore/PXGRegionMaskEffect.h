@class PXGShader, PXRegion, PXGUniform;

@interface PXGRegionMaskEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_valuesUniform;
}

@property (retain, nonatomic) PXRegion *region;
@property (nonatomic) double alpha;

- (id)shader;
- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;
- (void)_updateValues;

@end
