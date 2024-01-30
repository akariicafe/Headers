@class RadiosPreferences;

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *radioPreferences;

- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)airplaneModeChanged;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)reloadCache;

@end
