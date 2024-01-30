@class HUServiceGroupEditorItemManager, HUServiceGroupEditorGridViewController, NSString;
@protocol HUPresentationDelegate, HUServiceGroupEditorViewControllerDelegate;

@interface HUServiceGroupEditorViewController : HUItemTableViewController <HUNameAndIconEditorCellDelegate, HUServiceGroupEditorGridViewControllerDelegate, HUPresentationDelegateHost>

@property (retain, nonatomic) HUServiceGroupEditorItemManager *itemManager;
@property (readonly, nonatomic) HUServiceGroupEditorGridViewController *serviceGridViewController;
@property (copy, nonatomic) NSString *editingName;
@property (readonly, nonatomic) NSString *savedName;
@property (nonatomic) BOOL hasViewEverAppeared;
@property (weak, nonatomic) id<HUServiceGroupEditorViewControllerDelegate> serviceGroupEditorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

+ (BOOL)adoptsDefaultGridLayoutMargins;

- (void)viewDidLoad;
- (void)_done:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (id)placeholderTextForTextField:(id)a0 item:(id)a1;
- (id)currentTextForTextField:(id)a0 item:(id)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (id)childViewControllersToPreload;
- (void)itemManagerDidUpdate:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (id)initForEditingExistingServiceGroupBuilder:(id)a0;
- (void)_validateDoneButton;
- (void)_updateServiceGroupBuilderName;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)serviceGroupEditorGrid:(id)a0 didUpdateServiceGroupBuilder:(id)a1;
- (id)initForCreatingNewServiceGroupFromServices:(id)a0 home:(id)a1;
- (id)defaultTextForTextField:(id)a0 item:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0 item:(id)a1;

@end
