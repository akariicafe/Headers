@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0;
- (BOOL)wantsImageShadow;
- (void)_updateFloatingViewForCurrentTraits;
- (BOOL)_shouldHandlePressEvent:(id)a0;
- (id)_currentImage;
- (void)layoutSubviews;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_ensureFocusedFloatingContentView;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
