@class UIColor, PXGShader, PXGUniform;

@interface PXGColorTintEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_tintColorUniform;
}

@property (retain, nonatomic) UIColor *tintColor;

- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;
- (id)shader;

@end
