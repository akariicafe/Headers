@class HFActionSetBuilder;
@protocol HUSceneServicePickerViewControllerDelegate;

@interface HUSceneServicePickerViewController : HUSelectableServiceGridViewController

@property (weak, nonatomic) id<HUSceneServicePickerViewControllerDelegate> servicePickerDelegate;
@property (readonly, nonatomic) HFActionSetBuilder *actionSetBuilder;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (id)layoutOptionsForSection:(long long)a0;
- (void)_validateDoneButton;
- (id)initWithServiceGridItemManager:(id)a0;
- (id)initWithActionSetBuilder:(id)a0 servicePickerDelegate:(id)a1;
- (id)_updateActionSetBuilder;
- (void)didChangeSelection;
- (BOOL)_canSelectMediaAccessoryItem:(id)a0;
- (void)_presentUnsupportedAlertWithTitle:(id)a0 message:(id)a1;
- (BOOL)canSelectItem:(id)a0 indexPath:(id)a1;

@end
