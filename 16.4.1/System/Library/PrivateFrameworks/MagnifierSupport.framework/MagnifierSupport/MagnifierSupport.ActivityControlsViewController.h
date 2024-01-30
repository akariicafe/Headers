@interface MagnifierSupport.ActivityControlsViewController : UIViewController <UITableViewDelegate, UITextFieldDelegate> {
    void /* unknown type, empty encoding */ activityCreatedDelegate;
    void /* unknown type, empty encoding */ minPrimaryControls;
    void /* unknown type, empty encoding */ maxPrimaryControls;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filtersCollectionCustomizationViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_peopleDetectionSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doorDetectionSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageCaptionsSettingsViewController;
    void /* unknown type, empty encoding */ languageTranslator;
    void /* unknown type, empty encoding */ nameTitle;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleDoneButtonTap:(id)a0;

@end
