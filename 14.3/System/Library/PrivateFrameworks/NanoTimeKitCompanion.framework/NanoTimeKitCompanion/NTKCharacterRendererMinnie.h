@class _Flower, _Skirt, NSMutableArray;

@interface NTKCharacterRendererMinnie : NTKCharacterRenderer {
    _Flower *_flower;
    _Skirt *_skirt;
    NSMutableArray *_footTexs[2];
}

- (void).cxx_destruct;
- (id)initWithLoader:(id)a0;
- (void)setupGeometry;
- (void)setupBodyState;
- (void)loadFootTextures;
- (int)getBlinkFrameFor15sTime:(float)a0;
- (void)_drawBodyWithEncoder:(id)a0;
- (void)_drawTappingFootWithEncoder:(id)a0;
- (void)_drawHeadWithEncoder:(id)a0;
- (float)_getBlinkDuration;
- (void)_drawFlowerWithEncoder:(id)a0;
- (void)_drawSkirtWithEncoder:(id)a0;

@end
