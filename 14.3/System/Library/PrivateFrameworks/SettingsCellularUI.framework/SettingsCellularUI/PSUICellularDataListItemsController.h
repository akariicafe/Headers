@class RadiosPreferences;

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *radioPreferences;

- (void)setSpecifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dealloc;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)reloadCache;

@end
