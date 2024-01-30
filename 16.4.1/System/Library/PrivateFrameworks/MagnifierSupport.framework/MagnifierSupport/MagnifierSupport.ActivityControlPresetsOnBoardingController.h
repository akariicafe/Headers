@interface MagnifierSupport.ActivityControlPresetsOnBoardingController : OBTableWelcomeController <UITableViewDelegate> {
    void /* unknown type, empty encoding */ currentActivityName;
    void /* unknown type, empty encoding */ isIntermediateActivity;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filtersCollectionCustomizationViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_peopleDetectionSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doorDetectionSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageCaptionsSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraTypeSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_brightnessFilterViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contrastFilterViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_zoomViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flashlightViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colorFilterViewController;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ heightConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;

@end
