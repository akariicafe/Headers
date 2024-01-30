@class NSObject, CLSNotificationBannerViewController;
@protocol OS_dispatch_semaphore;

@interface CLSNotificationBannerWindow : UIWindow

@property (retain, nonatomic) CLSNotificationBannerViewController *currentBannerViewController;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bannerSemaphore;

+ (id)bannerWindow;
+ (id)queue;
+ (void)enqueBanner:(id)a0;

- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_includeInDefaultImageSnapshot;
- (void).cxx_destruct;
- (id)init;
- (void)handlePan:(id)a0;
- (void)_showBanner:(id)a0;
- (void)_hideBanner:(id)a0 quickly:(BOOL)a1;

@end
