@class CAGradientLayer;

@interface AVMobileChromelessBackgroundGradientView : UIView {
    CAGradientLayer *_backgroundGradientLayer;
}

@property (nonatomic, getter=isActive) BOOL active;

- (void)_updateGradientLayerState;
- (void)didMoveToWindow;
- (void)_setUpLayersIfNeeded;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
