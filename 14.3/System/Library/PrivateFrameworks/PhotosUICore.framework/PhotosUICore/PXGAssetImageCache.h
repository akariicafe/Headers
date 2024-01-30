@class NSMutableIndexSet, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXGAssetImageCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableIndexSet *_activeRequestIDs;
    NSMutableSet *_activeAssets;
    NSMutableArray *_entries;
    NSMutableArray *_reusableEntries;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearCachedImagesForRequestIDs:(id)a0;
- (id)description;
- (void)cacheImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 forRequestID:(int)a2;
- (void)clearAllCachedImages;
- (struct CGImage { } *)cachedImageWithOrientation:(unsigned int *)a0 forAsset:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3 forRequestID:(int)a4;
- (id)debugDescription;

@end
