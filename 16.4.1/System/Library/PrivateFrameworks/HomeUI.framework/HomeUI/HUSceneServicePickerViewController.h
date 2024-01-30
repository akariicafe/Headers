@class NSSet, HFActionSetBuilder;
@protocol HUSceneServicePickerViewControllerDelegate;

@interface HUSceneServicePickerViewController : HUSelectableServiceGridViewController

@property (retain, nonatomic) NSSet *existingActionSetCharacteristics;
@property (retain, nonatomic) NSSet *existingActionSetMediaProfiles;
@property (weak, nonatomic) id<HUSceneServicePickerViewControllerDelegate> servicePickerDelegate;
@property (readonly, nonatomic) HFActionSetBuilder *actionSetBuilder;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (id)initWithServiceGridItemManager:(id)a0;
- (BOOL)_canSelectMediaAccessoryItem:(id)a0;
- (void)_presentUnsupportedAlertWithTitle:(id)a0 message:(id)a1;
- (id)_updateActionSetBuilder;
- (void)_validateDoneButton;
- (BOOL)canSelectItem:(id)a0 indexPath:(id)a1;
- (void)didChangeSelection;
- (id)initWithActionSetBuilder:(id)a0 servicePickerDelegate:(id)a1;
- (void)itemManagerDidUpdate:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;

@end
