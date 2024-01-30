@class PUIReportSensorManager, PSSpecifier, NSArray, PUITrackingReportManager;

@interface PUIReportController : PSListController <PUITrackerOnboardingCellDelegate>

@property (retain, nonatomic) PUITrackingReportManager *reportManager;
@property (retain, nonatomic) PUIReportSensorManager *sensorManager;
@property (nonatomic) BOOL reportEnabled;
@property (nonatomic) BOOL hasData;
@property (retain, nonatomic) PSSpecifier *saveAppActivitySpecifier;
@property (nonatomic) unsigned long long currentControllerMode;
@property (retain, nonatomic) NSArray *learnMoreHeader;
@property (retain, nonatomic) NSArray *sensorActivityHeader;
@property (retain, nonatomic) NSArray *sensorActivityRows;
@property (retain, nonatomic) NSArray *appNetworkActivityHeader;
@property (retain, nonatomic) NSArray *appNetworkActivityRows;
@property (retain, nonatomic) NSArray *appNetworkActivityRowsAwaitingDisplay;
@property (retain, nonatomic) NSArray *websiteNetworkActivityHeader;
@property (retain, nonatomic) NSArray *websiteNetworkActivityRows;
@property (retain, nonatomic) NSArray *websiteNetworkActivityRowsAwaitingDisplay;
@property (retain, nonatomic) NSArray *domainNetworkActivityHeader;
@property (retain, nonatomic) NSArray *domainNetworkActivityRows;
@property (retain, nonatomic) NSArray *domainNetworkActivityRowsAwaitingDisplay;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dealloc;
- (void)didBecomeActive;
- (unsigned long long)controllerMode;
- (id)headerSpecifiers;
- (void)dataDidChange;
- (BOOL)isRecordActivityEnabled;
- (BOOL)eitherSourceHasData;
- (id)specifiersForAppPrivacyReport;
- (id)specifiersForRecordAppActivity;
- (void)reloadAppAndTrackingData;
- (void)setRecordActivityEnabled:(id)a0 specifier:(id)a1;
- (id)isRecordActivityEnabled:(id)a0;
- (id)saveAppActivityFooterText;
- (void)didTapSave;
- (void)reloadSensorAndNetworkSpecifiersAnimated:(BOOL)a0;
- (id)dataAccessSpecifiers;
- (void)presentAboutController;
- (void)didTapTurnOnAppPrivacyReport;
- (id)dataAccessGroupSpecifiers;
- (id)appNetworkActivityGroupSpecifiers;
- (id)websiteNetworkActivityGroupSpecifiers;
- (id)mostContactedDomainsGroupSpecifiers;
- (void)didTapTurnOffAppPrivacyReport;
- (void)reloadAppNetworkActivitySpecifiersWithCompletion:(id /* block */)a0;
- (void)reloadWebsiteNetworkActivitySpecifiersWithCompletion:(id /* block */)a0;
- (void)reloadMostContactedDomainsSpecifiersWithCompletion:(id /* block */)a0;
- (void)reloadAppAccessHasDataWithCompletion:(id /* block */)a0;
- (BOOL)appAccessHasData;
- (void)cellDidTapLearnMore:(id)a0;

@end
