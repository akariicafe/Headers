@class PKMetalFramebuffer, PKSelectionController, NSMutableArray, NSString, PKInk, NSMutableSet, UIImage, PKRulerController, PKInterpolateColorAnimation, UITouch, PKDrawingPowerSavingController, PKDrawing, PKController, UIGestureRecognizer, PKAlternativeStrokesAnimation, CADisplayLink, PKMetalView, PKShapeDrawingController, PKMetalRendererController, UIColor, PKUndoCommand;
@protocol PKDrawingGestureRecognizerProtocol, PKTiledCanvasViewDelegate;

@interface PKTiledCanvasView : UIView <PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKShapeDrawingControllerDelegate, PKDrawingGestureTarget> {
    unsigned long long _numSkippedDoubleBufferedFrames;
    struct { unsigned char delegateSupportsDrawingDidChange : 1; unsigned char delegateSupportsWillBeginNewStroke : 1; unsigned char delegateSupportsBeganStroke : 1; unsigned char delegateSupportsCancelledStroke : 1; unsigned char delegateSupportsEndedStroke : 1; unsigned char delegateSupportsWillBeginDrawing : 1; unsigned char delegateSupportsDidBeginDrawing : 1; unsigned char delegateSupportsDrawingMovedWithTouch : 1; unsigned char delegateSupportsDidEndDrawing : 1; unsigned char delegateSupportsDidFinishRenderingNewStrokes : 1; unsigned char delegateSupportsShouldBeginDrawingWithTouch : 1; unsigned char delegateSupportsDidEraseStrokes : 1; unsigned char delegateSupportsRegisterUndoCommands : 1; unsigned long long delegateSupportsTouchView; unsigned char delegateSupportsDidPresentWithCanvasOffset : 1; unsigned char delegateSupportsInvalidateTiles : 1; unsigned char delegateSupportsHasVisibleStrokesChanged : 1; unsigned char delegateSupportsShouldDisableShapeRecognition : 1; unsigned char delegateSupportsInkForStroke : 1; unsigned char delegateSupportsTransformForStroke : 1; } _canvasViewFlags;
    NSMutableArray *_finishedStrokes;
    long long _liveInteractionCount;
    UITouch *_currentStrokeTouch;
    UIColor *_canvasBackgroundColor;
    PKDrawing *_liveDrawing;
    PKUndoCommand *_liveDrawingUndoCommand;
}

