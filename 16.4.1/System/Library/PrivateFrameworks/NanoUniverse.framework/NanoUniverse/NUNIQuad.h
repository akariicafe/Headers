@class NSObject, NUNIRenderer, NUNIScene;
@protocol OS_dispatch_semaphore;

@interface NUNIQuad : CLKUIQuad {
    double _baseTime;
    struct CGSize { double width; double height; } _viewport;
    double _screenScale;
    NSObject<OS_dispatch_semaphore> *_renderSemaphore;
}

@property (readonly, nonatomic) NUNIRenderer *renderer;
@property (retain, nonatomic) NUNIScene *scene;

- (void).cxx_destruct;
- (BOOL)prepareForTime:(double)a0;
- (void)setupForQuadView:(id)a0;
- (void)performOffscreenPassesWithCommandBuffer:(id)a0;
- (void)renderFailedForReason:(unsigned long long)a0;
- (void)renderWithCommandBuffer:(id)a0 passDescriptor:(id)a1;
- (id)initWithScreenScale:(double)a0 renderer:(id)a1;

@end
