@class BKUIPearlCrossHairsRenderingView, UIImageView;

@interface BKUIPearlCrossHairsView : UIView {
    BKUIPearlCrossHairsRenderingView *_renderingView;
    UIImageView *_arrowView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setPitch:(double)a0 yaw:(double)a1 animated:(BOOL)a2;
- (double)angleFromDirection:(unsigned long long)a0;
- (void)nudgeCrossHairsAtAngle:(double)a0 completion:(id /* block */)a1;
- (void)nudgeInDirection:(unsigned long long)a0 smallNudgePeak:(id /* block */)a1 largeNudgePeak:(id /* block */)a2 completion:(id /* block */)a3;
- (void)setPitch:(double)a0 yaw:(double)a1;

@end
