@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {
    NSLock *_stateLock;
    NSMutableDictionary *_storesKeyedByBundleIdentifier;
}

+ (id)sharedManager;

- (void)invalidateCache;
- (void)_installedAppsDidChange:(id)a0;
- (id)_stateLock_storeForBundleIdentifier:(id)a0;
- (void)saveSynchronously;
- (void)setApplicationShortcutItems:(id)a0 forBundleIdentifier:(id)a1 withVersion:(unsigned long long)a2;
- (void)dealloc;
- (id)applicationShortcutItemsForBundleIdentifier:(id)a0 withVersion:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
