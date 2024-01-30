@class SBDismissOverlaysAnimationController, SBAutoPIPWorkspaceTransaction, SBTransientOverlayDismissAllWorkspaceTransaction;

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBDismissOverlaysAnimationController *_dismissOverlaysAnimationController;
    SBTransientOverlayDismissAllWorkspaceTransaction *_transientOverlayTransaction;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
}

@property (nonatomic) BOOL preservesBanners;

- (id)initWithTransitionRequest:(id)a0;
- (void)_begin;
- (void)_didComplete;
- (void)_dismissOverlaysIfNeeded;
- (void)_autoPIPIfNeeded;
- (void)dealloc;
- (unsigned long long)_dismissOverlaysOptions;
- (void).cxx_destruct;

@end
