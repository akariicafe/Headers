@class NSObject;
@protocol OS_dispatch_queue;

@interface AECameraAssetPackageGenerator : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_generationQueue;

- (void).cxx_destruct;
- (id)init;
- (void)_populatePackage:(id)a0 fromReviewAsset:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)generatePackageFromReviewAsset:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
