@class NSString, NSMutableDictionary;

@interface NTKCurvedPickerView : UIView <NTKEditOptionContainerView> {
    NSMutableDictionary *_sideViews;
    unsigned long long _activeSide;
    unsigned long long _transitioningSide;
    double _currentFraction;
}

@property (readonly, nonatomic) double circleRadius;
@property (readonly, nonatomic) double centerAngle;
@property (readonly, nonatomic) BOOL interior;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } circleCenter;
@property (readonly, nonatomic) unsigned long long numberOfSides;
@property (readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (double)_alphaForIndex:(unsigned long long)a0;
- (double)_angleForIndex:(unsigned long long)a0;
- (void)_setCurrentFraction:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForAngle:(double)a0;
- (void)enumerateSideViewsWithBlock:(id /* block */)a0;
- (void)setCircleRadius:(double)a0 centerAngle:(double)a1 circleCenter:(struct CGPoint { double x0; double x1; })a2 interior:(BOOL)a3;
- (void)setView:(id)a0 forSideAtIndex:(unsigned long long)a1;
- (void)transitionToFraction:(double)a0 fromSideAtIndex:(unsigned long long)a1 toSideAtIndex:(unsigned long long)a2;
- (void)transitionToSideAtIndex:(unsigned long long)a0;
- (id)viewForSideAtIndex:(unsigned long long)a0;

@end
