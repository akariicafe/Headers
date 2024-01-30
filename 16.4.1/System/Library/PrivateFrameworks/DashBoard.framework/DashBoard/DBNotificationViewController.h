@class DBEnvironmentConfiguration, DBBannerAuthority, NSString, BNBannerSourceListener, UITapGestureRecognizer, BNContentViewController, FBScene, BNBannerHostMonitor, BNBannerController, NSMutableSet;
@protocol DBNotificationViewControllerDelegate;

@interface DBNotificationViewController : UIViewController <BNBannerSourceListenerDelegate, BNPresentingDelegate, FBSceneObserver, BSInvalidatable, DBNotificationSuspending>

@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (retain, nonatomic) id screenBorrowToken;
@property (retain, nonatomic) NSString *screenBorrowingPresentableRequestID;
@property (readonly, nonatomic) BNBannerHostMonitor *bannerHostMonitor;
@property (readonly, nonatomic) BNBannerController *bannerController;
@property (readonly, nonatomic) BNBannerSourceListener *bannerSourceListener;
@property (readonly, nonatomic) BNContentViewController *bannerContentViewController;
@property (readonly, nonatomic) DBBannerAuthority *bannerAuthority;
@property (readonly, nonatomic) UITapGestureRecognizer *tapDismissGestureRecognizer;
@property (readonly, weak, nonatomic) id<DBNotificationViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *suspensionReasons;
@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) FBScene *visibleNotificationScene;
@property (readonly, nonatomic) double notificationHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bannerSourceListener:(id)a0 requestsPostingPresentable:(id)a1 options:(unsigned long long)a2 userInfo:(id)a3 error:(id *)a4;
- (void)setSuspended:(BOOL)a0 forReason:(id)a1;
- (void)presenter:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 withTransitionCoordinator:(id)a2;
- (void)presenterRequestsVisibility:(id)a0;
- (BOOL)shouldFenceAnimationsForPresentable:(id)a0;
- (id)_layoutManager;
- (void)presenter:(id)a0 willPresentPresentable:(id)a1 withTransitionCoordinator:(id)a2 userInfo:(id)a3;
- (void)presenterRelinquishesVisibility:(id)a0;
- (BOOL)bannerSourceListener:(id)a0 recommendsSuspending:(BOOL)a1 forReason:(id)a2 revokingCurrent:(BOOL)a3 error:(id *)a4;
- (void)presenter:(id)a0 willDismissPresentable:(id)a1 withTransitionCoordinator:(id)a2 userInfo:(id)a3;
- (id)bannerSourceListener:(id)a0 layoutDescriptionWithError:(id *)a1;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })presenter:(id)a0 gestureRecognizer:(id)a1 translationInView:(id)a2;
- (struct CGPoint { double x0; double x1; })presenter:(id)a0 gestureRecognizer:(id)a1 locationForTouch:(id)a2 inView:(id)a3;
- (void)invalidate;
- (id)bannerSourceListener:(id)a0 requestsRevokingPresentablesWithIdentification:(id)a1 reason:(id)a2 animated:(BOOL)a3 userInfo:(id)a4 error:(id *)a5;
- (id)panGestureRecognizerForPresenter:(id)a0;
- (struct CGPoint { double x0; double x1; })presenter:(id)a0 gestureRecognizer:(id)a1 velocityInView:(id)a2;
- (void).cxx_destruct;
- (void)loadView;
- (id)defaultTransitioningDelegateForPresenter:(id)a0;
- (id)sceneSpecificationForBannerSourceListener:(id)a0;
- (BOOL)handleHomeEvent;
- (id)_layoutDescriptionWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (void)_performCancelTapGesture:(id)a0;
- (void)handleTransitionFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithEnvironmentConfiguration:(id)a0 delegate:(id)a1;
- (void)setSuspended:(BOOL)a0 cancellingCurrent:(BOOL)a1 forReason:(id)a2;

@end
