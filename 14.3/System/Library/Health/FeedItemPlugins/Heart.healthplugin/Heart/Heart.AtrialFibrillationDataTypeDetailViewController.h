@interface Heart.AtrialFibrillationDataTypeDetailViewController : WDAtrialFibrillationEventOverviewViewController {
    void /* unknown type, empty encoding */ consumedHealthExperienceStore;
    void /* unknown type, empty encoding */ displayType;
    void /* unknown type, empty encoding */ favoritesController;
    void /* unknown type, empty encoding */ viewControllerFactory;
    void /* unknown type, empty encoding */ profileView;
    void /* unknown type, empty encoding */ profileInformationDataSource;
    void /* unknown type, empty encoding */ profileInformationSink;
}

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithUsingInsetStyling:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (double)adjustedSafeAreaInsetTop;
- (void)isFavorited:(BOOL)a0;
- (void)showAddDataVC;

@end
