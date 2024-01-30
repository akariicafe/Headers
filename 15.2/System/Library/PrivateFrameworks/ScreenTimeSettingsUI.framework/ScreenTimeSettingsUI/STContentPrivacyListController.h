@class NSArray, PSSpecifier;

@interface STContentPrivacyListController : STPINListViewController

@property (readonly, copy) NSArray *storeDetailSpecifiers;
@property (retain) PSSpecifier *enableRestrictionsSwitchSpecifier;
@property (retain) PSSpecifier *contentRestrictionsSpecifier;

- (id)specifiers;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)setItemSpecifierValue:(id)a0 specifier:(id)a1;
- (id)getItemSpecifierValue:(id)a0;
- (void)_isLoadedDidChange:(BOOL)a0;
- (void)_viewProfilesAndDeviceManagement:(id)a0;
- (id)_enableRestrictionsSwitchSpecifier;
- (id)_topLevelSpecifiers;
- (id)_allowChangesSpecifiers;
- (void)setRestrictionsEnabled:(id)a0 specifier:(id)a1;
- (id)getRestrictionsEnabled:(id)a0;
- (void)showiTunesPurchasesRestrictions:(id)a0;
- (id)_topLevelSpecifierWithAction:(SEL)a0 name:(id)a1;
- (void)showAllowedAppsRestrictions:(id)a0;
- (void)showMediaRestrictions:(id)a0;
- (id)_privacySpecifiers;
- (id)defaultLinkListSpecifierWithConfiguration:(id)a0 key:(id)a1;
- (id)radioGroupSpecifierWithName:(id)a0 footerText:(id)a1 item:(id)a2;
- (id)defaultRadioItemSpecifierWithGroup:(id)a0 name:(id)a1 value:(id)a2;
- (id)tccSpecifierWithCapabilityKey:(id)a0 id:(id)a1;
- (id)defaultLinkListSpecifierWithItem:(id)a0;
- (id)_topLevelExternalSpecifierWithClass:(Class)a0 name:(id)a1 idTitle:(id)a2;

@end
