@class UIImage, VKCImageAnalyzerRequest;
@protocol PXDisplayAsset;

@interface _PXVisualIntelligenceRequest : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct CGImage { } *cgImage;
@property (readonly, nonatomic) long long cgImageOrPixelBufferOrientation;
@property (readonly, nonatomic) id /* block */ resultHandler;
@property (nonatomic) int vkRequestID;
@property (readonly, nonatomic) VKCImageAnalyzerRequest *vkImageRequest;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 cgImage:(struct CGImage { } *)a1 orientation:(long long)a2 requestID:(int)a3 resultHandler:(id /* block */)a4;
- (id)initWithAsset:(id)a0 image:(id)a1 requestID:(int)a2 resultHandler:(id /* block */)a3;
- (id)initWithAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(long long)a2 requestID:(int)a3 resultHandler:(id /* block */)a4;
- (id)initWithAsset:(id)a0 requestID:(int)a1 resultHandler:(id /* block */)a2;

@end
