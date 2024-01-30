@class NSArray, NSMutableDictionary, NSLock, NSMutableArray;
@protocol STMSizeCacheDelegate;

@interface STMSizeCache : NSObject {
    struct __CFString { } *_prefsKey;
    NSMutableDictionary *_itemsByPath;
    NSMutableArray *_eventsToProcess;
}

@property (retain) NSLock *itemsLock;
@property (readonly) NSArray *items;
@property (weak) id<STMSizeCacheDelegate> delegate;
@property unsigned long long cacheEventID;

- (void)addItem:(id)a0;
- (void)addItems:(id)a0;
- (void)removeItem:(id)a0;
- (void)pruneCache;
- (void).cxx_destruct;
- (void)_flushCache:(id)a0;
- (void)dealloc;
- (void)writeCacheToPref;
- (id)updatedSizeOfItemForPath:(id)a0;
- (void)loadCacheFromPref;
- (void)_writeCache;
- (void)notifySizesChanged:(id)a0;
- (void)flushCacheToPref;
- (id)itemForPath:(id)a0;
- (void)updateSizeOfItem:(id)a0 synchronous:(BOOL)a1;
- (void)notifyItemsAdded:(id)a0;
- (void)removeItemForPath:(id)a0;
- (void)processCacheEvents:(id)a0;
- (void)resizeItemsForPaths:(id)a0;
- (id)initWithPrefsKey:(id)a0;
- (id)sizeOfItemForPath:(id)a0;
- (id)itemsContainingPath:(id)a0;
- (id)itemsContainedByPath:(id)a0;
- (void)processCacheEvent:(id)a0;
- (void)resizeItemForPath:(id)a0;
- (void)resizeAllItems;

@end
