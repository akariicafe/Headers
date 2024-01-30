@class OBBoldTrayButton, NSString, PXSharedLibraryIncludedPeopleDataSourceManager, UITableViewHeaderFooterView, PXSharedLibraryIncludedPeopleTableViewCell, UITableViewCell, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantPeopleViewController : OBTableWelcomeController <PXPhotoLibraryUIChangeObserver, PXAssistantViewController, PXPeopleFlowDelegate, PXSectionedDataSourceManagerObserver, PHPickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
    OBBoldTrayButton *_continueButton;
    UITableViewHeaderFooterView *_peopleSectionHeaderView;
    UITableViewHeaderFooterView *_peopleSectionFooterView;
    PXSharedLibraryIncludedPeopleTableViewCell *_peopleCell;
    UITableViewCell *_buttonCell;
    BOOL _pickerWasPresentedFromContinueButton;
    BOOL _wantsToContinueToNextStep;
}

@property (readonly, nonatomic) NSString *textForFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fetchedPeople:(id)a0 sortedByLocalIdentifiers:(id)a1;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)done:(id)a0;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)continueButtonTapped:(id)a0;
- (void)_updateFooterText;
- (void)_advanceToNextStep;
- (void)_fixupStalePersonForUUID:(id)a0 loneParticipantInfo:(id)a1;
- (BOOL)_hasPeople;
- (BOOL)_isPeopleCellRepresentedAtSection:(long long)a0;
- (void)_presentPickerForInfos:(id)a0;
- (void)_suggestedStartDateChanged;
- (void)_updateButtonCell;
- (void)_updateContinueButton;
- (void)_updateHeaderDetailText;
- (void)addLaterButtonTapped:(id)a0;
- (id)alertConfigurationForIdentifyingPeopleInfos:(id)a0 action:(id /* block */)a1;
- (void)completeRulesStep;
- (id)peopleInfosToIdentifyInDataSource:(id)a0;
- (void)setupLibraryChangeListening;
- (void)updateWithPerson:(id)a0 loneParticipantInfo:(id)a1;

@end
