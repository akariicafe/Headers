@class NSString;
@protocol PXAssetsSharingHelperDelegate;

@interface PUAssetSharingHelper : NSObject <PXAssetsSharingHelper>

@property (weak, nonatomic) id<PXAssetsSharingHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)copyAssets:(id)a0 completionHandler:(id /* block */)a1;
+ (void)prepareAssets:(id)a0 forActivityType:(id)a1 completion:(id /* block */)a2;
+ (void)_prepareAssets:(id)a0 forActivityType:(id)a1 window:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (void)_presentViewController:(id)a0;
- (void)ensureLocalAssetsForCloudPhotoSharing:(id)a0 completion:(id /* block */)a1;
- (void)ensureLocalAssetsForRendering:(id)a0 completion:(id /* block */)a1;
- (void)ensureLocalAssetsForSyndicationSave:(id)a0 completion:(id /* block */)a1;
- (void)ensureRenderingForAssetsWithDeferredProcessingInCollection:(id)a0 completion:(id /* block */)a1;
- (void)copyAssets:(id)a0;

@end
