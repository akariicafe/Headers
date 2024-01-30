@class NUNIResources, NUNIRenderer, NUNIScene;

@interface NUNIMetalQuad : CLKUIQuad {
    double _baseTime;
    NUNIRenderer *_renderer;
    NUNIResources *_resources;
    struct CGSize { double width; double height; } _viewport;
    unsigned char _isPrepared : 1;
}

@property (retain, nonatomic) NUNIScene *scene;

- (id)initWithResources:(id)a0;
- (void).cxx_destruct;
- (void)setupForQuadView:(id)a0;
- (BOOL)prepareForTime:(double)a0;
- (void)renderForDisplayWithEncoder:(id)a0;
- (void)performOffscreenPassesWithCommandBuffer:(id)a0;

@end
