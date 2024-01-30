@class QLCacheThumbnailData, QLCacheFileIdentifier, QLCacheIndexDatabaseQueryEnumerator, NSData, QLCacheBlobInfo;

@interface QLDiskCacheAllThumbnailPerFileEnumerator : QLDiskCacheEnumerator {
    QLCacheFileIdentifier *_fileIdentifier;
    QLCacheIndexDatabaseQueryEnumerator *_cacheIndexDatabaseEnumerator;
    QLCacheThumbnailData *_thumbnailData;
    NSData *_bitmapData;
    QLCacheBlobInfo *_bitmapDataBlobInfo;
    NSData *_metadata;
    QLCacheBlobInfo *_metadataBlobInfo;
}

- (void).cxx_destruct;
- (void)_createNewCacheIndexDatabaseEnumeratorWithFileIdentifier:(id)a0;
- (id)initWithDiskCache:(id)a0 fileIdentifier:(id)a1;
- (id)nextThumbnailData;

@end
