@class SPAssetCacheClientCache;

@interface SPCompanionAssetCache : NSObject

@property (retain, nonatomic) SPAssetCacheClientCache *permanentCache;
@property (retain, nonatomic) SPAssetCacheClientCache *transientCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)cachedImages;
- (id)keyFromImageData:(id)a0;
- (BOOL)imageInTransientCache:(id)a0;
- (void)addImageReferenceToTransientCache:(id)a0 withName:(id)a1;
- (id)dataForImageWithName:(id)a0;
- (BOOL)addImageToPermanentCache:(id)a0 withName:(id)a1;
- (void)removeImageFromPermanentCacheWithName:(id)a0;
- (void)removeAllImagesFromPermanentCache;
- (void)handleCacheMessage:(id)a0;
- (void)addedAsset:(id)a0;
- (void)deletedAsset:(id)a0;
- (void)clearedCache:(id)a0;
- (void)syncCache:(id)a0;
- (BOOL)imageInPermanentCache:(id)a0;

@end
