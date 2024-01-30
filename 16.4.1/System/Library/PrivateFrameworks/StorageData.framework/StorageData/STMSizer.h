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

+ (id)containersWithClass:(unsigned long long)a0;
+ (id)listOfUsedPathsInOverrides:(id)a0;
+ (id)sharedAppSizer;

- (void)dealloc;
- (void)addApps:(id)a0;
- (void).cxx_destruct;
- (id)addContainer:(id)a0;
- (id)addURL:(id)a0;
- (id)addURLs:(id)a0;
- (void)processEvents:(id)a0;
- (void)addApp:(id)a0;
- (void)_asyncProcessPendingEvents:(id)a0;
- (id)addContainers:(id)a0;
- (id)addURL:(id)a0 usingFastSizingIfPossible:(BOOL)a1;
- (id)addURLs:(id)a0 usingFastSizingIfPossible:(BOOL)a1;
- (id)cachePathOfContainer:(id)a0;
- (id)cacheSizeForContainer:(id)a0;
- (id)containersForApp:(id)a0;
- (void)flushCacheAsynchronously;
- (id)initWithPrefsKey:(id)a0;
- (id)pathOfContainer:(id)a0;
- (void)processPendingEvents;
- (void)reloadAppContainer:(id)a0;
- (void)setEvent:(id)a0 forItem:(id)a1;
- (id)sizeForContainer:(id)a0;
- (id)sizeForURL:(id)a0;
- (void)startSizer;
- (void)stopSizer;
- (id)updatedCacheSizeForContainer:(id)a0;
- (id)updatedSizeForContainer:(id)a0;
- (id)updatedSizeForURL:(id)a0;

@end
