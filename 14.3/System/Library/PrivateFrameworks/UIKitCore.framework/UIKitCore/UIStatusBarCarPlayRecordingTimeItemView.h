@class _UIStatusBarRoundedCornerView;

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {
    _UIStatusBarRoundedCornerView *_pillView;
}

- (BOOL)canBecomeFocused;
- (long long)buttonType;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (double)extraRightPadding;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pillFrame;
- (void)_updatePillFrame;
- (void)movedToSuperview:(id)a0;
- (BOOL)usesAdvancedActions;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsUserInteraction;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)textStyle;
- (BOOL)showsTouchWhenHighlighted;

@end
