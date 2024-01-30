@class UIView;

@interface NCAuxiliaryOptionsButton : UIButton {
    UIView *_backgroundView;
}

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)_configureBackgroundViewIfNecessary;
- (void).cxx_destruct;
- (id)init;
- (double)_continuousCornerRadius;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_handleHoverGestureRecognizerEvent:(id)a0;
- (void)_updateBackgroundVisualStyling;

@end
