@class NSNumber;

@interface PUILocationServicesPrivacyAlertsLevelController : PUILocationServicesListController {
    NSNumber *_authorizationPromptMapDisplayEnabled;
}

- (void).cxx_destruct;
- (id)specifiers;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)viewDidLoad;
- (void)setAuthorizationPromptMapDisplayEnabled:(id)a0 specifier:(id)a1;
- (id)authorizationPromptMapDisplayEnabled:(id)a0;

@end
