@interface Heart.ElectrocardiogramDataTypeDetailViewController : WDElectrocardiogramOverviewViewController {
    void /* unknown type, empty encoding */ consumedHealthExperienceStore;
    void /* unknown type, empty encoding */ objectType;
    void /* unknown type, empty encoding */ displayType;
    void /* unknown type, empty encoding */ viewControllerFactory;
    void /* unknown type, empty encoding */ profileType;
    void /* unknown type, empty encoding */ dataTypeDetailMode;
    void /* unknown type, empty encoding */ favoritesObserver;
    void /* unknown type, empty encoding */ favoritesDataSource;
    void /* unknown type, empty encoding */ cancellables;
}

@property (nonatomic) BOOL favorited;

- (void)viewDidLoad;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithUsingInsetStyling:(BOOL)a0;
- (BOOL)isFavorited;
- (id)initWithDisplayType:(id)a0 profile:(id)a1 mode:(long long)a2;
- (id)createDataProviderWithDisplayType:(id)a0 profile:(id)a1 mode:(long long)a2;
- (void)showAddDataVC;

@end
