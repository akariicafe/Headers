@class AFSettingsConnection, PSFitnessPlusAnalyticsConsentCoordinator, HKHealthStore, NSArray, PSSpecifier, PrefsUILinkLabel;

@interface ProblemReportingController : PSListController <VTUISiriDataSharingOptInPresentationDelegate> {
    PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;
    PSSpecifier *_filesystemMetadataSnapshotSpecifier;
    NSArray *_appActivitySpecifiers;
    NSArray *_iCloudSpecifiers;
    PSSpecifier *_spinnerSpecifier;
}

@property (retain, nonatomic) PSFitnessPlusAnalyticsConsentCoordinator *fitnessPlusAnalyticsConsentCoordinator;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) AFSettingsConnection *assistantSettingsConnection;
@property (retain, nonatomic) NSArray *improveSiriSpecifiers;
@property (retain, nonatomic) NSArray *automatedFeedbackSpecifiers;
@property (nonatomic) BOOL shouldShareHealthRecordsData;
@property (readonly) PSSpecifier *spinnerSpecifier;
@property (readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property (readonly) NSArray *appActivitySpecifiers;
@property (readonly) NSArray *fitnessPlusDataSpecifiers;
@property (readonly) NSArray *healthDataSpecifiers;
@property (readonly) NSArray *healthRecordsDataSpecifiers;
@property (readonly) NSArray *wheelchairDataSpecifiers;
@property (readonly) NSArray *handwashingDataSpecifiers;

+ (BOOL)isProblemReportingEnabled;

- (id)specifiers;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)snapshot:(id)a0;
- (void).cxx_destruct;
- (id)_analyticsSpecifiers;
- (void)dismissAboutSheet:(id)a0;
- (void)setProblemReportingEnabled:(BOOL)a0;
- (id)shouldShareAppActivityWithAppDevelopers;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)a0 specifier:(id)a1;
- (id)iCloudSpecifiers;
- (void)setBoolValue:(BOOL)a0 forIdMSConfigKey:(id)a1 completion:(id /* block */)a2;
- (void)showAboutImproveSiriAnalyticsSheet;
- (void)setImproveSiriAndDictationValue:(id)a0 specifier:(id)a1;
- (BOOL)shouldShowiCloudSpecifiersForAccount:(id)a0;
- (id)getCurrentImproveSiriAndDictationValueForSpecifier:(id)a0;
- (id)shouldShareiCloudAnalytics:(id)a0;
- (void)setShouldShareiCloudAnalytics:(id)a0 specifier:(id)a1;
- (BOOL)shouldShowFitnessPlusSpecifiers;
- (void)setShouldShareFitnessPlusData:(id)a0 specifier:(id)a1;
- (id)shouldShareFitnessPlusDataForSpecifier:(id)a0;
- (void)setShouldShareHealthData:(id)a0 specifier:(id)a1;
- (id)shouldShareHealthDataForSpecifier:(id)a0;
- (void)setShouldShareHealthRecordsData:(id)a0 specifier:(id)a1;
- (id)shouldShareHealthRecordsDataForSpecifier:(id)a0;
- (void)_handleUpdateForSpecifierID:(id)a0 value:(id)a1 error:(id)a2;
- (void)setShouldShareWheelchairData:(id)a0 specifier:(id)a1;
- (id)shouldShareWheelchairDataForSpecifier:(id)a0;
- (void)setShouldShareHandwashingData:(id)a0 specifier:(id)a1;
- (id)shouldShareHandwashingDataForSpecifier:(id)a0;
- (void)setProblemReportingEnabled:(id)a0 forSpecifier:(id)a1;
- (id)problemReportingEnabled:(id)a0;
- (void)checkDiagnosticsSessionAvailability;
- (void)updateiCloudAnalyticsForSpecifierID:(id)a0;
- (void)updateHealthRecordsPreferenceForSpecifierID:(id)a0;
- (void)launchDiagnosticsSession:(id)a0;
- (void)showAboutSheetWithTitle:(id)a0 content:(id)a1;
- (void)showAboutAnalyticsSheet;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutiCloudAnalyticsSheet;
- (void)showAboutFitnessPlusDataSheet;
- (void)showAboutHealthDataSheet;
- (void)showAboutHealthRecordsDataSheet;
- (void)showAboutWheelchairDataSheet;
- (void)showAboutHandwashingDataSheet;
- (void)automatedFeedbackLinkTapped;
- (id)automatedFeedbackEnabled:(id)a0;
- (void)setAutomatedFeedbackEnabled:(id)a0 specifier:(id)a1;

@end
