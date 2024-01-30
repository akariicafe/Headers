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
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)reset;
- (id)_currentPath;
- (void)_addDrawingPoint:(struct CGPoint { double x0; double x1; })a0 force:(double)a1 sentinel:(BOOL)a2;
- (void)_clearPointInterpolators;
- (struct { double x0; double x1; double x2; double x3; })_currentThemeSettings;
- (id)_pushNewPath;
- (void)accessibilityValueChanged:(id)a0;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0 force:(double)a1 timestamp:(double)a2;
- (void)buildOut;

@end
