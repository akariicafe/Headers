@interface HealthExperienceUI.EditFavoritesTableViewController : HealthExperienceUI.CompoundDataSourceViewController <WDFavoriteDisplayTypesControllerObserver> {
    void /* unknown type, empty encoding */ editFavoritesDataSource;
    void /* unknown type, empty encoding */ favoritesController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentedControl;
}

- (void)favoriteDisplayTypesControllerDidUpdate:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)doneButtonTapped;
- (void)segmentedControlChanged;
- (void)viewDidLoad;

@end
