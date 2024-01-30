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

- (void)activateRemoteViewControllerIfAppropriate;
- (void)_deviceLockStateChanged:(unsigned long long)a0;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)a0;
- (id)_hostViewControllerIfExists;
- (BOOL)_canBecomeKeyWindow;
- (void).cxx_destruct;
- (id)init;
- (void)_deviceBacklightChanged:(unsigned long long)a0;
- (void)_dismiss;
- (BOOL)_shouldControlAutorotation;
- (void)remoteViewControllerDisconnectedFromHostViewController:(id)a0 withError:(id)a1;
- (void)activeInterfaceOrientationObserver:(id)a0 observedChangeToInterfaceOrientation:(long long)a1 withDuration:(double)a2;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)_prepareRemoteViewControllerWithCompletionHandler:(id /* block */)a0;

@end
