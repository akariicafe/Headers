@class CACGestureLivePreviewHandwritingQuadCurvePointFIFO, NSMutableIndexSet, CADisplayLink, NSMutableArray;

@interface CACGestureLivePreviewPathEffectView : UIView

@property (retain, nonatomic) CACGestureLivePreviewHandwritingQuadCurvePointFIFO *pointInterpolator;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic) BOOL increasedContrastEnabled;
@property (nonatomic) BOOL done;
@property (retain, nonatomic) NSMutableIndexSet *pointDecayQueue;
@property (retain, nonatomic) CADisplayLink *pointDecayDisplayLink;

- (void)_displayLinkFired:(id)a0;
- (void)buildOut;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0 force:(double)a1 timestamp:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_pushNewPath;
- (void)_addDrawingPoint:(struct CGPoint { double x0; double x1; })a0 force:(double)a1 sentinel:(BOOL)a2;
- (void)accessibilityValueChanged:(id)a0;
- (void)_clearPointInterpolators;
- (struct { double x0; double x1; double x2; double x3; })_currentThemeSettings;
- (id)_currentPath;
- (void)didMoveToWindow;
- (void)reset;

@end
