@interface HealthExperienceUI.SearchViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <UISearchControllerDelegate, UISearchResultsUpdating> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainStore;
    void /* unknown type, empty encoding */ layoutManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSources;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spotlightSearch;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchResultsCompletionHandler;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchController;
    void /* unknown type, empty encoding */ searchState;
}

- (void)didDismissSearchController:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
