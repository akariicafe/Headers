@class HKElectrocardiogram, HRElectrocardiogramReportGenerator, NSMutableArray, WDElectrocardiogramReportDataSource;
@protocol HKDataMetadataViewControllerDelegate;

@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController <HKDataMetadataDeletionSectionDelegate, HKElectrocardiogramMetadataViewDelegate>

@property (nonatomic) BOOL firstViewDidLayoutSubviews;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (weak, nonatomic) id<HKDataMetadataViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) WDElectrocardiogramReportDataSource *reportDataSource;
@property (retain, nonatomic) HRElectrocardiogramReportGenerator *reportGenerator;
@property (nonatomic) BOOL actionsEnabled;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)shareButtonTapped:(id)a0;
- (void)electrocardiogramMetadataViewDidTapDetailButton:(id)a0;
- (void)electrocardiogramMetadataViewDidSelectShareRow:(id)a0;
- (id)electrocardiogramMetadataView:(id)a0 regulatedBodyTextForSample:(id)a1;
- (id)initWithSample:(id)a0 delegate:(id)a1;
- (void)deletionSectionDidSelectRow:(id)a0;
- (void)_loadSections;
- (void)_localeOrDisplayTypeChange:(id)a0;
- (BOOL)_addSectionIfNonNull:(id)a0;
- (void)_reloadElectrocardiogramMetadataTableHeaderView;
- (long long)sampleAlgorithmVersion;
- (id)_electrocardiogramMetadataContainerView;
- (void)deleteSampleTriggeredBySection:(id)a0;
- (void)presentPDFViewController;
- (BOOL)electrocardiogramMetadataViewShouldShowShareRow:(id)a0;

@end
