@protocol PXCloudPhotoWelcomeNavigationControllerDismissDelegate;

@interface PXCloudPhotoWelcomeNavigationController : UINavigationController

@property (weak, nonatomic) id<PXCloudPhotoWelcomeNavigationControllerDismissDelegate> dismissDelegate;

+ (id)new;
+ (BOOL)shouldPresentWelcomeViewController:(BOOL *)a0;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithRootViewController:(id)a0;
- (id)init;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;
- (id)initWithWelcomeController:(id)a0;

@end
