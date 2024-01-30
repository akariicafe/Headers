@class NSString, SFEditableTableViewCell, UIBarButtonItem;
@protocol SFAddPasswordViewControllerDelegate;

@interface SFAddPasswordViewController : UITableViewController <UITextFieldDelegate> {
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
}

@property (weak, nonatomic) id<SFAddPasswordViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_savePasswordAndDismiss;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_textFieldChanged:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)_cancelBarButtonItemTapped:(id)a0;
- (void)_doneBarButtonItemTapped:(id)a0;
- (void)viewDidLoad;

@end
