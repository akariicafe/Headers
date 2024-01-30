@class HUQuickControlCollectionViewController, HFChildServiceControlItem;

@interface HUQuickControlChildServiceGridViewController : HUQuickControlViewController

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController;
@property (readonly, nonatomic) HFChildServiceControlItem *controlItem;

+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2;
- (id)childQuickControlContentViewControllers;
- (id)initWithChildServiceControlItem:(id)a0 home:(id)a1 itemUpdater:(id)a2;
- (void)_subclass_configureQuickControlViewController:(id)a0;

@end
