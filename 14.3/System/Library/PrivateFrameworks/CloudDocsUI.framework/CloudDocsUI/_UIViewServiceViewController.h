@class UINavigationController, NSString;

@interface _UIViewServiceViewController : UIViewController <UINavigationControllerDelegate>

@property (readonly, nonatomic) id hostingViewController;
@property (readonly, nonatomic) UINavigationController *containedNavController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (struct CGSize { double x0; double x1; })_updatedContentSizeForPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContainedNavController:(id)a0;

@end
