@protocol UISplitViewControllerImpl;

@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem

@property (weak, nonatomic, getter=_impl, setter=_setImpl:) id<UISplitViewControllerImpl> impl;
@property (readonly, nonatomic, getter=_hasBeenUsed) BOOL hasBeenUsed;

- (void).cxx_destruct;
- (SEL)action;
- (id)target;
- (void)_setOwningNavigationItem:(id)a0;
- (void)_wasUsed;

@end
