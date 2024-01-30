@class NSString, NSMutableDictionary, NSObject, OFLRUCache;
@protocol OS_dispatch_queue;

@interface OFMetadataFileCache : NSObject {
    NSObject<OS_dispatch_queue> *_serialDiskSaveQueue;
    NSString *_diskCacheDirectory;
    NSMutableDictionary *_diskCacheFilePathForIdentifiers;
    OFLRUCache *_memoryCache;
}

@property (nonatomic) BOOL useMemoryCache;
@property (nonatomic) BOOL useDiskCache;
@property (nonatomic) BOOL useAsynchronousSerialDiskSaveQueue;
@property (nonatomic) BOOL allowCleanupOnMemoryWarnings;
@property (nonatomic) BOOL allowCleanupOnEnteringBackground;

- (id)init;
- (void)invalidateMemoryCaches;
- (void)dealloc;
- (void)invalidateDiskCaches;
- (id)attributesForIdentifier:(id)a0;
- (void)_didReceiveMemoryWarningNotification;
- (void)_didEnterBackgroundNotification;
- (void)_willTerminateNotification;
- (id)initWithDiskCacheDirectory:(id)a0;
- (void)purgeDiskCache:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)_diskCacheFilePathForIdentifier:(id)a0;
- (id)_metadataForIdentifier:(id)a0;
- (void)_saveMetadata:(id)a0 forIdentifier:(id)a1;
- (void)invalidateMemoryCacheForIdentifier:(id)a0;
- (void)invalidateDiskCacheForIdentifier:(id)a0;
- (void)setNumberOfMemorySlots:(unsigned long long)a0;
- (id)valueForKey:(id)a0 andIdentifier:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1 andIdentifier:(id)a2;
- (void)setAttributes:(id)a0 forIdentifier:(id)a1;

@end
