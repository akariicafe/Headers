@class NSString, SBTouchHistory;

@interface SBCornerPencilPanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver> {
    SBTouchHistory *_touchHistory;
    double _cornerHorizontalEdgeLength;
    double _cornerVerticalEdgeLength;
    long long _touchInterfaceOrientationWhenGestureBegan;
}

@property (readonly, nonatomic) unsigned long long corner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldSupportStylusTouches;
+ (unsigned long long)_edgesForCorner:(unsigned long long)a0;
+ (id)interactiveCornerPanGestureRecognizerWithSettings:(id)a0 corner:(unsigned long long)a1 target:(id)a2 action:(SEL)a3;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)setState:(long long)a0;
- (void)_SBLogTouchesWithMethodName:(id)a0 withMethodName:(id)a1;
- (long long)_touchInterfaceOrientation;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setEdges:(unsigned long long)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)_initWithSettings:(id)a0 corner:(unsigned long long)a1 target:(id)a2 action:(SEL)a3 type:(long long)a4 options:(unsigned long long)a5;
- (void)_updateSettingsDerivedValues:(id)a0;
- (void)_convertReferenceLocation:(struct CGPoint { double x0; double x1; })a0 toOrientedLocation:(struct CGPoint { double x0; double x1; } *)a1 orientedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (struct UIOffset { double x0; double x1; })_edgeOffsets;
- (BOOL)_isOrientedLocation:(struct CGPoint { double x0; double x1; })a0 inCorner:(unsigned long long)a1 forOrientedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withEdgeOffsets:(struct UIOffset { double x0; double x1; })a3;
- (BOOL)shouldReceiveTouch:(id)a0;

@end
