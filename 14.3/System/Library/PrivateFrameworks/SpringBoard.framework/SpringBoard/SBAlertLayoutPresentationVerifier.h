@class UIWindow, NSString, BSMonotonicReferenceTime, NSMutableArray, SBSharedModalAlertItemPresenter;

@interface SBAlertLayoutPresentationVerifier : NSObject <SBUIActiveOrientationObserver, SBReachabilityObserver> {
    BOOL _pendingLayoutVerification;
    NSMutableArray *_updateReasons;
    UIWindow *_alertWindow;
    SBSharedModalAlertItemPresenter *_alertPresenter;
    BSMonotonicReferenceTime *_firstLogEventTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleReachabilityYOffsetDidChange;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAlertPresenter:(id)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)setAlertItemWindow:(id)a0;
- (void)scheduleAlertLayoutVerificationForReason:(id)a0;

@end
