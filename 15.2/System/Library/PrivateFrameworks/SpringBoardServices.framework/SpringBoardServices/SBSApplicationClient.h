@interface SBSApplicationClient : SBSServiceFacilityClient

+ (id)serviceFacilityIdentifier;

- (void)performMedusaShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;
- (void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)deleteSnapshotsForApplicationIdentifier:(id)a0;
- (void)fetchSupportedMedusaShortcutActionsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestShelfPresentationForSceneWithIdentifier:(id)a0;
- (id)applicationShortcutItemsOfTypes:(unsigned long long)a0 forBundleIdentifier:(id)a1;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)a0;
- (void)updateDynamicApplicationShortcutItems:(id)a0 bundleIdentifier:(id)a1;
- (void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)a0 withCompletionHandler:(id /* block */)a1;

@end
