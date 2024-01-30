@class SBTouchHistory, SBCornerFingerGestureClassifier;

@interface SBCornerFingerPanGestureRecognizer : SBScreenEdgePanGestureRecognizer {
    SBTouchHistory *_touchHistory;
    long long _touchInterfaceOrientationWhenGestureBegan;
    struct CGPoint { double x; double y; } _firstTouchReferenceLocation;
    SBCornerFingerGestureClassifier *_classifier;
}

@property (readonly, nonatomic) unsigned long long corner;

- (unsigned long long)edges;
- (void)setState:(long long)a0;
- (void)_SBLogTouchesWithMethodName:(id)a0 withMethodName:(id)a1;
- (long long)_touchInterfaceOrientation;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setEdges:(unsigned long long)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (BOOL)_shouldBegin;
- (void)_convertReferenceLocation:(struct CGPoint { double x0; double x1; })a0 toOrientedLocation:(struct CGPoint { double x0; double x1; } *)a1 orientedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithTarget:(id)a0 action:(SEL)a1 corner:(unsigned long long)a2 classifier:(id)a3;
- (struct CGVector { double x0; double x1; })_convertReferenceVector:(struct CGVector { double x0; double x1; })a0 toCorner:(unsigned long long)a1 orientation:(long long)a2;

@end
