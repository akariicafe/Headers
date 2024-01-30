@class HKElectrocardiogram, HRElectrocardiogramReportGenerator, NSMutableArray, WDElectrocardiogramReportDataSource;
@protocol HKDataMetadataViewControllerDelegate;

@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController <HKDataMetadataDeletionSectionDelegate, HKElectrocardiogramMetadataViewDelegate>

@property (nonatomic) BOOL firstViewDidLayoutSubviews;
@property (readonly, nonatomic) long long activeAlgorithmVersion;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (weak, nonatomic) id<HKDataMetadataViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) WDElectrocardiogramReportDataSource *reportDataSource;
@property (retain, nonatomic) HRElectrocardiogramReportGenerator *reportGenerator;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL actionsEnabled;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_loadSections;
- (void)shareButtonTapped:(id)a0;
- (void)presentPDFViewController;
- (BOOL)_addSectionIfNonNull:(id)a0;
- (void)_localeOrDisplayTypeChange:(id)a0;
- (void)deletionSectionDidSelectRow:(id)a0;
- (id)electrocardiogramMetadataView:(id)a0 regulatedBodyTextForSample:(id)a1;
- (void)electrocardiogramMetadataViewDidSelectShareRow:(id)a0;
- (void)electrocardiogramMetadataViewDidTapDetailButton:(id)a0;
- (void)deleteSampleTriggeredBySection:(id)a0;
- (id)_electrocardiogramMetadataContainerView;
- (long long)_fetchActiveAlgorithmVersionWithHealthStore:(id)a0;
- (void)_reloadElectrocardiogramMetadataTableHeaderView;
- (BOOL)electrocardiogramMetadataViewShouldShowShareRow:(id)a0;
- (id)featureVersionFromUpdateVersion:(id)a0;
- (id)initWithSample:(id)a0 delegate:(id)a1 mode:(long long)a2 activeAlgorithmVersion:(id)a3;
- (long long)sampleAlgorithmVersion;

@end
