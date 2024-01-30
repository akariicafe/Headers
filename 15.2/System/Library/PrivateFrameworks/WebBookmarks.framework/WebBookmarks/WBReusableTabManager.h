@class NSString, NSCache, NSTimer;

@interface WBReusableTabManager : NSObject <NSCacheDelegate, WBTabGroupManagerObserver> {
    NSCache *_uuidToTabCache;
    BOOL _reusing;
    NSTimer *_cleanupTimer;
    BOOL _pendingCleanup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)_cleanup;
- (void)tabGroupManager:(id)a0 didRemoveTabGroup:(id)a1;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)windowStates;
- (id)tabGroupManager;
- (void)_scheduleCleanup;
- (id)allGroupsTabsUUIDs;
- (void)_addTabUUIDsFromGroup:(id)a0 toSet:(id)a1;
- (void)addReusableTab:(id)a0;
- (id)reuseTabForUUID:(id)a0;
- (BOOL)isTabSuspended:(id)a0;
- (id)_referenceToTabWithUUID:(id)a0;
- (void)enumerateReusableTabs:(id /* block */)a0;

@end
