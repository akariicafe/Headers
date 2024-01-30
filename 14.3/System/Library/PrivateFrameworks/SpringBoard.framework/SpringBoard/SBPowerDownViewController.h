@class NSString, SBPowerDownView;
@protocol SBPowerDownViewControllerDelegate;

@interface SBPowerDownViewController : SBTransientOverlayViewController <SBPowerDownViewDelegate> {
    unsigned long long _aggdStartTime;
    BOOL _canAlterScreenBrightness;
    SBPowerDownView *_powerDownView;
}

@property (weak, nonatomic) id<SBPowerDownViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleLockButtonPress;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)powerDownViewAnimateOutCompleted:(id)a0;
- (void)powerDownViewWillAnimateIn:(id)a0;
- (void)powerDownViewWillAnimateOut:(id)a0;
- (void)powerDownViewRequestPowerDown:(id)a0;
- (void)powerDownViewRequestCancel:(id)a0;
- (BOOL)shouldDisableSiri;
- (int)_preferredStatusBarVisibility;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldDisableControlCenter;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)idleTimerMode;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_beginTimeTracking;
- (void)_incrementCountForKey:(id)a0;
- (void)_endTimeTrackingIncludingReportWithKey:(id)a0;
- (void)_resetScreenBrightness;
- (void)powerDownViewDidBeginSlide:(id)a0;
- (void)powerDownView:(id)a0 didUpdateSlideWithValue:(double)a1;
- (void)powerDownViewDidCompleteSlide:(id)a0;
- (void)powerDownViewDidCancelSlide:(id)a0;
- (void)powerDownViewDidReceiveCancelButtonAction:(id)a0;
- (void)powerDownViewDidFireIdleTimer:(id)a0;
- (BOOL)allowsStackingOverlayContentAbove;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (BOOL)shouldDisableBanners;
- (BOOL)shouldPendAlertItems;

@end
