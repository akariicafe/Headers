@interface HealthRecordsUI.RecordCategoryViewController : UIViewController <UISearchResultsUpdating, UISearchControllerDelegate> {
    void /* unknown type, empty encoding */ category;
    void /* unknown type, empty encoding */ healthRecordsStore;
    void /* unknown type, empty encoding */ preferredSegment;
    void /* unknown type, empty encoding */ factory;
    void /* unknown type, empty encoding */ countProvider;
    void /* unknown type, empty encoding */ recordCanceller;
    void /* unknown type, empty encoding */ aToZCanceller;
    void /* unknown type, empty encoding */ recordCount;
    void /* unknown type, empty encoding */ currentViewController;
    void /* unknown type, empty encoding */ displayMode;
    void /* unknown type, empty encoding */ isSearching;
    void /* unknown type, empty encoding */ isModePickerHidden;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modePicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resultViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationPalette;
    void /* unknown type, empty encoding */ $__lazy_storage_$_latestViewContoller;
    void /* unknown type, empty encoding */ $__lazy_storage_$_udcListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lastUpdatedViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_alphabeticalViewController;
}

- (void)didDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didTapEditButton;
- (void)modePickerDidChange:(id)a0;
- (void)tapToRadar:(id)a0;

@end
