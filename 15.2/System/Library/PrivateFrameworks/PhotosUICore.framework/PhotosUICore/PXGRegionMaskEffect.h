@class PXGShader, PXRegion, PXGUniform;

@interface PXGRegionMaskEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_valuesUniform;
}

@property (retain, nonatomic) PXRegion *region;
@property (nonatomic) double alpha;

- (void)_updateValues;
- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;
- (id)shader;

@end
