@class NSData, QLCacheThumbnailData, QLTBitmapFormat, NSMutableDictionary, NSDictionary, QLCacheIndexDatabaseQueryEnumerator, NSMutableArray, QLTGeneratorThumbnailRequest, QLCacheBlobInfo, QLCacheFileIdentifier;

@interface QLDiskCacheQueryEnumerator : QLDiskCacheEnumerator {
    NSDictionary *_generatorRequests;
    QLCacheIndexDatabaseQueryEnumerator *_cacheIndexDatabaseEnumerator;
    QLCacheThumbnailData *_thumbnailData;
    QLTGeneratorThumbnailRequest *_generatorRequest;
    BOOL _valueFound;
    unsigned long long _cacheId;
    QLCacheFileIdentifier *_fileIdentifier;
    QLTBitmapFormat *_bitmapFormat;
    NSData *_bitmapData;
    NSData *_metadata;
    QLCacheBlobInfo *_metadataBlobInfo;
    int _flavor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRect;
}

@property (retain) NSMutableDictionary *generatorRequestBeingProcessed;
@property (retain) QLCacheBlobInfo *bitmapDataBlobInfo;
@property (retain) NSMutableArray *sameGeneratorRequests;
@property BOOL iconMode;
@property unsigned long long badgeType;
@property long long iconVariant;
@property int interpolationQuality;
@property unsigned long long externalGeneratorDataHash;
@property float size;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_createNewCacheIndexDatabaseEnumerator;
- (void)_cleanUpValues;
- (void)moveThumbnailRequestsFromBeingProcessedToSameRequestIfTheyMatch:(id /* block */)a0;
- (void)_findThumbnailRequestsToProcess;
- (id)initWithDiskCache:(id)a0 thumbnailRequests:(id)a1;
- (id)nextThumbnailRequestWithThumbnailData:(id *)a0;

@end
