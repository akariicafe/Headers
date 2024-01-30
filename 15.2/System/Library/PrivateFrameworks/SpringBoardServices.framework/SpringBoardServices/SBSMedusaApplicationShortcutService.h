@interface SBSMedusaApplicationShortcutService : SBSAbstractApplicationService

- (void)performMedusaShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;
- (void)fetchSupportedMedusaShortcutActionsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
