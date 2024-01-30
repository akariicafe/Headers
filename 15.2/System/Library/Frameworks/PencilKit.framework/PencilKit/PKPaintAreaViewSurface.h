@class NSUUID, NSString, CIContext, PKPaintAreaView, PKController, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, PKPaintSurface;

@interface PKPaintAreaViewSurface : NSObject <PKControllerDelegate, PKMetalRendererControllerDelegate> {
    NSMutableArray *_textureSet;
    struct CGSize { double width; double height; } _pixelSize;
    struct CGPoint { double x; double y; } _oldEraseLocation;
    CIContext *_imageContext;
}

@property (nonatomic) BOOL isDrawing;
@property BOOL allowLiveInteraction;
@property (readonly, nonatomic) BOOL waitingForStrokeToEnd;
@property (readonly, nonatomic) BOOL isErasingObjects;
@property (readonly, nonatomic) NSMutableArray *strokesToErase;
@property (readonly, nonatomic) NSMutableSet *strokeIDsToErase;
@property (readonly, nonatomic) PKController *drawingController;
@property (weak, nonatomic) PKPaintAreaView *paintAreaView;
@property (readonly, nonatomic) id<PKPaintSurface> surface;
@property (readonly, nonatomic) struct CGSize { double width; double height; } drawingSize;
@property (readonly, nonatomic) double textureScale;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } strokeTransform;
@property (readonly, nonatomic) BOOL isMipmapped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSUUID *drawingUUID;
@property (nonatomic) struct CGPoint { double x; double y; } previousPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)vsync:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setNeedsDrawingDisplay;
- (void)drawingChanged:(id)a0;
- (void)eraserCancelled;
- (void)eraseStrokesForPoint:(struct CGPoint { double x0; double x1; })a0 prevPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_didFinishErasingStrokes:(BOOL)a0;
- (void)drawingCancelled;
- (void)metalRendererController:(id)a0 didCommitRenderingIntoTexture:(id)a1;
- (id)nextTextureTargetForMetalRendererController:(id)a0;
- (void)drawingEndedWithDetectedShape:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithPaintSurface:(id)a0 dispatchQueue:(id)a1;
- (void)drawingBegan:(id)a0 transformedLocation:(struct CGPoint { double x0; double x1; })a1 activeInputProperties:(unsigned long long)a2;
- (void)eraserMoved:(id)a0 transformedLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dispatchSyncOnSurfaceQueue:(id /* block */)a0;
- (void)_setupPKController;
- (BOOL)eraserBegan:(id)a0 transformedLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)eraserEnded;
- (id)CIImageFromTexture:(id)a0;

@end
