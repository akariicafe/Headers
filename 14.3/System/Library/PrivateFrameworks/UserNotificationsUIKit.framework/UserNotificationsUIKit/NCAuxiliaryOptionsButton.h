@class UIView;

@interface NCAuxiliaryOptionsButton : UIButton {
    UIView *_backgroundView;
}

- (void)_setCornerRadius:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_configureBackgroundViewIfNecessary;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)_handleHoverGestureRecognizerEvent:(id)a0;
- (void)_updateBackgroundVisualStyling;

@end
