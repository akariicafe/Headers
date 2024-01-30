@class NSUUID, NSString, NSTimer, SBTransientOverlayViewController;
@protocol SBInteractiveScreenshotCommitWorkspaceTransactionDelegate;

@interface SBInteractiveScreenshotCommitWorkspaceTransaction : SBMainWorkspaceTransaction <SBTransientOverlayPresentWorkspaceTransactionObserver> {
    BOOL _hasBeganPresentation;
    BOOL _hasFinishedPresentation;
    BOOL _hasQueuedPresentationTransaction;
    BOOL _hasRequestedPlaceholderChromeRemoval;
    BOOL _hasWatchdogExpired;
    NSTimer *_watchdogTimeoutTimer;
}

@property (readonly, copy, nonatomic) NSUUID *gestureSessionID;
@property (nonatomic) BOOL hasFinishedFlashAnimation;
@property (nonatomic) BOOL hasFinishedSettlingAnimation;
@property (retain, nonatomic) SBTransientOverlayViewController *screenshotMarkupTransientOverlayViewController;
@property (weak, nonatomic) id<SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> interactiveScreenshotCommitDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_begin;
- (void)_updateState;
- (void).cxx_destruct;
- (void)_handleWatchdogTimeout;
- (id)initWithTransitionRequest:(id)a0 gestureSessionID:(id)a1;
- (void)transientOverlayPresentWorkspaceTransactionDidPerformPresentation:(id)a0;

@end
