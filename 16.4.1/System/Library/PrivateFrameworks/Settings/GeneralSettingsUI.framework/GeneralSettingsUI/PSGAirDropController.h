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

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (void)dealloc;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)loadView;
- (void)_refreshFooterForSpecifier:(id)a0;
- (void)_updateSpecifiersFromPreferences;

@end
