@interface HealthExperienceUI.PreviewSharedProfileOverviewViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HealthExperienceUI.TapToRadarButtonDisplaying> {
    void /* unknown type, empty encoding */ providedPresentation;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ fadeView;
    void /* unknown type, empty encoding */ gradientSubscriber;
    void /* unknown type, empty encoding */ profileGradientsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewSummariesLabel;
}

- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)doneButtonTapped:(id)a0;
- (void)ttrButtonTapped;

@end
