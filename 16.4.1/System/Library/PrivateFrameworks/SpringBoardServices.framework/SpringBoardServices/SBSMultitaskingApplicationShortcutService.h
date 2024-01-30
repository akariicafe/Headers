@interface SBSMultitaskingApplicationShortcutService : SBSAbstractApplicationService

- (void)fetchSupportedMultitaskingShortcutActionsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performMultitaskingShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;

@end
