@interface SBSApplicationShortcutService : SBSAbstractApplicationService

- (void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(id /* block */)a0;
- (void)updateDynamicApplicationShortcutItems:(id)a0 bundleIdentifier:(id)a1;
- (void)updateDynamicApplicationShortcutItems:(id)a0;
- (void)updateDynamicApplicationShortcutItems:(id)a0 forBundleIdentifier:(id)a1;
- (void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)applicationShortcutItemsOfTypes:(unsigned long long)a0 forBundleIdentifier:(id)a1;

@end
