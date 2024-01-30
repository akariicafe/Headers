@class UIColor, PXGShader, PXGUniform;

@interface PXGTextLegibilityEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_values;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double alpha;

- (void)_updateValues;
- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;
- (id)shader;

@end
