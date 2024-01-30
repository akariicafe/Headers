@class UIImage, PHImageRequestOptions, NSError;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXImageRequest : NSObject

@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) PHImageRequestOptions *options;
@property (nonatomic) long long requestID;
@property (nonatomic) UIImage *image;
@property (nonatomic) BOOL gotFullQualityImage;
@property (nonatomic) BOOL resultIsInCloud;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)performWithResultHandler:(id /* block */)a0;
- (id)initWithMediaProvider:(id)a0 asset:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 options:(id)a3;

@end
