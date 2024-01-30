@interface HealthExposureNotificationUI.AppStoreAssetManager : NSObject

+ (void)fetchAssetNameForAppBundleId:(id)a0 completion:(id /* block */)a1;
+ (void)fetchAssetForAppBundleId:(id)a0 completion:(id /* block */)a1;
+ (void)accessAppFor:(id)a0 presentingViewController:(id)a1;
+ (void)presentAppStoreProductPage:(id)a0 from:(id)a1;
+ (void)openAppStoreFromViewController:(id)a0;

- (id)init;

@end
