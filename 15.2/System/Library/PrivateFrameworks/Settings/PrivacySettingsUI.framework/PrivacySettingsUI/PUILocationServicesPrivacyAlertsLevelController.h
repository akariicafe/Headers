@class NSNumber;

@interface PUILocationServicesPrivacyAlertsLevelController : PUILocationServicesListController {
    NSNumber *_authorizationPromptMapDisplayEnabled;
}

- (id)specifiers;
- (void)viewDidLoad;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (void)setAuthorizationPromptMapDisplayEnabled:(id)a0 specifier:(id)a1;
- (id)authorizationPromptMapDisplayEnabled:(id)a0;

@end
