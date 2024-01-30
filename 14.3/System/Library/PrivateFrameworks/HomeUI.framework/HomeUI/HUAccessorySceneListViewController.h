@class HUAccessorySceneListContentViewController, HUAccessorySceneListItemManager;

@interface HUAccessorySceneListViewController : HUItemTableViewController

@property (retain, nonatomic) HUAccessorySceneListContentViewController *existingSceneListContentViewController;
@property (retain, nonatomic) HUAccessorySceneListContentViewController *suggestedSceneListContentViewController;
@property (readonly, nonatomic) HUAccessorySceneListItemManager *itemManager;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)childViewControllersToPreload;
- (id)initWithServiceLikeItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
