@interface HealthExperienceUI.ProfileViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ restorationRowToLoad;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ navigationBarTitleView;
}

- (void)restoreUserActivityState:(id)a0;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismissProfile:(id)a0;

@end
