@interface SBInCallTransientOverlayManager : NSObject

- (id)_remoteTransientOverlaySessionManager;
- (id)_newAlertDefinition;
- (void)presentTransientOverlay;
- (void)presentTransientOverlayForActivityContinuationWithActivityIdentifier:(id)a0;
- (void)presentTransientOverlayForUILock;

@end
