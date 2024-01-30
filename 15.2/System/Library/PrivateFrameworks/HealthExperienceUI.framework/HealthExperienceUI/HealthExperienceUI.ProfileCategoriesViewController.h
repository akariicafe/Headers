@interface HealthExperienceUI.ProfileCategoriesViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ providedHealthExperienceStore;
    void /* unknown type, empty encoding */ categoriesDataSource;
    void /* unknown type, empty encoding */ navigationBarTitleView;
}

- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)restoreUserActivityState:(id)a0;

@end
