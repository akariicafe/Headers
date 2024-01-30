@class HFMediaSystemBuilder, HUMediaSystemEditorGridItemManager;
@protocol HUMediaSystemEditorGridViewControllerDelegate;

@interface HUMediaSystemEditorGridViewController : HUSelectableServiceGridViewController

@property (retain, nonatomic) HUMediaSystemEditorGridItemManager *itemManager;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;
@property (weak, nonatomic) id<HUMediaSystemEditorGridViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (void)didSelectItem:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;
- (id)initWithServiceGridItemManager:(id)a0;
- (void)didDeselectItem:(id)a0;
- (id)initWithMediaSystemBuilder:(id)a0;
- (void)_resetBuilder;
- (id)_accessoryVendorItemForItem:(id)a0;
- (void)addItemToSelection:(id)a0;
- (void)_addItemToMediaSystem:(id)a0;
- (BOOL)_wantsToggleButtonForSection:(unsigned long long)a0;

@end
