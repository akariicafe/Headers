@interface HealthExperienceUI.SharedProfileOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <CNContactViewControllerDelegate, HealthExperienceUI.TapToRadarButtonDisplaying, HealthExperienceUI.CustomNavigationBarPresenting> {
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ providedHealthExperienceStore;
    void /* unknown type, empty encoding */ providedPresentation;
    void /* unknown type, empty encoding */ sharedProfileOverviewDataSource;
    void /* unknown type, empty encoding */ navigationBarTitleView;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ fadeView;
    void /* unknown type, empty encoding */ gradientSubscriber;
    void /* unknown type, empty encoding */ profileGradientsProvider;
}

- (void)optionsButtonTapped:(id)a0;
- (void)dismissContactsViewController;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)ttrButtonTapped;
- (void)backButtonTapped:(id)a0;

@end
