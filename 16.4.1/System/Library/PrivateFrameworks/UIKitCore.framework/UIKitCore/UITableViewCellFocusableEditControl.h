@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void)setSelected:(BOOL)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (void)setHighlighted:(BOOL)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_currentImage;
- (void)_ensureFocusedFloatingContentView;
- (BOOL)_shouldHandlePressEvent:(id)a0;
- (void)_updateFloatingViewForCurrentTraits;
- (BOOL)wantsImageShadow;

@end
