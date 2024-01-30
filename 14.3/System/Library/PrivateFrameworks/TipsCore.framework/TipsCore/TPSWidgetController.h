@class NSMutableDictionary, TPSTip, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, TPSWidgetControllerDelegate;

@interface TPSWidgetController : NSObject {
    TPSTip *_preferredTip;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap;
@property (weak, nonatomic) id<TPSWidgetControllerDelegate> delegate;
@property (copy, nonatomic) TPSTip *preferredTip;

- (id)init;
- (void)setPreferredTip:(id)a0;
- (id)preferredTip;
- (id)cacheFileURLForAssets:(id)a0 language:(id)a1 mode:(long long)a2;
- (void)fetchAssetForAssets:(id)a0 language:(id)a1 mode:(long long)a2 completionHandler:(id /* block */)a3;
- (id)assetsConfigurationForAssets:(id)a0 language:(id)a1 userInterface:(long long)a2;
- (void)widgetAssetsForTip:(id)a0 preferCacheIfAvailable:(BOOL)a1 userInterface:(long long)a2 completionHandler:(id /* block */)a3;
- (void)updateWidgetTipWithTipsMap:(id)a0 tipsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 preferHardwareWelcome:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchWidgetAssetsForTip:(id)a0 preferCacheIfAvailable:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
