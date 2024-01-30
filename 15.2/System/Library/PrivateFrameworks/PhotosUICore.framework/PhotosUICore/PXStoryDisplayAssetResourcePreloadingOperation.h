@class NSError, PXMediaProvider;
@protocol PXDisplayAsset, PXStoryResource;

@interface PXStoryDisplayAssetResourcePreloadingOperation : PXAsyncOperation

@property double startTime;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) id<PXStoryResource> resource;
@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)px_start;
- (void).cxx_destruct;
- (id)init;
- (void)px_finishIfPossible;
- (id)initWithDisplayAssetResource:(id)a0 mediaProvider:(id)a1;

@end
