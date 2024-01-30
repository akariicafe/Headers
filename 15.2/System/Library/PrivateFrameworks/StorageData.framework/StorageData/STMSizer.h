@class NSArray, NSString, NSMutableDictionary;

@interface STMSizer : STMSizeCache <STMSizeCacheDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingEventsLock;
    NSMutableDictionary *_pendingEventsByPath;
    struct __FSEventStream { } *_fsStream;
    BOOL _streamRunning;
}

@property (retain, nonatomic) NSArray *rootPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containersWithClass:(long long)a0 error:(id *)a1;
+ (id)sharedAppSizer;

- (void)addApps:(id)a0;
- (id)addURL:(id)a0;
- (id)addURLs:(id)a0;
- (void).cxx_destruct;
- (id)addContainer:(id)a0;
- (void)dealloc;
- (void)processEvents:(id)a0;
- (void)startSizer;
- (void)stopSizer;
- (void)synchronizeCache;
- (void)reloadAppContainer:(id)a0;
- (id)initWithPrefsKey:(id)a0;
- (id)containersForApp:(id)a0;
- (id)addContainers:(id)a0;
- (void)addApp:(id)a0;
- (void)processPendingEvents;
- (void)setEvent:(id)a0 forItem:(id)a1;
- (void)_asyncProcessPendingEvents:(id)a0;
- (id)sizeForURL:(id)a0;
- (id)updatedSizeForURL:(id)a0;
- (id)pathOfContainer:(id)a0;
- (id)cachePathOfContainer:(id)a0;
- (id)sizeForContainer:(id)a0;
- (id)updatedSizeForContainer:(id)a0;
- (id)cacheSizeForContainer:(id)a0;
- (id)updatedCacheSizeForContainer:(id)a0;

@end
