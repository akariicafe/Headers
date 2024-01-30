@interface DBSExternalDisplayPreferencesController : PSListController

- (id)specifiers;
- (void)viewDidLoad;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)valueForSpecifier:(id)a0;
- (void)connectedDisplayDidUpdate:(id)a0;
- (void)externalBrightnessDidUpdate:(id)a0;
- (void)handleDBSExternalDisplayManagerExternalBrightnessAvailablityDidChangeNotification:(id)a0;
- (void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessAvailablityDidChangeNotification:(id)a0;
- (void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessValueDidChangeNotification:(id)a0;
- (id)displayModeSpecifiers;
- (void)setMatchContentEnabled:(id)a0 specifier:(id)a1;
- (id)matchContentEnabled:(id)a0;
- (id)externalBrightnessSpecifiers;
- (void)setExternalBrightnessValue:(id)a0 specifier:(id)a1;
- (id)externalBrightnessValueForSpecifier:(id)a0;
- (void)setExternalAutoBrightnessValue:(id)a0 specifier:(id)a1;
- (id)externalAutoBrightnessValueForSpecifier:(id)a0;
- (void)insertExternalBrightnessSpecifiers;
- (void)removeExternalBrightnessSpecifiers;

@end
