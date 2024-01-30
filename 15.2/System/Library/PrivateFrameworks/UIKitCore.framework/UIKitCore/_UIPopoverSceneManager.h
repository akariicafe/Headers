@interface _UIPopoverSceneManager : NSObject

+ (id)sharedPopoverSceneManager;

- (void)updatePopoverSceneWithIdentifier:(id)a0 sourceRectInParentUIWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2 preferredHorizontalAlignment:(long long)a3 showsArrow:(BOOL)a4 isRTL:(BOOL)a5;
- (void)closePopoverSceneForIdentifier:(id)a0 popoverWindow:(id)a1 returningToWindow:(id)a2 withTransitionCoordinator:(id)a3;
- (id)createPopoverSceneForContentViewController:(id)a0 sourceView:(id)a1 sourceRectInParentUIWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contentSize:(struct CGSize { double x0; double x1; })a3 permittedArrowDirections:(long long)a4 showsArrow:(BOOL)a5 userInterfaceStyle:(long long)a6 withCompletionBlock:(id /* block */)a7;
- (void)detachPopoverSceneWithIdentifier:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 withCompletionCallback:(id /* block */)a2;
- (void)updatePopoverSceneWithIdentifier:(id)a0 userInterfaceStyle:(long long)a1;
- (void)updateSupportsDetach:(BOOL)a0 forPopoverWithSceneIdentifier:(id)a1;

@end
