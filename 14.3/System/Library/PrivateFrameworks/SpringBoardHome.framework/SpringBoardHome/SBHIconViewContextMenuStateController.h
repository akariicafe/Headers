@class NSMutableSet, NSHashTable, NSMutableArray;

@interface SBHIconViewContextMenuStateController : NSObject {
    NSHashTable *_iconViews;
    NSMutableSet *_presentedWidgetsBundleIdentifiers;
    NSHashTable *_iconViewsPresentingContextMenues;
    NSHashTable *_iconViewsAnimatingContextMenues;
    NSMutableArray *_pendingIconAnimationCompletionBlocks;
}

@property (class, readonly, nonatomic) SBHIconViewContextMenuStateController *sharedInstance;

- (void)iconViewWillPresentContextMenu:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)noteFolderControllerWillClose:(id)a0;
- (void)iconViewWillAnimateContextMenu:(id)a0;
- (void)_firePendingIconAnimationBlocks;
- (void)performAfterContextMenuAnimationsHaveCompleted:(id /* block */)a0;
- (void)floatyFolderViewDidScrollHiddenIconViewAway:(id)a0;
- (void)iconViewDidAnimateContextMenu:(id)a0;
- (BOOL)areAnyIconViewContextMenusAnimating;
- (void)earlyTerminateAnyContextMenuAnimations;
- (BOOL)areAnyIconViewContextMenusShowing;
- (void)dismissAppIconForceTouchControllers:(id /* block */)a0;
- (void)unregisterIconView:(id)a0;
- (void)registerIconView:(id)a0;
- (void)iconViewWillDismissContextMenu:(id)a0;

@end
