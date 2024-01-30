@class NSArray, UILabel, ICQUsageStorageCache, UIBarButtonItem;

@interface ICQUsageStorageMonitor : NSObject {
    UIBarButtonItem *_footerItem;
    UILabel *_footerLabel;
    NSArray *_footerItems;
    long long _storageClientCount;
    ICQUsageStorageCache *_cache;
}

@property (nonatomic) float usedSize;
@property (readonly, nonatomic) NSArray *footerItems;
@property (readonly, nonatomic) float availableSize;

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)_setAvailable:(float)a0;
- (void)clearUsageDataCache;
- (void)deregisterUsageStorageClient;
- (void)fetchSystemSizeStrings;
- (void)flushViews;
- (id)mediaCollectionForKey:(id)a0;
- (void)populateUsageDataWithProgressBlock:(id /* block */)a0;
- (void)registerUsageStorageClient;
- (void)removeMediaCollectionCacheForKey:(id)a0;

@end
