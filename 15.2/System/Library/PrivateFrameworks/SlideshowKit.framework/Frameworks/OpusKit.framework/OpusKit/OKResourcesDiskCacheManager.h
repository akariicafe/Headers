@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface OKResourcesDiskCacheManager : NSObject {
    NSURL *_baseURL;
    NSObject<OS_dispatch_queue> *_globalQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (id)sharedManager;
+ (id)temporaryManagerWithIdentifier:(id)a0;
+ (id)_sharedResourcesDirectoryURL;

- (id)resourcesDirectoryURL;
- (id)init;
- (void)dealloc;
- (id)initWithBaseURL:(id)a0;
- (BOOL)hasMetadataForMediaItem:(id)a0 metadata:(id *)a1 error:(id *)a2;
- (id)metadataForMediaItem:(id)a0 error:(id *)a1;
- (BOOL)setMetadata:(id)a0 forMediaItem:(id)a1 error:(id *)a2;
- (void)performAsynchronousResourceAccessUsingBlock:(id /* block */)a0;
- (BOOL)removeMetadataForMediaItem:(id)a0 error:(id *)a1;
- (BOOL)hasThumbnailForMediaItem:(id)a0 resolution:(unsigned long long)a1 thumbnail:(id *)a2 error:(id *)a3;
- (id)thumbnailForMediaItem:(id)a0 resolution:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setThumbnail:(id)a0 forMediaItem:(id)a1 resolution:(unsigned long long)a2 error:(id *)a3;
- (BOOL)removeThumbnailsForMediaItem:(id)a0 error:(id *)a1;
- (BOOL)removeAllCaches:(id *)a0;
- (void)_performAsynchronousResourceAccessUsingBlock:(id /* block */)a0;
- (id)_cachedResourceDirectoryURLForMediaItem:(id)a0;
- (BOOL)_writeResources:(id *)a0 byResourcesAccessor:(id /* block */)a1;
- (BOOL)_writeCachedMediaItem:(id)a0 error:(id *)a1 byResourcesAccessor:(id /* block */)a2;
- (id)_cacheResourceMetadataURLForMediaItem:(id)a0;
- (BOOL)_readCachedMediaItem:(id)a0 error:(id *)a1 byMetadataAccessor:(id /* block */)a2;
- (BOOL)_writeCachedMediaItem:(id)a0 error:(id *)a1 byMetadataAccessor:(id /* block */)a2;
- (id)_cacheResourceThumbnailURLForMediaItem:(id)a0 resolution:(unsigned long long)a1;
- (id)_cacheResourceThumbnailsURLForMediaItem:(id)a0;
- (BOOL)_readCachedMediaItem:(id)a0 resolution:(unsigned long long)a1 error:(id *)a2 byThumbnailAccessor:(id /* block */)a3;
- (BOOL)_writeCachedMediaItem:(id)a0 resolution:(unsigned long long)a1 error:(id *)a2 byThumbnailAccessor:(id /* block */)a3;
- (BOOL)_writeCachedMediaItem:(id)a0 error:(id *)a1 byThumbnailsAccessor:(id /* block */)a2;
- (id)cachedMediaItemURLs:(id *)a0;
- (BOOL)removeMediaItem:(id)a0 error:(id *)a1;
- (BOOL)removeMediaItemsAtPath:(id)a0 error:(id *)a1;
- (BOOL)removeThumbnailForMediaItem:(id)a0 resolution:(unsigned long long)a1 error:(id *)a2;

@end
