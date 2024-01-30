@class SBDismissOverlaysAnimationController, SBTransientOverlayDismissAllWorkspaceTransaction;

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBDismissOverlaysAnimationController *_dismissOverlaysAnimationController;
    SBTransientOverlayDismissAllWorkspaceTransaction *_transientOverlayTransaction;
}

@property (nonatomic) BOOL preservesBanners;

- (id)initWithTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (void)_dismissOverlaysIfNeeded;
- (void)_begin;
- (unsigned long long)_dismissOverlaysOptions;

@end
