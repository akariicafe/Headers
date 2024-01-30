@class NSString, _UIFloatingContentView;

@interface UIButtonConfigurationVisualProviderTVOS : UIButtonConfigurationVisualProvider <_UIFloatingContentViewDelegate> {
    _UIFloatingContentView *_floatingContentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanupForVisualProvider:(id)a0;
- (void)_updateBackgroundViewWithConfiguration:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)_updateContentBackdropView;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)_floatingContentView;
- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (id)effectiveContentView;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)_layoutFloatingContentView;
- (void).cxx_destruct;

@end
