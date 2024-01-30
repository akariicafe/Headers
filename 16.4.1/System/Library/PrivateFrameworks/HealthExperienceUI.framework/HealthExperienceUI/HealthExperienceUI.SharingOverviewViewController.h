@interface HealthExperienceUI.SharingOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HealthExperienceUI.TapToRadarButtonDisplaying> {
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_store;
    void /* unknown type, empty encoding */ syncObserver;
}

- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)ttrButtonTapped;

@end
