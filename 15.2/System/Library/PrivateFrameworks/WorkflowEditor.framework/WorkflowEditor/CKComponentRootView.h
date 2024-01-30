@interface CKComponentRootView : UIView

+ (void)addHitTestHook:(id /* block */)a0;
+ (id)hitTestHooks;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
