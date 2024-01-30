@class NSDictionary;

@interface STStorageCacheDelete : NSObject {
    int _cdNotifyToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateLock;
    long long _totalPurgeable;
    NSDictionary *_itemsDict;
    BOOL _inited;
}

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMonitor;
- (void)startMonitor;
- (id)cacheDeleteDict;
- (void)refreshPurgeableSpace;
- (long long)totalPurgeable;

@end
