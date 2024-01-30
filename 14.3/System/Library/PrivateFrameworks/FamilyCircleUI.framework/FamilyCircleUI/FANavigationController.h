@protocol FANavigationControllerDelegate;

@interface FANavigationController : UINavigationController

@property (weak, nonatomic) id<FANavigationControllerDelegate> familyDelegate;

- (BOOL)_isEmpty;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;

@end
