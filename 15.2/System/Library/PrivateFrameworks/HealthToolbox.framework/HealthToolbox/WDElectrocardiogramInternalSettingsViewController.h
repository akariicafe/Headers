@class UIPickerView, HRElectrocardiogramOnboardingManager, NSArray, NPSManager, HKKeyValueDomain, HKHealthStore, HKHeartRhythmAvailability, NSDictionary, HKHostingAreaLayoutView, NSString, HKDateCache;

@interface WDElectrocardiogramInternalSettingsViewController : HKTableViewController <UIPickerViewDelegate, UIPickerViewDataSource, HRElectrocardiogramOnboardingManagerDelegate, HKHeartRhythmAvailabilityObserver>

@property (readonly, nonatomic) NPSManager *syncManager;
@property (retain, nonatomic) NSArray *demoResultKeys;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (retain, nonatomic) HRElectrocardiogramOnboardingManager *onboardingManager;
@property (readonly, nonatomic) HKKeyValueDomain *keyValueDomain;
@property (retain, nonatomic) NSArray *keyValueDomainContentKeys;
@property (retain, nonatomic) NSDictionary *keyValueDomainContent;
@property (readonly, nonatomic) NSArray *allDemoResults;
@property (readonly, nonatomic) UIPickerView *resultPicker;
@property (readonly, nonatomic) HKHostingAreaLayoutView *pickerInputView;
@property (readonly, nonatomic) NSArray *allAlgorithmVersions;
@property (retain, nonatomic) UIPickerView *algorithmVersionPicker;
@property (retain, nonatomic) HKHostingAreaLayoutView *algorithmVersionPickerInputView;
@property (nonatomic, getter=isDeletingSamples) BOOL deletingSamples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)heartRhythmAvailabilityDidUpdate;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_buttonCellForTableView:(id)a0;
- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (id)initWithHealthStore:(id)a0 dateCache:(id)a1;
- (void)_startUpgrade;
- (void)didTapOnElectrocardiogram:(id)a0;
- (unsigned long long)_overrideAlgorithmVersion;
- (void)keyboardDidDismiss:(id)a0;
- (void)reloadKeyValueDomainContent;
- (void)updateCellIndexNumberLabels;
- (id)_styleValue1CellForTableView:(id)a0 inputView:(id)a1;
- (id)_styleSubtitleCellForTableView:(id)a0;
- (id)displayableDescriptionFromValue:(id)a0;
- (void)_startFullOnboarding;
- (void)_presentAvailabilityInternalSettingsViewController;
- (id)_onboardingCompletedAlgorithmVersion;
- (void)_saveOverrideAlgorithmVersionIfNeeded:(long long)a0;
- (void)_presentOnboardingManagerWithOnboardingType:(long long)a0;
- (void)clearCellIndexNumberLabels;

@end
