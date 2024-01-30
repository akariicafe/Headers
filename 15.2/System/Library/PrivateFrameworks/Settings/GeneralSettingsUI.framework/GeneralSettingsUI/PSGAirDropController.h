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

- (id)specifiers;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (void)loadView;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateSpecifiersFromPreferences;
- (void)_refreshFooterForSpecifier:(id)a0;

@end
