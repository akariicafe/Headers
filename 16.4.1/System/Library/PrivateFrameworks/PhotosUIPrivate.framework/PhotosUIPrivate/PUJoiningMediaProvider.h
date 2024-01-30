@class NSMapTable, NSMutableArray;

@interface PUJoiningMediaProvider : PUMediaProvider

@property (readonly, nonatomic) NSMapTable *_mediaProviderByClass;
@property (readonly, nonatomic) NSMutableArray *_mediaProviderPredicateRecords;

- (int)requestImageURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(int)a0;
- (id)init;
- (int)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_mediaProviderForAsset:(id)a0 requestType:(long long)a1;
- (void)registerMediaProvider:(id)a0 forAssetClass:(Class)a1;
- (void)registerMediaProvider:(id)a0 forAssetPassingTest:(id /* block */)a1;

@end
