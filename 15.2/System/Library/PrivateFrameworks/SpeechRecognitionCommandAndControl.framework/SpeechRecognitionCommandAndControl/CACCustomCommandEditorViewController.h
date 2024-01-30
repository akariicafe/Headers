@class AXSiriShortcutsManager, NSDictionary, NSString, CACSpokenCommandItem, UIBarButtonItem;
@protocol CACCustomCommandEditorViewControllerDelegate;

@interface CACCustomCommandEditorViewController : UITableViewController <UITextFieldDelegate, CACCustomCommandActionViewControllerDelegate, CACCustomCommandApplicationViewControllerDelegate>

@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *editButton;
@property (retain, nonatomic) CACSpokenCommandItem *mutableCommandItem;
@property (retain, nonatomic) AXSiriShortcutsManager *shortcutsManager;
@property (nonatomic) BOOL isInEditingMode;
@property (weak, nonatomic) id<CACCustomCommandEditorViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (nonatomic) BOOL isValidCommandItem;
@property (nonatomic) BOOL isEmptyCommandItem;
@property (nonatomic) BOOL hasEmptySpokenString;
@property (nonatomic) BOOL showsDeleteButton;
@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)cancelAction;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isModalInPresentation;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)editButtonTapped:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)doneButtonTapped:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)_shouldShowDeleteButton;
- (void)saveButtonTapped;
- (BOOL)isNewCommand;
- (void)configureNavItems;
- (BOOL)showAlertIfNeededForAnyError;
- (BOOL)_hasValidSpokenStringWithErrorText:(inout id *)a0;
- (BOOL)_hasValidActionWithErrorText:(inout id *)a0;
- (void)_showErrorAlertWithText:(id)a0;
- (BOOL)showAlertIfNeededForErrorInSpokenString;
- (BOOL)_showAlertIfNeededForAction;
- (BOOL)_commandStringIsValid:(id)a0 checkForLength:(BOOL)a1;
- (void)_updateCommandItemWithText:(id)a0;
- (void)didUpdateCommandItemForActionViewController:(id)a0;
- (void)didDismissActionViewController:(id)a0;
- (void)didUpdateCommandItemForApplicationViewController:(id)a0;

@end
