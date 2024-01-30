@interface HealthExperienceUI.SharingOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HealthExperienceUI.TapToRadarButtonDisplaying> {
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ healthStore;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)ttrButtonTapped;

@end
