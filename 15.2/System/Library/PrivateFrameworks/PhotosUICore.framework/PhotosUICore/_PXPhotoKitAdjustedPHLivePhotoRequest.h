@class AVPlayerItem, PHLivePhotoRequestOptions, _PXPhotoKitAdjustedUIImageRequest, UIImage, NSDictionary, _PXPhotoKitAdjustedVideoRequest;

@interface _PXPhotoKitAdjustedPHLivePhotoRequest : _PXPhotoKitAdjustedUIMediaRequest {
    _PXPhotoKitAdjustedUIImageRequest *_imageRequest;
    _PXPhotoKitAdjustedVideoRequest *_videoRequest;
    UIImage *_image;
    NSDictionary *_imageResultInfo;
    AVPlayerItem *_playerItem;
    NSDictionary *_playerItemResultInfo;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) PHLivePhotoRequestOptions *options;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRenderQueue:(id)a0 asset:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3 imageManager:(id)a4 options:(id)a5 resultHandler:(id /* block */)a6;
- (void)_handleImageRequestResult:(id)a0 info:(id)a1;
- (void)_handleVideoRequestResult:(id)a0 info:(id)a1;
- (void)_prepareLivePhotoIfPossible;

@end
