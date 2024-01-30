@interface TDreamZoomOutFX : TDreamProgramWrapper {
    int aspectRatioUniform;
    int radiusUniform;
    int centerUniform;
    int scaleUniform;
    int rotacionUniform;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) int rotacion;
@property (nonatomic) double radius;
@property (nonatomic) double scale;

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)adjustAspectRatio;
- (void)setUniforms;

@end
