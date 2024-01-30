@class NSObject, NSArray, NSMutableDictionary, NSDate, NSLock, NSMutableArray;
@protocol OS_dispatch_source, STMSizeCacheDelegate;

@interface STMSizeCache : NSObject {
    struct __CFString { } *_prefsKey;
    NSMutableDictionary *_itemsByPath;
    NSMutableArray *_eventsToProcess;
    NSObject<OS_dispatch_source> *_cacheFlushTimer;
}

@property unsigned long long cacheEventID;
@property (retain) NSLock *itemsLock;
@property (readonly) NSArray *items;
@property (weak) id<STMSizeCacheDelegate> delegate;
@property (retain) NSDate *cacheEventDate;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (void)dealloc;
- (void)pruneCache;
- (void).cxx_destruct;
- (void)addItems:(id)a0;
- (void)_flushCache;
- (void)_writeCache;
- (void)addItem:(id)a0 andComputeSizeSynchronously:(BOOL)a1;
- (void)flushCacheToPref;
- (id)initWithPrefsKey:(id)a0;
- (id)itemForPath:(id)a0;
- (id)itemsContainedByPath:(id)a0;
- (id)itemsContainingPath:(id)a0;
- (void)loadCacheFromPref;
- (void)notifyItemsAdded:(id)a0;
- (void)notifySizesChanged:(id)a0;
- (unsigned long long)processCacheEvents:(id)a0;
- (void)removeItemForPath:(id)a0;
- (id)sizeOfItemForPath:(id)a0;
- (void)updateLastCacheEventID:(unsigned long long)a0;
- (void)updateSizeOfItem:(id)a0 synchronous:(BOOL)a1;
- (id)updatedSizeOfItemForPath:(id)a0;
- (void)writeCacheToPref;

@end
