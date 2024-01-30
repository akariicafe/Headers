@class OFLRUCache;

@interface OFMetadataMemoryCache : NSObject {
    OFLRUCache *_memoryCache;
    unsigned long long _hasChanges;
}

@property (nonatomic) BOOL allowCleanupOnMemoryWarnings;
@property (nonatomic) BOOL allowCleanupOnEnteringBackground;

- (BOOL)writeToURL:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)loadFromURL:(id)a0;
- (BOOL)hasChanges;
- (void)invalidate;
- (id)attributesForIdentifier:(id)a0;
- (void)_didReceiveMemoryWarningNotification;
- (void)_didEnterBackgroundNotification;
- (id)_metadataForIdentifier:(id)a0;
- (void)_saveMetadata:(id)a0 forIdentifier:(id)a1;
- (void)setNumberOfMemorySlots:(unsigned long long)a0;
- (id)valueForKey:(id)a0 andIdentifier:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1 andIdentifier:(id)a2;
- (void)setAttributes:(id)a0 forIdentifier:(id)a1;
- (void)resetChanges;
- (unsigned long long)numberOfMemorySlots;
- (unsigned long long)numberOfUsedMemorySlots;
- (void)invalidateForIdentifier:(id)a0;

@end
