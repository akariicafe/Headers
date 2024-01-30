@protocol UISplitViewControllerImpl;

@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem

@property (weak, nonatomic, getter=_impl, setter=_setImpl:) id<UISplitViewControllerImpl> impl;
@property (readonly, nonatomic, getter=_hasBeenUsed) BOOL hasBeenUsed;

- (id)target;
- (void)_wasUsed;
- (void).cxx_destruct;
- (void)_setOwningNavigationItem:(id)a0;
- (SEL)action;

@end
