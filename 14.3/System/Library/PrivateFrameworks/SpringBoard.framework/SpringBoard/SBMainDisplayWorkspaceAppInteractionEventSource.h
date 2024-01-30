@class NSString, SBLayoutStateTransitionCoordinator, NSHashTable;

@interface SBMainDisplayWorkspaceAppInteractionEventSource : NSObject <SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver, BKSTouchDeliveryObserving> {
    NSHashTable *_observers;
    SBLayoutStateTransitionCoordinator *_stateCoordinator;
}

@property (copy, nonatomic) NSString *currentFocusedBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (id)init;
- (void)_webBookmarkUninstalled:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_userRemovedSuggestion:(id)a0;
- (void)dealloc;
- (id)_bundleIDsForIcons:(id)a0;
- (void)_installedAppsDidChange:(id)a0;
- (void)addObserver:(id)a0;
- (void)touchUpOccuredForIdentifier:(unsigned int)a0 detached:(BOOL)a1 context:(unsigned int)a2 pid:(int)a3;
- (void)_displayLayoutDidUpdate:(id)a0;
- (void)_userQuitApplication:(id)a0;
- (void)_notifyTransition:(id)a0 beginning:(BOOL)a1;
- (void)touchDetachedForIdentifier:(unsigned int)a0 context:(unsigned int)a1 pid:(int)a2;
- (void)_noteTouchForProcess:(int)a0;
- (void)applicationRestrictionController:(id)a0 didUpdateVisibleTags:(id)a1 hiddenTags:(id)a2;
- (void)_iconVisibilityDidChange:(id)a0;

@end
