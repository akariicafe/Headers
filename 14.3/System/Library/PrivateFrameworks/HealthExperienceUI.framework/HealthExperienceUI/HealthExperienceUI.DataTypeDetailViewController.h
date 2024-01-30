@class NSString;

@interface HealthExperienceUI.DataTypeDetailViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ providedHealthToolbox;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ chartContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_personalizedFeedTrainer;
}

@property (nonatomic, readonly) NSString *description;

- (void)addDataTapped:(id)a0;
- (void)debugActionGestureRecognized;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;

@end
