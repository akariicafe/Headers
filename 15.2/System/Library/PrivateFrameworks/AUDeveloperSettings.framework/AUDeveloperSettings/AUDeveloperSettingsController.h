@interface AUDeveloperSettingsController : PSListController

- (id)specifiers;
- (void)viewDidLoad;
- (id)isSeedParticipationEnabled:(id)a0;
- (id)createInternalSpecifiers;
- (id)createCustomerSpecifiers;
- (void)setSeedParticipation:(id)a0 specifier:(id)a1;
- (void)showParticipateInSeedOffAlert:(id)a0;
- (BOOL)needLegalConsent;
- (void)showLegalConsent:(id)a0;
- (void)showLegalConsentLearnMoreLink:(id)a0;

@end
