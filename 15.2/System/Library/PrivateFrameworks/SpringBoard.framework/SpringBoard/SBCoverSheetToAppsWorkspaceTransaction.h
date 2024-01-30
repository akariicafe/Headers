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
- (void)_autoPIPIfNeeded;
- (unsigned long long)_dismissOverlaysOptions;
- (void)_dismissOverlaysIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
