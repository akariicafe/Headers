@interface HealthExperienceUI.ProfileViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ restorationRowToLoad;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ navigationBarTitleView;
}

- (void)restoreUserActivityState:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dismissProfile:(id)a0;

@end
