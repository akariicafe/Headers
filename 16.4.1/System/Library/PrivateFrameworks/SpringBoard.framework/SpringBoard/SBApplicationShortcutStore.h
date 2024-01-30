@class FBSApplicationDataStore, NSString, NSArray, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface SBApplicationShortcutStore : NSObject {
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedApplicationShortcutItems;
    NSArray *_cachedLanguages;
    unsigned long long _cachedVersion;
    BOOL _isLoaded;
    BOOL _isDirty;
    FBSApplicationDataStore *_dataStore;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, copy, nonatomic) NSArray *languages;
@property (readonly, nonatomic) unsigned long long version;

+ (void)clearStore;

- (void)invalidateCache;
- (void)saveSynchronously;
- (id)_applicationShortcutItemsFromPlistArray:(id)a0;
- (void)truncateIfNecessary;
- (id)_plistArrayFromApplicationShortcutItems:(id)a0;
- (BOOL)_stateLock_truncateIfNeeded:(id)a0;
- (void)_stateLock_loadFromStoreIfNeeded;
- (void)_saveQueue_save;
- (void)setApplicationShortcutItems:(id)a0 withLanguages:(id)a1 version:(unsigned long long)a2;
- (id)initWithBundleIdentifier:(id)a0;
- (id)description;
- (void)_stateLock_markDirty;
- (void).cxx_destruct;

@end
