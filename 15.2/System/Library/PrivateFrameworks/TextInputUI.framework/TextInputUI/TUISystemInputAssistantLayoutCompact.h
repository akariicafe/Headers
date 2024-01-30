@interface TUISystemInputAssistantLayoutCompact : TUISystemInputAssistantLayoutStandard

- (id)_buttonBarGroupSetForApplicationAssistantItem:(id)a0 withSystemInputAssistantItem:(id)a1 forAssistantView:(id)a2;
- (void)invalidate:(id)a0;
- (void)configureButtonBarsInViewSet:(id)a0 forApplicationAssistantItem:(id)a1 withSystemAssistantItem:(id)a2 withAssistantView:(id)a3;
- (void)_layoutViewSet:(id)a0 forFixedCenterViewWidth:(double)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forAssistantView:(id)a3;

@end
