@class PKMetalRendererController, NSArray, PKDrawing, PKStrokeGenerator, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PKControllerDelegate, OS_dispatch_semaphore;

@interface PKController : NSObject {
    NSArray *_renderedStrokes;
    NSMutableArray *_mutableRenderedStrokes;
}

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (retain, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *interactSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *interactQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property BOOL liveInteraction;
@property (weak, nonatomic) NSObject<PKControllerDelegate> *delegate;
@property (readonly, nonatomic) NSArray *renderedStrokes;
@property (readonly, nonatomic) PKStrokeGenerator *inputController;
@property (nonatomic) BOOL invertColors;

+ (void)updatesFrom:(id)a0 to:(id)a1 newStrokesToRender:(id *)a2 redrawAllInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;

- (void)teardown;
- (id)init;
- (void).cxx_destruct;
- (void)_didUpdateMutableRenderedStrokes;
- (void)cancelLongRunningRenders;
- (void)_renderImage:(struct CGImage { } *)a0 andMask:(struct CGImage { } *)a1;
- (void)_setDrawing:(id)a0 initialDrawing:(id)a1 withImage:(struct CGImage { } *)a2 andMask:(struct CGImage { } *)a3 setupComplete:(id /* block */)a4 completion:(id /* block */)a5;
- (BOOL)_loadInitialDrawing:(id)a0 withImage:(struct CGImage { } *)a1 andMask:(struct CGImage { } *)a2;
- (BOOL)_updateFrom:(id)a0 completion:(id /* block */)a1;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)_drawingChanged;
- (void)_renderStrokes:(id)a0 renderIntermediateSteps:(BOOL)a1 completion:(id /* block */)a2;
- (void)performAsyncInteractBlock:(id /* block */)a0;
- (void)_updateDrawing:(id)a0 erasedStrokes:(id)a1 completion:(id /* block */)a2;
- (void)applyCommands:(id)a0 completionBlock:(id /* block */)a1;
- (void)_applyCommands:(id)a0 interactCompletion:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_didRenderStrokes:(id)a0;
- (void)removeStrokesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 from:(id)a1;
- (void)_renderAllStrokes:(id)a0 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)_addNewStrokes:(id)a0 hidden:(BOOL)a1 preDrawingChangedBlock:(id /* block */)a2;
- (void)addNewStrokes:(id)a0 hidden:(BOOL)a1 preDrawingChangedBlock:(id /* block */)a2;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0 actualSize:(struct CGSize { double x0; double x1; })a1 renderQueue:(id)a2 usePrivateResourceHandler:(BOOL)a3 singleComponent:(BOOL)a4;
- (id)renderedStrokes;
- (void)didStartLiveInteraction;
- (void)didEndLiveInteraction;
- (void)setDrawing:(id)a0 tiles:(id)a1 tileTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 setupComplete:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)setDrawing:(id)a0 initialDrawing:(id)a1 withImage:(struct CGImage { } *)a2 andMask:(struct CGImage { } *)a3 setupComplete:(id /* block */)a4 completion:(id /* block */)a5;
- (void)updateDrawing;
- (void)hideStrokesWithoutUpdating:(id)a0 completion:(id /* block */)a1;
- (void)updateDrawingWithErasedStrokes:(id)a0;
- (void)updateDrawingFrom:(id)a0;
- (void)applyCommand:(id)a0 completionBlock:(id /* block */)a1;
- (void)renderImage:(struct CGImage { } *)a0 andMask:(struct CGImage { } *)a1 forRenderedStrokes:(id)a2 thenRenderStrokes:(id)a3 inStrokeSpaceClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 completion:(id /* block */)a5;
- (void)renderImage:(struct CGImage { } *)a0 andMask:(struct CGImage { } *)a1 forRenderedStrokes:(id)a2 thenRenderStrokes:(id)a3 completion:(id /* block */)a4;
- (void)renderStrokes:(id)a0 completion:(id /* block */)a1;
- (void)_renderStrokes:(id)a0 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)imageWithCompletionBlock:(id /* block */)a0;
- (void)addNewRenderedStrokes:(id)a0 hidden:(BOOL)a1 preDrawingChangedBlock:(id /* block */)a2;
- (void)addNewStrokes:(id)a0 preDrawingChangedBlock:(id /* block */)a1;

@end
