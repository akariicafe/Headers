@class UIColor, PXGShader, PXGUniform;

@interface PXGTextLegibilityEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_values;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double alpha;
@property (nonatomic) double strength;

- (id)shader;
- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;
- (void)_updateValues;

@end
