@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {
    NSLock *_stateLock;
    NSMutableDictionary *_storesKeyedByBundleIdentifier;
}

+ (id)sharedManager;

- (void)_installedAppsDidChange:(id)a0;
- (id)_stateLock_storeForBundleIdentifier:(id)a0;
- (id)applicationShortcutItemsForBundleIdentifier:(id)a0 withVersion:(unsigned long long)a1;
- (void)setApplicationShortcutItems:(id)a0 forBundleIdentifier:(id)a1 withVersion:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateCache;
- (void)saveSynchronously;
- (void)dealloc;

@end
