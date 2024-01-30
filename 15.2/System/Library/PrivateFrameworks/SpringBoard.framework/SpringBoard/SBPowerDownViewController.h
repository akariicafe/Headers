@class SBFUserAuthenticationController, SBPasscodeEntryTransientOverlayViewController, NSString, SPBeaconManager, SBPowerDownView;
@protocol SBFLockOutStatusProvider, SBPowerDownViewControllerDelegate;

@interface SBPowerDownViewController : SBTransientOverlayViewController <SBPowerDownViewDelegate, SBPasscodeEntryTransientOverlayViewControllerDelegate> {
    unsigned long long _aggdStartTime;
    BOOL _canAlterScreenBrightness;
    SBPowerDownView *_powerDownView;
}

@property (retain, nonatomic) SPBeaconManager *beaconManager;
@property (retain, nonatomic) SBPasscodeEntryTransientOverlayViewController *passcodeEntryTransientOverlayViewController;
@property (retain, nonatomic) SBFUserAuthenticationController *userAuthController;
@property (nonatomic) BOOL userWantsFindMySuppressed;
@property (retain, nonatomic) id<SBFLockOutStatusProvider> lockOutController;
@property (weak, nonatomic) id<SBPowerDownViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;
- (void)viewDidLoad;
- (BOOL)passcodeEntryTransientOverlayViewController:(id)a0 authenticatePasscode:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)handleLockButtonPress;
- (long long)idleTimerMode;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldDisableSiri;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (id)passcodeEntryTransientOverlayViewControllerStatusText;
- (int)_preferredStatusBarVisibility;
- (BOOL)shouldDisableControlCenter;
- (void)_setPasscodeVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)powerDownViewAnimateOutCompleted:(id)a0;
- (void)powerDownViewWillAnimateIn:(id)a0;
- (void)powerDownViewWillAnimateOut:(id)a0;
- (void)powerDownViewRequestPowerDown:(id)a0;
- (void)powerDownViewRequestCancel:(id)a0;
- (void)showPowerDownFindMyAlert;
- (void)showPowerDownFindMyAlertWithProceed:(id /* block */)a0 cancelCompletion:(id /* block */)a1;
- (void)_beginTimeTracking;
- (void)_incrementCountForKey:(id)a0;
- (void)_endTimeTrackingIncludingReportWithKey:(id)a0;
- (void)_resetScreenBrightness;
- (void)userAcknowledgedFindMyInfo;
- (void)didTapTemporarilyDisableFindMy;
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
