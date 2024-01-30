@class PKTextInputInteraction, PKDrawing, UITextField, PKTextInputDrawingGestureRecognizer, PKTiledCanvasView, NSMutableArray;

@interface PKDrawingReplayController : NSObject

@property (nonatomic) BOOL setupComplete;
@property (retain, nonatomic) PKTiledCanvasView *canvasView;
@property (retain, nonatomic) PKDrawing *drawing;
@property (weak, nonatomic) UITextField *textField;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) PKTextInputInteraction *textInputInteraction;
@property (weak, nonatomic) PKTextInputDrawingGestureRecognizer *drawingGestureRecognizer;
@property (nonatomic) unsigned long long currentPointIndex;
@property (nonatomic) struct CGPoint { double x; double y; } startingTextFieldOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } originOffset;
@property (nonatomic) struct CGPoint { double x; double y; } currentOffset;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (retain, nonatomic) NSMutableArray *pointArray;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double speedRatio;
@property (nonatomic) BOOL disablePencilInput;

+ (BOOL)isDrawingInProgressForWindow:(id)a0;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_loadPointArray;
- (void)_beginDrawing;
- (void)_beginStrokeWithPoint:(id)a0;
- (void)_endDrawing;
- (void)_processNextPoint;
- (void)_setUpIfNecessary;
- (void)_strokeEndedWithReplayPoint:(id)a0;
- (void)_strokeMovedWithReplayPoint:(id)a0;
- (void)beginDrawingAnimationAtPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)beginDrawingAnimationAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)beginInsertTextAnimationAtIndex:(unsigned long long)a0 offset:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)initWithDrawing:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 sourceTextField:(id)a2;
- (id)initWithSourceTextField:(id)a0;
- (id)pencilTextInputInteractionFromWindowScene:(id)a0;
- (BOOL)shouldEndDrawing;

@end
