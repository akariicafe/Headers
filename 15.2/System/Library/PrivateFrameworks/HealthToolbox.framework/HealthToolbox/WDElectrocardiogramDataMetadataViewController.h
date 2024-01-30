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

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)shareButtonTapped:(id)a0;
- (void)electrocardiogramMetadataViewDidTapDetailButton:(id)a0;
- (void)electrocardiogramMetadataViewDidSelectShareRow:(id)a0;
- (id)electrocardiogramMetadataView:(id)a0 regulatedBodyTextForSample:(id)a1;
- (void)deletionSectionDidSelectRow:(id)a0;
- (void)_loadSections;
- (void)_localeOrDisplayTypeChange:(id)a0;
- (BOOL)_addSectionIfNonNull:(id)a0;
- (id)initWithSample:(id)a0 delegate:(id)a1 mode:(long long)a2 activeAlgorithmVersion:(id)a3;
- (long long)_fetchActiveAlgorithmVersionWithHealthStore:(id)a0;
- (void)_reloadElectrocardiogramMetadataTableHeaderView;
- (long long)sampleAlgorithmVersion;
- (id)_electrocardiogramMetadataContainerView;
- (void)deleteSampleTriggeredBySection:(id)a0;
- (void)presentPDFViewController;
- (BOOL)electrocardiogramMetadataViewShouldShowShareRow:(id)a0;

@end
