@class HUQuickControlCollectionViewController;

@interface HUQuickControlGridViewController : HUQuickControlViewController

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController;

+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2;
- (id)childQuickControlContentViewControllers;
- (void)_subclass_configureQuickControlViewController:(id)a0;

@end
