@class PKMetalFramebuffer, PKSelectionController, NSMutableArray, PKInk, NSMutableSet, UIImage, NSString, PKStrokeGenerator, PKRulerController, PKInterpolateColorAnimation, UITouch, PKDrawingPowerSavingController, PKLinedPaper, PKDrawing, PKController, UIGestureRecognizer, PKAlternativeStrokesAnimation, CADisplayLink, PKShapeDrawingController, PKMetalView, PKMetalConfig, PKMetalRendererController, UIColor, NSUUID, PKUndoCommand;
@protocol PKDrawingGestureRecognizerProtocol, PKTiledCanvasViewDelegate;

@interface PKTiledCanvasView : UIView <PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKShapeDrawingControllerDelegate, PKDrawingGestureTarget> {
    unsigned long long _numSkippedDoubleBufferedFrames;
    struct { unsigned char delegateSupportsDrawingDidChange : 1; unsigned char delegateSupportsWillBeginNewStroke : 1; unsigned char delegateSupportsWillBeginNewStrokeWithLocation : 1; unsigned char delegateSupportsBeganStroke : 1; unsigned char delegateSupportsCancelledStroke : 1; unsigned char delegateSupportsEndedStroke : 1; unsigned char delegateSupportsWillBeginDrawing : 1; unsigned char delegateSupportsDidBeginDrawing : 1; unsigned char delegateSupportsDrawingMovedWithTouch : 1; unsigned char delegateSupportsDidEndDrawing : 1; unsigned char delegateSupportsDidFinishRenderingNewStrokes : 1; unsigned char delegateSupportsShouldBeginDrawingWithTouch : 1; unsigned char delegateSupportsDidEraseStrokes : 1; unsigned char delegateSupportsRegisterUndoCommands : 1; unsigned long long delegateSupportsTouchView; unsigned char delegateSupportsDidPresentWithCanvasOffset : 1; unsigned char delegateSupportsInvalidateTiles : 1; unsigned char delegateSupportsHasVisibleStrokesChanged : 1; unsigned char delegateSupportsShouldDisableShapeRecognition : 1; unsigned char delegateSupportsInkForStroke : 1; unsigned char delegateSupportsTransformForStroke : 1; unsigned char delegateSupportsShouldDelayDrawingBeganWithTouch : 1; unsigned char delegateSupportsShouldCombineStrokes : 1; } _canvasViewFlags;
    NSMutableArray *_finishedStrokes;
    long long _liveInteractionCount;
    UITouch *_currentStrokeTouch;
    UIColor *_canvasBackgroundColor;
    PKDrawing *_liveDrawing;
    PKUndoCommand *_liveDrawingUndoCommand;
    id /* block */ _combineTimeoutBlock;
    BOOL _isCombiningStrokes;
    unsigned long long _combiningStrokesCount;
    NSUUID *_combineStrokesRenderGroupID;
    NSUUID *_combineStrokesDrawingID;
    struct _UIUpdateSequenceItemInternal { } *_updateSequenceItem;
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
@property (nonatomic) BOOL isPreviewing;
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
@property (retain, nonatomic) PKLinedPaper *linedPaper;
@property (retain, nonatomic) UIImage *paperTexture;
@property (retain, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) PKInk *ink;
@property (retain, nonatomic) UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *drawingGestureRecognizer;
@property (readonly, nonatomic) BOOL hasVisibleStrokes;
@property (nonatomic) BOOL useLuminanceColorFilter;
@property (nonatomic) BOOL sixChannelBlending;
@property (nonatomic) BOOL isUnderBlendedContent;
@property (nonatomic) BOOL captureLiveData;
@property (retain, nonatomic) UIColor *liveRenderingOverrideColor;
@property (readonly, nonatomic) PKController *_drawingController;
@property (readonly, nonatomic) PKMetalRendererController *_rendererController;
@property (weak, nonatomic) PKSelectionController *selectionController;
@property (weak, nonatomic) PKRulerController *rulerController;
@property (readonly, nonatomic) PKStrokeGenerator *strokeGenerator;
@property (readonly, nonatomic) PKMetalConfig *metalConfig;
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
@property (nonatomic) unsigned long long resourceCacheSize;
@property (nonatomic) BOOL disableAXDrawingAnnouncements;
@property (readonly, nonatomic) PKDrawing *activeDrawing;
@property (weak, nonatomic) PKDrawing *currentDrawingBeingCopiedToCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)setupDefaults;
+ (void)prewarmFutureCanvasesIfNecessarySecureRendering:(BOOL)a0 prewarmSharedResourceHandler:(BOOL)a1;

