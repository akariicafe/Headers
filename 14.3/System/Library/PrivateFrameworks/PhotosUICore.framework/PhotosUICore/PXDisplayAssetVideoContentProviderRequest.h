@class PXMediaProvider;
@protocol PXDisplayAssetVideoContentProviderRequestDelegate, PXDisplayAsset;

@interface PXDisplayAssetVideoContentProviderRequest : NSObject {
    long long _requestID;
}

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) double loadingProgress;
@property (weak, nonatomic) id<PXDisplayAssetVideoContentProviderRequestDelegate> delegate;

+ (id)requestWithAsset:(id)a0 mediaProvider:(id)a1 priority:(long long)a2 delegate:(id)a3;

- (void)cancel;
- (void)_start;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)_streamingVideoIntent;
- (void)_handleLoadingProgress:(double)a0;
- (void)_handleMediaProviderResult:(id)a0 info:(id)a1;

@end
