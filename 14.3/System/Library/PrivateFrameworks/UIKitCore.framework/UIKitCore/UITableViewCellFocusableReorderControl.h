@class UITapGestureRecognizer, NSString, _UIFloatingContentView, UIPanGestureRecognizer;

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl <_UIFloatingContentViewDelegate> {
    _UIFloatingContentView *_floatingContentView;
    UIPanGestureRecognizer *_panRecognizer;
    UITapGestureRecognizer *_upArrowButtonRecognizer;
    UITapGestureRecognizer *_downArrowButtonRecognizer;
    BOOL _cellHasReorderingAppearance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)floatingContentView:(id)a0 didFinishTransitioningToState:(unsigned long long)a1;
- (id)initWithTableViewCell:(id)a0;
- (void)_updateFloatingViewForCurrentTraits;
- (BOOL)_shouldHandlePressEvent:(id)a0;
- (void)_endIndirectTracking;
- (void)_panRecognizer:(id)a0;
- (void)_updateFocusedFloatingContentView:(BOOL)a0;
- (void)_upArrowButton:(id)a0;
- (void)_downArrowButton:(id)a0;
- (void)_beginIndirectTracking;
- (void)_arrowButton:(long long)a0;
- (void)layoutSubviews;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
