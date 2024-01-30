@interface FPAccessControlManager : NSObject

- (void)_killBundle:(id)a0 completionHandler:(id /* block */)a1;
- (void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(id /* block */)a0;
- (void)collectionForItemsAccessibleByBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)revokeAccessToAllBundles;
- (void)revokeAccessToAllBundlesCompletionHandler:(id /* block */)a0;
- (void)revokeAccessToAllItemsForBundle:(id)a0 completionHandler:(id /* block */)a1;

@end
