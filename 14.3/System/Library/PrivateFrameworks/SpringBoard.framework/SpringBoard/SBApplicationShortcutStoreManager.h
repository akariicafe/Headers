@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {
    NSLock *_stateLock;
    NSMutableDictionary *_storesKeyedByBundleIdentifier;
}

+ (id)sharedManager;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_stateLock_storeForBundleIdentifier:(id)a0;
- (void)_installedAppsDidChange:(id)a0;
- (id)applicationShortcutItemsForBundleIdentifier:(id)a0 withVersion:(unsigned long long)a1;
- (void)setApplicationShortcutItems:(id)a0 forBundleIdentifier:(id)a1 withVersion:(unsigned long long)a2;
- (void)saveSynchronously;

@end
