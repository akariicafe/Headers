@interface _GroupActivities_UIKit.GroupActivityPlaceholderSharingController : UINavigationController <_EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ placeholderControllerDidCancel;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)hostViewController:(id)a0 didFailToHost:(id)a1 error:(id)a2;

@end
