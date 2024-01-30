@interface GKNotificationBanner : NSObject

+ (BOOL)isBannerVisible;
+ (id)bannerViewWithTitle:(id)a0 image:(id)a1 player:(id)a2 message:(id)a3;
+ (id)bannerViewWithTitle:(id)a0 image:(id)a1 player:(id)a2 message:(id)a3 actionMessage:(id)a4;
+ (id)bannerViewWithTitle:(id)a0 image:(id)a1 player:(id)a2 message:(id)a3 actionMessage:(id)a4 shortBanner:(BOOL)a5;
+ (id)bannerViewWithTitle:(id)a0 message:(id)a1 actionMessage:(id)a2;
+ (void)showBannerWithTitle:(id)a0 image:(id)a1 message:(id)a2 completionHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 image:(id)a1 message:(id)a2 touchHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
+ (void)showBannerWithTitle:(id)a0 message:(id)a1 duration:(double)a2 completionHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 player:(id)a1 message:(id)a2 completionHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 player:(id)a1 message:(id)a2 touchHandler:(id /* block */)a3;
+ (void)showWelcomeBannerWithTitle:(id)a0 message:(id)a1 touchHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
