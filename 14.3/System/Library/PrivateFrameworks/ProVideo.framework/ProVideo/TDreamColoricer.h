@interface TDreamColoricer : TDreamProgramWrapper {
    int firstColorUniform;
    int secondColorUniform;
}

@property (nonatomic) struct TDColor3 { float one; float two; float three; } firstColor;
@property (nonatomic) struct TDColor3 { float one; float two; float three; } secondColor;

- (id)init;
- (void)setUniforms;

@end
