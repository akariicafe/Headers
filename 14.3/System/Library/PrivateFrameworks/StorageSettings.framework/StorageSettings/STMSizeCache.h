@class NSArray, NSDictionary, NSMutableDictionary, NSLock, NSMutableArray;
@protocol STMSizeCacheDelegate;

@interface STMSizeCache : NSObject {
    struct __CFString { } *_prefsKey;
    NSMutableDictionary *_itemsByPath;
    NSMutableArray *_eventsToProcess;
}

@property long long totalSize;
@property (retain) NSLock *itemsLock;
@property (retain, nonatomic) NSArray *items;
@property (readonly) NSDictionary *itemSizes;
@property (readonly) unsigned long long itemCount;
@property (readonly) long long totalSizeOfItems;
@property (nonatomic) unsigned long long cacheEventID;
@property (weak) id<STMSizeCacheDelegate> delegate;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_flushCache:(id)a0;
- (id)createCacheEntryForPath:(id)a0;
- (void)loadCacheFromPref;
- (void)_writeCache;
- (void)sizeItems:(id)a0;
- (void)notifyItemsChanged;
- (void)updateCacheID:(id)a0;
- (void)_updateTotalSize;
- (void)notifySizesChanged;
- (void)flushCacheToPref;
- (id)_sizeEntry:(id)a0;
- (void)processCacheEvents:(id)a0;
- (void)sizeItem:(id)a0;
- (id)initWithPrefsKey:(id)a0;
- (id)sizeOfItem:(id)a0;
- (id)itemsContaining:(id)a0;
- (id)itemsContainedBy:(id)a0;
- (void)processCacheEvent:(id)a0;
- (void)sizeAllItems;

@end
