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

- (void).cxx_destruct;
- (id)init;
- (void)registerUsageStorageClient;
- (void)flushViews;
- (void)deregisterUsageStorageClient;
- (void)clearUsageDataCache;
- (void)fetchSystemSizeStrings;
- (void)populateUsageDataWithProgressBlock:(id /* block */)a0;
- (id)mediaCollectionForKey:(id)a0;
- (void)removeMediaCollectionCacheForKey:(id)a0;
- (void)_setAvailable:(float)a0;

@end
