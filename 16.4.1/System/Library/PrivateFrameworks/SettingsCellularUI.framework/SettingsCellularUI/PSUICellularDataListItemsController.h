@class RadiosPreferences;

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *radioPreferences;

- (void)setSpecifier:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)airplaneModeChanged;
- (id)getLogger;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)reloadCache;

@end
