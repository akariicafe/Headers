@class PHPhotoLibrary, NSArray, NSString;
@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetViewPPTConfiguration : NSObject

@property (class, readonly, nonatomic) PHPhotoLibrary *defaultPhotoLibrary;
@property (class, readonly, nonatomic) NSArray *defaultConfigurations;

@property (readonly, nonatomic) id /* block */ assetViewFactory;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> assets;
@property (readonly, nonatomic) NSString *label;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetViewFactory:(id /* block */)a0 label:(id)a1 assets:(id)a2 label:(id)a3;
- (id)initWithAssetViewFactory:(id /* block */)a0 label:(id)a1 photoLibraryAssetsWithPlaybackStyleFilter:(long long)a2;

@end
