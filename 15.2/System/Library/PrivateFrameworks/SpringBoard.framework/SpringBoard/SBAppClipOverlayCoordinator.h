@class NSMutableSet, NSMapTable;

@interface SBAppClipOverlayCoordinator : NSObject {
    NSMutableSet *_overlayViewControllers;
    NSMapTable *_participantForViewController;
}

- (void).cxx_destruct;
- (id)init;
- (id)overlayViewControllerForBundleIdentifier:(id)a0 webClipIdentifier:(id)a1 participant:(id)a2;
- (void)participant:(id)a0 didSurrenderViewController:(id)a1;
- (id)_existingOverlayViewControllerForWebClipIdentifier:(id)a0;

@end
