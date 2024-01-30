@class NSMutableDictionary;

@interface STStorageDataNotifier : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changesLock;
    NSMutableDictionary *_changes;
}

+ (id)sharedNotifier;

- (void)notify:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_notify:(id)a0;
- (void)postAppsStateChanged:(id)a0;
- (void)postAppSizesChanged:(id)a0;
- (void)postAppsAdded:(id)a0;
- (void)postMediaSizesChanged;
- (void)notify:(id)a0 forBundleIDs:(id)a1;
- (void)postAppsRemoved:(id)a0;
- (void)postTipsChanged;
- (void)postLoadingComplete;

@end
