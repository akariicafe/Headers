@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void)layoutSubviews;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)wantsImageShadow;
- (void)_updateFloatingViewForCurrentTraits;
- (BOOL)_shouldHandlePressEvent:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_currentImage;
- (void)_ensureFocusedFloatingContentView;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
