@class HUQuickControlSummaryNavigationBarTitleView, NSString, NSMutableDictionary, NSSet, HUSceneActionEditorItemManager;
@protocol HUSceneEditorDelegate, HUPresentationDelegate;

@interface HUSceneActionEditorViewController : HUItemTableViewController <HUSwitchCellDelegate, HUSceneServicePickerViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate, HUServiceGridViewControllerDelegate, HUMediaSelectionViewControllerDelegate, HUDetailsPresentationDelegateHost>

@property (readonly, nonatomic) HUSceneActionEditorItemManager *itemManager;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView;
@property (copy, nonatomic) NSString *editingName;
@property (readonly, nonatomic) NSString *savedName;
@property (readonly, nonatomic) NSMutableDictionary *actionGridViewControllersByEditorType;
@property (nonatomic) BOOL hasViewEverAppeared;
@property (nonatomic) BOOL showCancelButton;
@property (weak, nonatomic) id<HUSceneEditorDelegate> sceneEditorDelegate;
@property (copy, nonatomic) NSSet *prioritizedServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

+ (BOOL)adoptsDefaultGridLayoutMargins;

- (void)viewDidLoad;
- (void)_done:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)commitChanges;
- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)nameAndIconEditorCellDidTapIcon:(id)a0;
- (void)iconPickerDidCancel:(id)a0;
- (void)iconPicker:(id)a0 didPickIconDescriptor:(id)a1;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (id)placeholderTextForTextField:(id)a0 item:(id)a1;
- (id)currentTextForTextField:(id)a0 item:(id)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (id)childViewControllersToPreload;
- (void)itemManagerDidUpdate:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)a0;
- (id)mediaSelectionViewController:(id)a0 messageForMediaPickerUnavailableReason:(long long)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)_validateDoneButton;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)serviceGridViewController:(id)a0 didTapItem:(id)a1;
- (id)defaultTextForTextField:(id)a0 item:(id)a1;
- (id)initWithActionSetBuilder:(id)a0 mode:(unsigned long long)a1;
- (void)sceneServicePickerDidFinish:(id)a0;
- (id)contentConfigurationForHeaderViewAtSectionIndex:(unsigned long long)a0;
- (BOOL)_allowEditingNameAndIcon;
- (void)_updateActionSetBuilderName;
- (id)_actionGridViewControllerForEditorType:(unsigned long long)a0;
- (void)_changeServices:(id)a0;
- (void)_testScene:(id)a0;
- (void)_deleteScene:(id)a0 indexPath:(id)a1;
- (void)_presentMediaSelection;

@end
