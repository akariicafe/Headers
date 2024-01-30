@class HMAccessory, HFAccessoryProfileItem, HUNearbyAccessoriesEditorServiceGridViewController;

@interface HUNearbyAccessoriesEditorViewController : HUInstructionsTableViewController

@property (retain, nonatomic) HMAccessory *primaryAccessory;
@property (readonly, weak, nonatomic) HFAccessoryProfileItem *accessoryProfileItem;
@property (retain, nonatomic) HUNearbyAccessoriesEditorServiceGridViewController *servicesViewController;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)hu_preloadContent;
- (void)_displayProgressIndicatorWhileLoading;
- (void)dismissEditor:(id)a0;
- (void)cancelEditing:(id)a0;
- (id)initWithAccessoryProfileSourceItem:(id)a0 completionHandler:(id /* block */)a1;

@end
