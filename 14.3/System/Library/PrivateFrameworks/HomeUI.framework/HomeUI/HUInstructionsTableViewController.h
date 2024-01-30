@class HUInstructionsItem, UIViewController;

@interface HUInstructionsTableViewController : HUItemTableViewController

@property (readonly, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) UIViewController *contentViewController;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)childViewControllersToPreload;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (id)initWithItemManager:(id)a0;
- (id)initWithInstructionsItem:(id)a0 contentViewController:(id)a1;
- (id)initWithItemManager:(id)a0 instructionsItem:(id)a1 contentViewController:(id)a2;

@end
