@class GEOMapItemPhotoOptions, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface MKPlaceCollectionImageProvider : NSObject <NSCacheDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *blurQueue;
@property (readonly, nonatomic) GEOMapItemPhotoOptions *optionsForCollectionCells;
@property (retain, nonatomic) NSCache *blurredImagesCache;
@property (retain, nonatomic) NSCache *downloadedImagesCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })desiredSizeFromFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)photoInfoWithPhoto:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1;
- (void)_blurCachedImage:(id)a0 blurredImageId:(id)a1 collection:(id)a2 size:(struct CGSize { double x0; double x1; })a3 imageSizeType:(long long)a4 contentSizeCategory:(id)a5 completion:(id /* block */)a6;
- (void)blurImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 imageSizeType:(long long)a2 contentSizeCategory:(id)a3 completion:(id /* block */)a4;
- (void)loadBlurredCoverImageWithCuratedCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1 imageSizeType:(long long)a2 contentSizeCategory:(id)a3 completion:(id /* block */)a4;
- (void)cancelBlurredCoverImageLoadWithCollection:(id)a0 frameSize:(struct CGSize { double x0; double x1; })a1;
- (void)darkenAndBlurImage:(id)a0 completion:(id /* block */)a1;
- (id)joeColorForCuratedCollection:(id)a0;

@end
