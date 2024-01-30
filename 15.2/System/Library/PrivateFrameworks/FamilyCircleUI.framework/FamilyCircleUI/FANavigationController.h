@protocol FANavigationControllerDelegate;

@interface FANavigationController : UINavigationController

@property (weak, nonatomic) id<FANavigationControllerDelegate> familyDelegate;

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_isEmpty;

@end