@property (retain, nonatomic) PKMetalView *metalView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL shouldPause;
@property (nonatomic) BOOL isDrawing;
@property (nonatomic) BOOL usePrivateResourceHandler;
@property (nonatomic) BOOL singleComponent;
@property (retain, nonatomic) PKMetalFramebuffer *snapshotFramebuffer;
@property (nonatomic) struct CGSize { double width; double height; } _fixedPixelSize;
@property (nonatomic) double _fixedDrawingScale;
@property (nonatomic) long long maxNumPredictionPoints;
@property double drawingStartTimestamp;
@property (retain, nonatomic) PKDrawingPowerSavingController *powerSavingController;
@property (copy, nonatomic) id /* block */ purgeResourcesBlock;
@property (nonatomic) BOOL isErasingObjects;
@property (nonatomic) struct CGPoint { double x; double y; } _oldEraseLocation;
@property (retain, nonatomic) NSMutableArray *strokesToErase;
@property (retain, nonatomic) NSMutableSet *strokeIDsToErase;
@property (retain, nonatomic) NSMutableArray *particlesToDestinationAnimations;
@property (retain, nonatomic) NSMutableArray *transformStrokesAnimations;
@property (nonatomic) double liveAnimationStartTime;
@property (retain, nonatomic) NSMutableArray *fadeOutStrokeAnimations;
@property (retain, nonatomic) PKAlternativeStrokesAnimation *alternativeStrokesAnimation;
@property (retain, nonatomic) NSMutableSet *strokeUUIDsAboutToBeRemoved;
@property (retain, nonatomic) NSMutableArray *strokeRenderCachesToPurge;
@property (retain, nonatomic) PKInterpolateColorAnimation *liveRenderingOverrideColorAnimation;
@property (retain, nonatomic) PKShapeDrawingController *shapeDrawingController;
@property (retain, nonatomic) PKInk *sixChannelInk;
@property (weak, nonatomic) id<PKTiledCanvasViewDelegate> delegate;
@property (retain, nonatomic) UIImage *paperTexture;
@property (retain, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) PKInk *ink;
@property (retain, nonatomic) UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *drawingGestureRecognizer;
@property (readonly, nonatomic) BOOL hasVisibleStrokes;
@property (nonatomic) BOOL useLuminanceColorFilter;
@property (nonatomic) BOOL sixChannelBlending;
@property (retain, nonatomic) UIColor *liveRenderingOverrideColor;
@property (readonly, nonatomic) PKController *_drawingController;
@property (readonly, nonatomic) PKMetalRendererController *_rendererController;
@property (weak, nonatomic) PKSelectionController *selectionController;
@property (weak, nonatomic) PKRulerController *rulerController;
@property (readonly, nonatomic) BOOL wantsCanvasVisible;
@property (nonatomic) BOOL predictionDisabled;
@property (nonatomic) double metalLayerContentsScaleOverride;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } strokeTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } paperTransform;
@property (nonatomic) BOOL enableCanvasOffsetSupport;
@property (nonatomic) struct CGPoint { double x; double y; } canvasOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewScissor;
@property BOOL allowLiveInteraction;
@property (nonatomic) BOOL liveStrokeMode;
@property (nonatomic) struct CGSize { double width; double height; } liveStrokeMaxSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } renderedStrokesBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleStrokesBounds;
@property (nonatomic) BOOL disableAXDrawingAnnouncements;
@property (readonly, nonatomic) PKDrawing *activeDrawing;
@property (weak, nonatomic) PKDrawing *currentDrawingBeingCopiedToCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)setupDefaults;
+ (void)prewarmFutureCanvasesIfNecessarySecureRendering:(BOOL)a0;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)layoutSubviews;
- (void)setupDisplayLink;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_stopDisplayLink;
- (void)setOpaque:(BOOL)a0;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)dealloc;
- (double)_inputScale;
- (void)_startDisplayLink;
- (void)setupGestures;
- (void)setNeedsDrawingDisplay;
- (void)drawingChanged:(id)a0;
- (double)layerContentsScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usePrivateResourceHandler:(BOOL)a1 singleComponent:(BOOL)a2 sixChannelBlending:(BOOL)a3;
- (id)currentStroke;
- (id)liveDrawing;
- (void)_setFixedPointSize:(struct CGSize { double x0; double x1; })a0 drawingScale:(double)a1;
- (id)snapshotFramebufferWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setDrawing:(id)a0 tiles:(id)a1 tileTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 snapshotTexture:(id)a3 snapshotTextureTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 setupComplete:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)_drawingDisplay:(double)a0;
- (void)setupDrawing;
- (void)cancelPurgeResourcesBlock;
- (void)setupViewWithPixelSize:(struct CGSize { double x0; double x1; })a0 drawingSize:(struct CGSize { double x0; double x1; })a1;
- (void)setLiveRenderingOverrideColor:(id)a0 animated:(BOOL)a1;
- (void)_updateMetalLayerOpacity;
- (BOOL)_isLiveAnimating;
- (void)adjustedPixelSize:(struct CGSize { double x0; double x1; } *)a0 drawingSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)setupMetalViewForPixelFormat:(unsigned long long)a0 withPixelSize:(struct CGSize { double x0; double x1; })a1;
- (void)setCanvasBackgroundColor:(id)a0;
- (void)resizeBackingBuffersForPixelSize:(struct CGSize { double x0; double x1; })a0 drawingScale:(double)a1;
- (void)schedulePurgeResourcesBlock;
- (void)handleDrawingShouldPause:(BOOL)a0;
- (void)checkAnimationsDidEndAtTime:(double)a0;
- (void)_updateMetalLayerOpacityIsDoingBitmapErase:(BOOL)a0;
- (void)delayCompletionBlockUntilPresentation:(id /* block */)a0;
- (void)updateHasVisibleStrokes;
- (id)currentStrokeWithStrokeDataCopy;
- (BOOL)_isShapeRecognitionEnabled;
- (BOOL)eraserBegan:(id)a0;
- (void)willBeginLiveInteractionWithTouch:(id)a0;
- (id)_inkForNewStroke;
- (id)_touchView;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_postBeganSketchingAXAnnouncement;
- (void)eraserMoved:(id)a0;
- (void)_endAlternativeStrokeIfNecessaryAccepted:(BOOL)a0;
- (void)eraserEnded:(id)a0;
- (void)_handleEndOfStroke:(id)a0 groupedUndoCommands:(id)a1 invalidateTiles:(BOOL)a2;
- (void)didEndLiveInteractionWithStrokes:(id)a0 drawing:(id)a1 cancelled:(BOOL)a2;
- (void)_postEndedSketchingAXAnnouncement;
- (void)eraserCancelled;
- (void)eraseStrokesForPoint:(struct CGPoint { double x0; double x1; })a0 prevPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_postBeganErasingAXAnnouncement;
- (void)_didFinishErasingStrokes:(BOOL)a0;
- (void)_postEndedErasingAXAnnouncement;
- (void)animateStrokes:(id)a0 destinationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2 particles:(BOOL)a3;
- (id)_strokeUUIDsForStrokes:(id)a0;
- (void)fadeOutAndHideStrokes:(id)a0 duration:(double)a1;
- (void)_postAXAnnouncement:(id)a0;
- (BOOL)drawingGestureRecognizer:(id)a0 shouldBeginDrawingWithTouches:(id)a1 event:(id)a2;
- (void)drawingGestureRecognizer:(id)a0 touchesEndedWithDrawingTouch:(id)a1;
- (id)shapeDrawingControllerRendererController:(id)a0;
- (void)shapeDrawingControllerShapeGestureDetected:(id)a0;
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)a0;
- (void)drawingBegan:(id)a0;
- (void)drawingMoved:(id)a0 withEvent:(id)a1;
- (void)drawingEnded:(id)a0;
- (void)drawingCancelled;
- (void)drawingEstimatedPropertiesUpdated:(id)a0;
- (void)_replayDrawingBegan:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0;
- (void)_replayDrawingMoved:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0;
- (void)_replayDrawingEnded;
- (void)_replayDrawingCancelled;
- (void)enumerateRenderedStrokesBounds:(id /* block */)a0;
- (void)setResourceCacheSize:(unsigned long long)a0;
- (void)_setDrawing:(id)a0 tiles:(id)a1 image:(struct CGImage { } *)a2 tileTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 setupComplete:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)cancelCurrentStroke;
- (void)liveStrokeParticlesToDestinationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)testHideOldestStroke;
- (void)removeStuckStrokesAndSimulateCrashIfNecessary;
- (struct CGSize { double x0; double x1; })_metalViewDrawableSize;
- (struct CGSize { double x0; double x1; })_rendererControllerPixelSize;

@end
