@class UIImage, VKImageAnalyzerRequest;
@protocol PXDisplayAsset;

@interface _PXVisualIntelligenceRequest : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) id /* block */ resultHandler;
@property (nonatomic) int vkRequestID;
@property (readonly, nonatomic) VKImageAnalyzerRequest *vkImageRequest;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 image:(id)a1 requestID:(int)a2 resultHandler:(id /* block */)a3;

@end
