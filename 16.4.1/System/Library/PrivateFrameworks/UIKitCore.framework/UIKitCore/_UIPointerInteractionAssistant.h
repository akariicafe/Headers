@class UIWindow, NSString, _UIPointerInteractionAssistantEffectContainerView, NSMutableDictionary, UIView;

@interface _UIPointerInteractionAssistant : UIPointerInteraction <_UIViewSubtreeMonitor, UIPointerInteractionDelegate> {
    _UIPointerInteractionAssistantEffectContainerView *_previewContainer;
    UIWindow *_monitoredWindow;
    NSMutableDictionary *_assistants;
}

@property (readonly, nonatomic) UIView *previewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_monitoredView:(id)a0 willMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (id)createRegionFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetView:(id)a1 identifier:(id)a2 selected:(BOOL)a3;
- (id)_assistantForView:(id)a0;
- (id)createPreviewTargetForView:(id)a0 center:(struct CGPoint { double x0; double x1; })a1;
- (void)willMoveToView:(id)a0;
- (id)createStyleForButton:(id)a0 shapeProvider:(id /* block */)a1;
- (id)initWithDelegate:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_monitoredView:(id)a0 didMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (BOOL)_monitorsView:(id)a0;
- (id)init;
- (struct CGPoint { double x0; double x1; })request:(id)a0 locationInView:(id)a1;
- (void)_updatePointerInteractionForSubtree:(id)a0 suppressInteractions:(BOOL)a1;
- (void)setAssistedView:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;

@end
