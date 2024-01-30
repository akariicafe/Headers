@class DOCThumbnailCache, QLThumbnailGenerator;

@interface DOCThumbnailGenerator : NSObject {
    DOCThumbnailCache *_thumbnailCache;
}

@property (class, readonly) DOCThumbnailGenerator *sharedGenerator;

@property (readonly, nonatomic) QLThumbnailGenerator *thumbnailGenerator;

+ (void)setMaximumCachedThumbnailCount:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)performInBatch:(id /* block */)a0;
- (id)_currentNodeThumbnailsBatch;
- (id)_endCurrentThumbnailsBatch;
- (id)_thumbnailFallbackForNode:(id)a0 descriptor:(id)a1 currentThumbnail:(id)a2;
- (id)_thumbnailForNode:(id)a0 descriptor:(id)a1 forceFetch:(BOOL)a2;
- (void)endBatching:(id)a0;
- (id)iconForNode:(id)a0 descriptor:(id)a1;
- (id)iconForURL:(id)a0 descriptor:(id)a1;
- (void)markThumbnailAsRecentlyUsed:(id)a0;
- (id)startBatching;
- (id)thumbnailForNode:(id)a0 descriptor:(id)a1;
- (id)thumbnailForNode:(id)a0 descriptor:(id)a1 forceFetch:(BOOL)a2;

@end
