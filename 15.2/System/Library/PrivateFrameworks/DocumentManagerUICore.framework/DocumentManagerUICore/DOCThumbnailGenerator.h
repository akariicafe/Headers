@class DOCThumbnailCache, QLThumbnailGenerator;

@interface DOCThumbnailGenerator : NSObject {
    DOCThumbnailCache *_thumbnailCache;
}

@property (class, readonly) DOCThumbnailGenerator *sharedGenerator;

@property (readonly, nonatomic) QLThumbnailGenerator *thumbnailGenerator;

+ (void)setMaximumCachedThumbnailCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;
- (void)performInBatch:(id /* block */)a0;
- (void)markThumbnailAsRecentlyUsed:(id)a0;
- (id)thumbnailForItem:(id)a0 descriptor:(id)a1;
- (id)thumbnailForItem:(id)a0 descriptor:(id)a1 forceFetch:(BOOL)a2;
- (id)_thumbnailForItem:(id)a0 descriptor:(id)a1 forceFetch:(BOOL)a2;
- (id)_thumbnailFallbackForItem:(id)a0 descriptor:(id)a1 currentThumbnail:(id)a2;
- (id)iconForItem:(id)a0 descriptor:(id)a1;
- (id)_currentItemThumbnailsBatch;
- (id)startBatching;
- (void)endBatching:(id)a0;
- (id)_endCurrentThumbnailsBatch;
- (id)iconForURL:(id)a0 descriptor:(id)a1;

@end
