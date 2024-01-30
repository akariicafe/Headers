@interface PXRelaxedScreenEdgePanGestureRecognizer : UIPanGestureRecognizer {
    struct CGPoint { double x; double y; } _initialTouchLocation;
}

@property (nonatomic) unsigned long long trackingEdge;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeAllowances;
@property (nonatomic) double minAngleToEdge;
@property (nonatomic) double minTranslation;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setMaximumNumberOfTouches:(unsigned long long)a0;
- (void)setMinimumNumberOfTouches:(unsigned long long)a0;
- (double)translationDistanceInView:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
