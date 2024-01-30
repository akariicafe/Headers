@class UIColor, NSString, DKOpenGLRenderer, NSMutableArray;
@protocol DKInkRendererDelegate;

@interface DKInkRendererGL : GLKView <DKOpenGLRendererDelegate, DKInkRenderer> {
    NSMutableArray *_brushPointQueue;
    NSMutableArray *_brushStrokes;
    NSMutableArray *_currentBrushStroke;
    BOOL _initialized;
    double _backingScale;
    DKOpenGLRenderer *_inkRenderer;
    BOOL _needToNotify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *inkColor;
@property (weak, nonatomic) id<DKInkRendererDelegate> delegate;
@property (nonatomic) BOOL scaleDrawingToFitCanvas;
@property (nonatomic) double drawingScale;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL drawingEnabled;
@property (readonly, nonatomic) BOOL supportsBleedAnimation;
@property (readonly, nonatomic) BOOL initialized;
@property (readonly, nonatomic) unsigned long long maximumPointsForBleedAnimation;

- (void)clear;
- (void)_commonInit;
- (id)snapshotImage;
- (void)teardown;
- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; })a0;
- (void)dealloc;
- (void)display;
- (void)endStroke;
- (void)beginStroke;
- (void)force;
- (BOOL)canBecomeFirstResponder;
- (void)flush;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeLastStroke;
- (void)resetRendererState;
- (void)completeAnimationsImmediately;
- (void)displayForcefully;
- (void)addPointsFromBrushPointQueueWithSegmentLength:(unsigned long long)a0;
- (void)rendererDidFinishAnimatingDrawing:(id)a0;

@end
