@interface TDreamVignetteAndQuantice : TDreamProgramWrapper {
    int modeUniform;
    int vignetteCenterUniform;
    int vignetteColorUniform;
    int vignetteStartUniform;
    int vignetteEndUniform;
    int numLevelsUniform;
    int recipNumLevelsUniform;
    float numLevels;
    float recipNumLevels;
}

@property (nonatomic) int mode;
@property (nonatomic) struct CGPoint { double x; double y; } vignetteCenter;
@property (nonatomic) struct TDColor3 { float one; float two; float three; } vignetteColor;
@property (nonatomic) double vignetteStart;
@property (nonatomic) double vignetteEnd;

- (id)init;
- (void)setNumLevels:(unsigned int)a0;
- (void)setUniforms;

@end
