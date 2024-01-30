@class PKMetalRendererController;

@interface PKImageRenderer : NSObject

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (nonatomic) long long cancelCount;
@property (nonatomic) BOOL synchronous;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;
@property (nonatomic) BOOL invertColors;
@property (readonly, nonatomic) BOOL sixChannelBlending;

+ (void)_fuzzTestUnzippedData:(id)a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (void)cancel;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2 sixChannelBlending:(BOOL)a3;
- (void)sixChannelCGRenderDrawing:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)renderDrawing:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)renderDrawing:(id)a0 completion:(id /* block */)a1;
- (id)initSyncWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)renderStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)sixChannelCGRenderStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (void)renderCGStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2;
- (void)setupWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderQueue:(id)a2 sixChannelBlending:(BOOL)a3 synchronous:(BOOL)a4;
- (void)_renderCGStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2 completion:(id /* block */)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 useMetal:(BOOL)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 useMetal:(BOOL)a2 renderQueue:(id)a3;
- (void)buildStrokeRenderCacheForDrawing:(id)a0;

@end