- (void)_gestureRecognizerFailed:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setHidden:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)setupDisplayLink;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_stopDisplayLink;
- (void)_startDisplayLink;
- (void)_postBeganErasingAXAnnouncement;
- (id)currentStrokeWithStrokeDataCopy;
- (void)drawingChanged:(id)a0;
- (void)eraseStrokesForPoint:(struct CGPoint { double x0; double x1; })a0 prevPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_didFinishHideCanvasTransaction;
- (void)_postEndedErasingAXAnnouncement;
- (void)enumerateRenderedStrokesBounds:(id /* block */)a0;
- (void)eraserCancelled;
- (void)fadeOutAndHideStrokes:(id)a0 duration:(double)a1;
- (id)_combineStrokesDrawingUUID;
- (void)_didFinishErasingStrokes:(BOOL)a0;
- (void)_drawingBegan:(id)a0 inputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1 locationInView:(struct CGPoint { double x0; double x1; })a2 forPreview:(BOOL)a3 disableDetachedRendering:(BOOL)a4;
- (void)_drawingDisplay:(double)a0;
- (void)_drawingEnded:(id)a0;
- (void)_endAlternativeStrokeIfNecessaryAccepted:(BOOL)a0;
- (void)_finishCombiningStrokesIfNecessary;
- (void)_handleEndOfStroke:(id)a0 groupedUndoCommands:(id)a1 invalidateTiles:(BOOL)a2;
- (id)_inkForNewStroke;
- (double)_inputScale;
- (BOOL)_isCombiningStrokes;
- (BOOL)_isLiveAnimating;
- (BOOL)_isShapeRecognitionEnabled;
- (struct CGSize { double x0; double x1; })_metalViewDrawableSize;
- (void)_postAXAnnouncement:(id)a0;
- (void)_postBeganSketchingAXAnnouncement;
- (void)_postEndedSketchingAXAnnouncement;
- (void)_previewDrawingBegan:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0 tiledViewLocation:(struct CGPoint { double x0; double x1; })a1 disableDetachedRendering:(BOOL)a2;
- (void)_previewDrawingEnded;
- (void)_previewDrawingMoved:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0;
- (struct CGSize { double x0; double x1; })_rendererControllerPixelSize;
- (void)_replayDrawingBegan:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0;
- (void)_replayDrawingCancelled;
- (void)_replayDrawingEnded;
- (void)_replayDrawingMoved:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0;
- (void)_setDrawing:(id)a0 tiles:(id)a1 image:(struct CGImage { } *)a2 tileTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 setupComplete:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)_setDrawing:(id)a0 tiles:(id)a1 tileTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 snapshotTexture:(id)a3 snapshotTextureTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 setupComplete:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)_setFixedPointSize:(struct CGSize { double x0; double x1; })a0 drawingScale:(double)a1;
- (id)_strokeUUIDsForStrokes:(id)a0;
- (id)_touchView;
- (void)_updateMetalLayerOpacity;
- (void)_updateMetalLayerOpacityIsDoingBitmapErase:(BOOL)a0;
- (void)adjustedPixelSize:(struct CGSize { double x0; double x1; } *)a0 drawingSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)animateStrokes:(id)a0 destinationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2 particles:(BOOL)a3;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelCurrentStroke;
- (void)cancelPurgeResourcesBlock;
- (void)checkAnimationsDidEndAtTime:(double)a0;
- (id)currentStroke;
- (void)delayCompletionBlockUntilPresentation:(id /* block */)a0;
- (void)didEndLiveInteractionWithStrokes:(id)a0 drawing:(id)a1 cancelled:(BOOL)a2;
- (void)didEndLiveInteractionWithStrokes:(id)a0 drawing:(id)a1 cancelled:(BOOL)a2 forPreview:(BOOL)a3;
- (void)drawingBegan:(id)a0;
- (void)drawingCancelled;
- (void)drawingCancelledForPreview:(BOOL)a0;
- (void)drawingEnded:(id)a0;
- (void)drawingEstimatedPropertiesUpdated:(id)a0;
- (BOOL)drawingGestureRecognizer:(id)a0 shouldBeginDrawingWithTouches:(id)a1 event:(id)a2;
- (BOOL)drawingGestureRecognizer:(id)a0 shouldDelayDrawingBeganWithTouch:(id)a1;
- (void)drawingGestureRecognizer:(id)a0 touchesEndedWithDrawingTouch:(id)a1;
- (void)drawingMoved:(id)a0 withEvent:(id)a1;
- (BOOL)eraserBegan:(id)a0;
- (void)eraserEnded:(id)a0;
- (void)eraserMoved:(id)a0;
- (void)handleDrawingShouldPause:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usePrivateResourceHandler:(BOOL)a1 singleComponent:(BOOL)a2 sixChannelBlending:(BOOL)a3;
- (double)layerContentsScale;
- (id)liveDrawing;
- (void)liveStrokeParticlesToDestinationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeStuckStrokesAndSimulateCrashIfNecessary;
- (void)resizeBackingBuffersForPixelSize:(struct CGSize { double x0; double x1; })a0 drawingScale:(double)a1;
- (void)schedulePurgeResourcesBlock;
- (void)setCanvasBackgroundColor:(id)a0;
- (void)setIsDrawing:(BOOL)a0 forPreview:(BOOL)a1;
- (void)setLiveRenderingOverrideColor:(id)a0 animated:(BOOL)a1;
- (void)setNeedsDrawingDisplay;
- (void)setupDrawing;
- (void)setupGestures;
- (void)setupMetalViewForPixelFormat:(unsigned long long)a0 withPixelSize:(struct CGSize { double x0; double x1; })a1;
- (void)setupMetalViewIfNecessary;
- (void)setupViewWithPixelSize:(struct CGSize { double x0; double x1; })a0 drawingSize:(struct CGSize { double x0; double x1; })a1;
- (id)shapeDrawingControllerRendererController:(id)a0;
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)a0;
- (void)shapeDrawingControllerShapeGestureDetected:(id)a0;
- (id)snapshotFramebufferWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)testHideOldestStroke;
- (void)updateHasVisibleStrokes;
- (void)willBeginLiveInteractionWithTouch:(id)a0;

@end
