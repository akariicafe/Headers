@class SSActiveInterfaceOrientationObserver, NSObject, SSScreenshotsWindowRootViewController;
@protocol SSScreenshotsWindowDelegate, OS_dispatch_queue;

@interface SSScreenshotsWindow : UIWindow <SSDittoHostViewControllerDelegate, SSActiveInterfaceOrientationObserverDelegate> {
    SSActiveInterfaceOrientationObserver *_activeInterfaceOrientationObserver;
    SSScreenshotsWindowRootViewController *_root;
    long long _lastActiveInterfaceOrientation;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _lockNotificationToken;
    int _backlightNotificationToken;
}

@property (weak, nonatomic) id<SSScreenshotsWindowDelegate> delegate;

+ (BOOL)_isSecure;

- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (BOOL)_canBecomeKeyWindow;
- (id)init;
- (void).cxx_destruct;
- (void)activeInterfaceOrientationObserver:(id)a0 observedChangeToInterfaceOrientation:(long long)a1 withDuration:(double)a2;
- (void)remoteViewControllerDisconnectedFromHostViewController:(id)a0 withError:(id)a1;
- (void)dealloc;
- (void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)a0;
- (void)_deviceBacklightChanged:(unsigned long long)a0;
- (void)_prepareRemoteViewControllerWithCompletionHandler:(id /* block */)a0;
- (void)activateRemoteViewControllerIfAppropriate;
- (void)_deviceLockStateChanged:(unsigned long long)a0;
- (void)_dismiss;
- (BOOL)_shouldControlAutorotation;
- (id)_hostViewControllerIfExists;

@end
