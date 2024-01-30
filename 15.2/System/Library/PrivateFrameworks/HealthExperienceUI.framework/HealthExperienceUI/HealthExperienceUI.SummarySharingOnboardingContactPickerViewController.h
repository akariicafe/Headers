@interface HealthExperienceUI.SummarySharingOnboardingContactPickerViewController : UIViewController <HKSummarySharingEntryStoreDelegate, CNAutocompleteSearchConsumer, CNAutocompleteResultsTableViewControllerDelegate, UISearchControllerDelegate, UISearchBarDelegate> {
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ sharingEntryStore;
    void /* unknown type, empty encoding */ selectionFlowContext;
    void /* unknown type, empty encoding */ _reachabilityQueryState;
    void /* unknown type, empty encoding */ reachabilityQueryStateCancellable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchController;
    void /* unknown type, empty encoding */ autocompleteResults;
    void /* unknown type, empty encoding */ reachableContactIdentifiers;
    void /* unknown type, empty encoding */ resultsTableViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_splashView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_splashContainerView;
    void /* unknown type, empty encoding */ resultsTableView;
    void /* unknown type, empty encoding */ searchManager;
    void /* unknown type, empty encoding */ currentSearchTaskID;
    void /* unknown type, empty encoding */ isInitialReachabilityQuery;
    void /* unknown type, empty encoding */ foundSearchResults;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ selectedRecipient;
}

- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)summarySharingEntryStore:(id)a0 didUpdateReachabilityStatus:(id)a1 error:(id)a2;
- (id)autocompleteResultsController:(id)a0 preferredRecipientForRecipient:(id)a1;
- (void)autocompleteResultsController:(id)a0 tintColorForRecipient:(id)a1 completion:(id /* block */)a2;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(long long)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
