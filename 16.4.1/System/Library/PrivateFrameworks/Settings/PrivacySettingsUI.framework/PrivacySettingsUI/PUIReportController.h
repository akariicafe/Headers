@class PUIReportSensorManager, PSSpecifier, NSArray, PUITrackingReportManager;

@interface PUIReportController : PSListController <PUIOnboardingCellDelegate>

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

- (void)didBecomeActive;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)controllerMode;
- (BOOL)appAccessHasData;
- (id)appNetworkActivityGroupSpecifiers;
- (id)dataAccessGroupSpecifiers;
- (id)dataAccessSpecifiers;
- (void)dataDidChange;
- (void)didTapOnboardingCellLink:(id)a0;
- (void)didTapSave;
- (void)didTapTurnOffAppPrivacyReport;
- (void)didTapTurnOnAppPrivacyReport;
- (BOOL)eitherSourceHasData;
- (id)headerSpecifiers;
- (BOOL)isRecordActivityEnabled;
- (id)isRecordActivityEnabled:(id)a0;
- (id)mostContactedDomainsGroupSpecifiers;
- (void)presentAboutController;
- (void)reloadAppAccessHasDataWithCompletion:(id /* block */)a0;
- (void)reloadAppAndTrackingData;
- (void)reloadAppNetworkActivitySpecifiersWithCompletion:(id /* block */)a0;
- (void)reloadMostContactedDomainsSpecifiersWithCompletion:(id /* block */)a0;
- (void)reloadSensorAndNetworkSpecifiersAnimated:(BOOL)a0;
- (void)reloadWebsiteNetworkActivitySpecifiersWithCompletion:(id /* block */)a0;
- (id)saveAppActivityFooterText;
- (void)setRecordActivityEnabled:(id)a0 specifier:(id)a1;
- (id)specifiersForAppPrivacyReport;
- (id)specifiersForRecordAppActivity;
- (id)websiteNetworkActivityGroupSpecifiers;

@end
