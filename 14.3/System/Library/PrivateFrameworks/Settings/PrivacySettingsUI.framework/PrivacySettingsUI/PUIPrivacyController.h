@class NSString, ACAccountStore, PSSpecifier;

@interface PUIPrivacyController : PSListController <PSListControllerTestableSpecifiers> {
    PSSpecifier *_locationSpecifier;
    ACAccountStore *_accountStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)formatSearchEntries:(id)a0 parent:(id)a1;
+ (id)booleanCapabilitiesToTest;

- (void).cxx_destruct;
- (id)specifiers;
- (id)_accountStore;
- (id)locationServicesEnabled:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)updateLocationServicesVisibility;
- (void)setCapabilityEnabled:(id)a0 specifier:(id)a1;
- (id)capabilityEnabled:(id)a0;

@end
