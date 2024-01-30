@class NSObject, CLSNotificationBannerViewController;
@protocol OS_dispatch_semaphore;

@interface CLSNotificationBannerWindow : UIWindow

@property (retain, nonatomic) CLSNotificationBannerViewController *currentBannerViewController;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bannerSemaphore;

+ (id)bannerWindow;
+ (void)enqueBanner:(id)a0;
+ (id)queue;

- (BOOL)_canAffectStatusBarAppearance;
- (id)init;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_showBanner:(id)a0;
- (void)_hideBanner:(id)a0 quickly:(BOOL)a1;
- (BOOL)_includeInDefaultImageSnapshot;
- (void)handlePan:(id)a0;

@end
