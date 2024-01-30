@class PrefsUILinkLabel, AFSettingsConnection, PSFitnessPlusAnalyticsConsentCoordinator, HKHealthStore, NSArray, CIDVUIIdentityProofingDataSharingFlowManager, PSSpecifier;

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
@property (retain, nonatomic) CIDVUIIdentityProofingDataSharingFlowManager *identityProofingDataSharingManager;
@property (retain, nonatomic) NSArray *improveSiriSpecifiers;
@property (retain, nonatomic) NSArray *automatedFeedbackSpecifiers;
@property (nonatomic) BOOL shouldShareHealthRecordsData;
@property (readonly) PSSpecifier *spinnerSpecifier;
@property (readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property (readonly) NSArray *baseSpecifiers;
@property (readonly) NSArray *appActivitySpecifiers;
@property (readonly) NSArray *fitnessPlusDataSpecifiers;
@property (readonly) NSArray *healthDataSpecifiers;
@property (readonly) NSArray *healthRecordsDataSpecifiers;
@property (readonly) NSArray *wheelchairDataSpecifiers;
@property (readonly) NSArray *handwashingDataSpecifiers;
@property (readonly) NSArray *safetyDataSpecifiers;
@property (readonly) NSArray *identityVerificationDataSpecifiers;

+ (BOOL)isProblemReportingEnabled;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (BOOL)shouldShowFitnessPlusSpecifiers;
- (void)showAboutHealthRecordsDataSheet;
- (void)_handleUpdateForSpecifierID:(id)a0 value:(id)a1 error:(id)a2;
- (id)analyticsSpecifiersIncludingIndependentSpecifiers:(BOOL)a0 includeDependentSpecifiers:(BOOL)a1;
- (id)automatedFeedbackEnabled:(id)a0;
- (void)automatedFeedbackLinkTapped;
- (void)checkDiagnosticsSessionAvailability;
- (void)dismissAboutSheet:(id)a0;
- (id)getCurrentImproveSiriAndDictationValueForSpecifier:(id)a0;
- (id)iCloudSpecifiers;
- (BOOL)isAppAndAccessoryAnalyticsAllowedFeatureEnabled;
- (void)launchDiagnosticsSession:(id)a0;
- (id)problemReportingEnabled:(id)a0;
- (void)setAutomatedFeedbackEnabled:(id)a0 specifier:(id)a1;
- (void)setBoolValue:(BOOL)a0 forIdMSConfigKey:(id)a1 completion:(id /* block */)a2;
- (void)setImproveSiriAndDictationValue:(id)a0 specifier:(id)a1;
- (void)setProblemReportingEnabled:(BOOL)a0;
- (void)setProblemReportingEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)a0 specifier:(id)a1;
- (void)setShouldShareFitnessPlusData:(id)a0 specifier:(id)a1;
- (void)setShouldShareHandwashingData:(id)a0 specifier:(id)a1;
- (void)setShouldShareHealthData:(id)a0 specifier:(id)a1;
- (void)setShouldShareHealthRecordsData:(id)a0 specifier:(id)a1;
- (void)setShouldShareIdentityVerificationData:(id)a0 specifier:(id)a1;
- (void)setShouldShareSafetyData:(id)a0 specifier:(id)a1;
- (void)setShouldShareWheelchairData:(id)a0 specifier:(id)a1;
- (void)setShouldShareiCloudAnalytics:(id)a0 specifier:(id)a1;
- (id)shouldShareAppActivityWithAppDevelopers;
- (id)shouldShareFitnessPlusDataForSpecifier:(id)a0;
- (id)shouldShareHandwashingDataForSpecifier:(id)a0;
- (id)shouldShareHealthDataForSpecifier:(id)a0;
- (id)shouldShareHealthRecordsDataForSpecifier:(id)a0;
- (id)shouldShareIdentityVerificationData:(id)a0;
- (id)shouldShareSafetyDataForSpecifier:(id)a0;
- (id)shouldShareWheelchairDataForSpecifier:(id)a0;
- (id)shouldShareiCloudAnalytics:(id)a0;
- (BOOL)shouldShowIdentityVerificationSpecifiers;
- (BOOL)shouldShowiCloudSpecifiersForAccount:(id)a0;
- (void)showAboutAnalyticsSheet;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutFitnessPlusDataSheet;
- (void)showAboutHandwashingDataSheet;
- (void)showAboutHealthDataSheet;
- (void)showAboutIdentityVerificationDataSheet;
- (void)showAboutImproveSiriAnalyticsSheet;
- (void)showAboutSafetyDataSheet;
- (void)showAboutSheetWithTitle:(id)a0 content:(id)a1;
- (void)showAboutWheelchairDataSheet;
- (void)showAboutiCloudAnalyticsSheet;
- (void)snapshot:(id)a0;
- (void)updateHealthRecordsPreferenceForSpecifierID:(id)a0;
- (void)updateiCloudAnalyticsForSpecifierID:(id)a0;

@end
