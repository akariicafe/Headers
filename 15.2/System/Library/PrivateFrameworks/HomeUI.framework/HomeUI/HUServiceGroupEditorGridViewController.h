@class HFServiceGroupBuilder, HUServiceGroupEditorGridItemManager;
@protocol HUServiceGroupEditorGridViewControllerDelegate;

@interface HUServiceGroupEditorGridViewController : HUSelectableServiceGridViewController

@property (retain, nonatomic) HUServiceGroupEditorGridItemManager *itemManager;
@property (readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder;
@property (weak, nonatomic) id<HUServiceGroupEditorGridViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)itemManagerDidUpdate:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;
- (id)initWithServiceGroupBuilder:(id)a0;
- (id)initWithServiceGridItemManager:(id)a0;
- (id)_serviceVendorItemForItem:(id)a0;
- (void)didDeselectItem:(id)a0;

@end
