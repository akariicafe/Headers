@class NUScene, NUResources, NURenderer;

@interface NUMetalQuad : CLKUIQuad {
    double _baseTime;
    NURenderer *_renderer;
    NUResources *_resources;
    struct CGSize { double width; double height; } _viewport;
    unsigned char _isPrepared : 1;
}

@property (retain, nonatomic) NUScene *scene;

- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (void)setupForQuadView:(id)a0;
- (void)renderForDisplayWithEncoder:(id)a0;
- (BOOL)prepareForTime:(double)a0;

@end
