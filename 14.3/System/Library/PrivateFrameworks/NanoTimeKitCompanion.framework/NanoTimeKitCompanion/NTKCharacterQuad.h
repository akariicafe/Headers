@class NTKCharacterRenderer, CLKDevice;

@interface NTKCharacterQuad : CLKUIQuad {
    CLKDevice *_clkDevice;
}

@property (retain, nonatomic) NTKCharacterRenderer *renderer;

- (void)purge;
- (void).cxx_destruct;
- (void)dealloc;
- (id)clkDevice;
- (void)setupForQuadView:(id)a0;
- (void)renderForDisplayWithEncoder:(id)a0;
- (BOOL)prepareForTime:(double)a0;
- (id)initWithCLKDevice:(id)a0;

@end
