@class SCLSchoolMode, NRDevice, SCLActiveSpecifierDataSource, SCLScheduleSettings, SCLSettingsViewModel;

@interface SCLPhoneSettingsViewController : SCLListViewController

@property (retain, nonatomic) SCLSchoolMode *schoolMode;
@property (retain, nonatomic) SCLActiveSpecifierDataSource *activeSpecifierSource;
@property (retain, nonatomic) SCLSettingsViewModel *viewModel;
@property (retain, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (nonatomic, getter=isObservingViewModel) BOOL observingViewModel;
@property (nonatomic, getter=isObservingApplicationLifecycle) BOOL observingApplicationLifecycle;
@property (retain, nonatomic) NRDevice *device;

- (void)applicationDidBecomeActive:(id)a0;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadSpecifierSource;
- (void)endObservingViewModel:(id)a0;
- (void)loadSchoolModeIfNeeded;
- (id)viewModelForSettings:(id)a0;
- (void)beginObservingViewModel:(id)a0;
- (void)scheduleDidChange;
- (void)updateSchedule;

@end
