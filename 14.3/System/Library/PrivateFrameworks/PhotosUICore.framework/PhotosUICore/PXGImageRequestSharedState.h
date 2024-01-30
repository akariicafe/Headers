@protocol PXDisplayAssetFetchResult, PXGDisplayAssetRequestObserver;

@interface PXGImageRequestSharedState : NSObject

@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssetFetchResult;
@property (readonly, nonatomic) id<PXGDisplayAssetRequestObserver> observer;
@property (readonly, nonatomic) unsigned long long presentationStyles;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) double screenScale;

- (void).cxx_destruct;
- (id)initWithDisplayAssetFetchResult:(id)a0 observer:(id)a1 presentationStyles:(unsigned long long)a2 targetSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4;

@end
