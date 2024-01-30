@class NSString, NSMutableDictionary, PHPhotoLibrary, NSCache;

@interface PXPhotoKitThumbnailCache : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver> {
    NSCache *_cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_cachedThumbnailIndexByObjectID;
}

@property (readonly, nonatomic) unsigned long long sizeLimit;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tableThumbnailDataForAsset:(id)a0 dataSpecification:(struct PHAssetResourceTableDataSpecification { int x0; int x1; int x2; int x3; int x4; int x5; } *)a1;
- (id)initWithSizeLimit:(unsigned long long)a0 photoLibrary:(id)a1;
- (void)cacheThumbnailData:(id)a0 specification:(const struct PHAssetResourceTableDataSpecification { int x0; int x1; int x2; int x3; int x4; int x5; } *)a1 forAsset:(id)a2;

@end
