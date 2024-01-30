@class CAMetalLayer;
@protocol MTLCommandQueue, MTLDevice, MTLRenderPipelineState;

@interface CAMLiquidShutterRenderer : NSObject

@property (readonly, nonatomic) id<MTLDevice> _device;
@property (readonly, nonatomic) id<MTLCommandQueue> _commandQueue;
@property (readonly, nonatomic) id<MTLRenderPipelineState> _renderPipelineState;
@property (nonatomic, setter=_setBackgrounded:) BOOL _backgrounded;
@property (nonatomic) unsigned long long _neededRenderID;
@property (nonatomic) unsigned long long _lastRenderedID;
@property (nonatomic) struct { struct CGPoint { double x; double y; } position; double size; struct { double r; double g; double b; double a; } color; double power; } centerShape;
@property (nonatomic) struct { struct CGPoint { double x; double y; } position; double size; struct { double r; double g; double b; double a; } color; double power; } dragHandleShape;
@property (nonatomic) BOOL showDragHandle;
@property (nonatomic) double blurRadius;
@property (nonatomic) double shadowSize;
@property (nonatomic) struct { double r; double g; double b; double a; } shadowColor;
@property (weak, nonatomic) CAMetalLayer *metalLayer;

- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)dealloc;
- (void).cxx_destruct;
- (void)markNeedsRender;
- (struct { float x0; float x1; float x2; })_fragmentForShape:(struct { struct CGPoint { double x0; double x1; } x0; double x1; struct { double x0; double x1; double x2; double x3; } x2; double x3; })a0 scale:(double)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })_orthographicMatrixWithLeft:(float)a0 right:(float)a1 bottom:(float)a2 top:(float)a3 near:(float)a4 far:(float)a5;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 pixelFormat:(unsigned long long)a2;
- (void)renderIfNecessary;

@end
