@class NSString, SFAirDropDiscoveryController, PSSpecifier;

@interface PSGAirDropController : PSListController <SFAirDropDiscoveryControllerDelegate> {
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_offSpecifier;
    PSSpecifier *_contactsOnlySpecifier;
    PSSpecifier *_everyoneSpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (void)_updateSpecifiersFromPreferences;
- (void)_refreshFooterForSpecifier:(id)a0;

@end
