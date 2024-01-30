@class NSString, SFEditableTableViewCell, UIBarButtonItem;
@protocol SFAddPasswordViewControllerDelegate;

@interface SFAddPasswordViewController : UITableViewController <UITextFieldDelegate> {
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    NSString *_suggestedDomain;
}

@property (weak, nonatomic) id<SFAddPasswordViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_textFieldChanged:(id)a0;
- (void)_cancelBarButtonItemTapped:(id)a0;
- (void)_doneBarButtonItemTapped:(id)a0;
- (void)_savePasswordAndDismiss;
- (void)_updateTextSuggestionsForTextField:(id)a0;
- (void)_updateTextInputSuggestionsForUserNameField;
- (void)_updateTextInputSuggestionsForPasswordField;
- (id)initWithSuggestedDomain:(id)a0;

@end
