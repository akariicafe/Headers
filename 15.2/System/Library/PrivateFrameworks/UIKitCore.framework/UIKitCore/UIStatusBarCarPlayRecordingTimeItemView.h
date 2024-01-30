@class _UIStatusBarRoundedCornerView;

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {
    _UIStatusBarRoundedCornerView *_pillView;
}

- (void)layoutSubviews;
- (long long)buttonType;
- (long long)textStyle;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pillFrame;
- (double)extraRightPadding;
- (void).cxx_destruct;
- (BOOL)showsTouchWhenHighlighted;
- (void)_updatePillFrame;
- (void)movedToSuperview:(id)a0;
- (BOOL)usesAdvancedActions;
- (BOOL)allowsUserInteraction;
- (void)removeFromSuperview;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
