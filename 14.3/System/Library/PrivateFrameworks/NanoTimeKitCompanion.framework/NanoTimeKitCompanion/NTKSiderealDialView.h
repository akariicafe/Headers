@class UIView;

@interface NTKSiderealDialView : UIView {
    UIView *_hourContainerView;
}

- (void).cxx_destruct;
- (id)_replicatorLayerWithCenter:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dialDiameter:(double)a2 instanceCount:(long long)a3 instanceRotation:(double)a4 tickOpacity:(double)a5 tickSize:(struct CGSize { double x0; double x1; })a6 tickCornerRadius:(double)a7;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dialDiameter:(double)a1 device:(id)a2;

@end
