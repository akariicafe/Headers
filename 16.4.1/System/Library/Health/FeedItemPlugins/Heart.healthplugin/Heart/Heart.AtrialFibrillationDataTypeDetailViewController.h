@interface Heart.AtrialFibrillationDataTypeDetailViewController : WDAtrialFibrillationEventOverviewViewController {
    void /* unknown type, empty encoding */ consumedHealthExperienceStore;
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ objectType;
    void /* unknown type, empty encoding */ displayType;
    void /* unknown type, empty encoding */ viewControllerFactory;
    void /* unknown type, empty encoding */ profileType;
    void /* unknown type, empty encoding */ favoritesObserver;
    void /* unknown type, empty encoding */ favoritesDataSource;
    void /* unknown type, empty encoding */ featureStatusDataSourceAdaptor;
    void /* unknown type, empty encoding */ allFeatureStatusCellsFromFeedItems;
    void /* unknown type, empty encoding */ cancellables;
}

@property (nonatomic) BOOL favorited;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithUsingInsetStyling:(BOOL)a0;
- (BOOL)isFavorited;
- (void)didSelectRegulatoryRow;
- (void)featureStatusCellTappedAtIndexPath:(id)a0;
- (id)featureStatusCells;
- (id)featureStatusFooterView;
- (id)initWithDisplayType:(id)a0 profile:(id)a1 mode:(long long)a2;
- (id)makeInternalSettingsControllerWithHealthStore:(id)a0;
- (void)recomputeTotalSampleCount;
- (void)showAddDataVC;

@end
