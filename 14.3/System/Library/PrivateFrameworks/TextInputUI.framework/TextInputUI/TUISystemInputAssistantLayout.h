@interface TUISystemInputAssistantLayout : NSObject

@property (nonatomic) BOOL usesUnifiedButtonBar;

- (id)_buttonBarGroupSetForApplicationAssistantItem:(id)a0 withSystemInputAssistantItem:(id)a1;
- (void)configureButtonBarsInViewSet:(id)a0 forApplicationAssistantItem:(id)a1 withSystemAssistantItem:(id)a2 withAssistantView:(id)a3;
- (void)layoutViewSet:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forAssistantView:(id)a2;

@end
