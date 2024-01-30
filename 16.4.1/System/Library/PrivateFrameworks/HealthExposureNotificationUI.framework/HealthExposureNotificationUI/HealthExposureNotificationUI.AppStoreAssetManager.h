@interface HealthExposureNotificationUI.AppStoreAssetManager : NSObject

+ (void)accessAppFor:(id)a0 presentingViewController:(id)a1 completion:(id /* block */)a2;
+ (void)openAppStoreFromViewController:(id)a0;
+ (void)fetchAssetForAppBundleId:(id)a0 completion:(id /* block */)a1;
+ (void)fetchAssetNameForAppBundleId:(id)a0 completion:(id /* block */)a1;
+ (void)presentAppStoreProductPage:(id)a0 from:(id)a1;

- (id)init;

@end
