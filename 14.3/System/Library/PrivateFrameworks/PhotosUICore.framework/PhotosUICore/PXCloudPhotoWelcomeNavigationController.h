@protocol PXCloudPhotoWelcomeNavigationControllerDismissDelegate;

@interface PXCloudPhotoWelcomeNavigationController : UINavigationController

@property (weak, nonatomic) id<PXCloudPhotoWelcomeNavigationControllerDismissDelegate> dismissDelegate;

+ (id)new;
+ (BOOL)shouldPresentWelcomeViewController:(BOOL *)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0;
- (id)initWithWelcomeController:(id)a0;

@end
