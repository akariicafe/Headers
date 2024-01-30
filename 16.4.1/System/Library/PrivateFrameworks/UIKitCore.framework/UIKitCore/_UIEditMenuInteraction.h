@interface _UIEditMenuInteraction : UIEditMenuInteraction {
    struct { unsigned char menuForSuggestedActions : 1; unsigned char targetRectForConfiguration : 1; unsigned char willPresent : 1; unsigned char didPresent : 1; unsigned char willDismiss : 1; unsigned char didDismiss : 1; } _delegateImplementsSPI;
}

@property (nonatomic) BOOL presentsContextMenuOnSecondaryAction;

- (void)_willDismissMenuForConfiguration:(id)a0 animator:(id)a1;
- (void)_willPresentMenuForConfiguration:(id)a0 animator:(id)a1;
- (id)_menuForSuggestedActions:(id)a0 configuration:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetRectForConfiguration:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)updateVisibleMenu;
- (void)dismissEditMenuAnimated:(BOOL)a0;
- (void)presentEditMenuWithConfiguration:(id)a0 animated:(BOOL)a1;

@end
