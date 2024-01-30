@class HUItemTableViewController, NSString, NSLayoutConstraint;

@interface HUItemTableOBWelcomeController : OBWelcomeController <HUPreloadableViewController>

@property (retain, nonatomic) HUItemTableViewController *itemTableViewController;
@property (retain, nonatomic) NSLayoutConstraint *itemTableViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)updateViewConstraints;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 itemTableViewController:(id)a3;

@end
