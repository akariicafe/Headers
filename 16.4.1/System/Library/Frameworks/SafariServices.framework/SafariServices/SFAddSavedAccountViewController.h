@class SFAccountNoteTableViewCell, NSString, SFEditableTableViewCell, UIBarButtonItem;
@protocol SFAddSavedAccountViewControllerDelegate;

@interface SFAddSavedAccountViewController : UITableViewController <UITextFieldDelegate, SFAccountNoteTableViewCellDelegate> {
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    SFAccountNoteTableViewCell *_notesCell;
    NSString *_notesForEditing;
    NSString *_suggestedDomain;
    BOOL _didPreFillAndFocusFields;
}

@property (nonatomic) BOOL shouldPreFillStrongPassword;
@property (weak, nonatomic) id<SFAddSavedAccountViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidBeginEditing:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)_cancelBarButtonItemTapped:(id)a0;
- (void)_doneBarButtonItemTapped:(id)a0;
- (void)_preFillStrongPasswordIfRequested;
- (void)_savePasswordAndDismiss;
- (void)_textFieldChanged:(id)a0;
- (void)_updateTextInputSuggestionsForPasswordField;
- (void)_updateTextInputSuggestionsForUserNameField;
- (void)_updateTextSuggestionsForTextField:(id)a0;
- (id)initWithSuggestedDomain:(id)a0;

@end
