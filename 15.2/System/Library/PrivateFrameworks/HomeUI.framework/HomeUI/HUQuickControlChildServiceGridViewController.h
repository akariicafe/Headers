@class HUQuickControlCollectionViewController, HFChildServiceControlItem;

@interface HUQuickControlChildServiceGridViewController : HUQuickControlViewController

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController;
@property (readonly, nonatomic) HFChildServiceControlItem *controlItem;

+ (id)controlItemPredicate;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)hu_preloadContent;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (id)childQuickControlContentViewControllers;
- (id)initWithChildServiceControlItem:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (void)_subclass_configureQuickControlViewController:(id)a0;

@end
