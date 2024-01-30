@interface HealthExperienceUI.SearchViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <UISearchResultsUpdating> {
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

- (void)updateSearchResultsForSearchController:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
