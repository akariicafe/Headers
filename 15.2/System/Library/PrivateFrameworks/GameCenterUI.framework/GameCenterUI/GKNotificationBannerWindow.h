@class GKNotificationBannerViewController, NSObject;
@protocol OS_dispatch_semaphore;

@interface GKNotificationBannerWindow : UIWindow

@property (retain, nonatomic) GKNotificationBannerViewController *currentBannerViewController;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *bannerSemaphore;

+ (id)bannerWindow;
+ (id)queue;
+ (void)enqueBanner:(id)a0;

- (void)handleSingleTap:(id)a0;
- (BOOL)_canAffectStatusBarAppearance;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_includeInDefaultImageSnapshot;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handlePan:(id)a0;
- (void)_showBanner:(id)a0;
- (void)_hideBanner:(id)a0 quickly:(BOOL)a1;

@end
