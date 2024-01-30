@class BKSTouchDeliveryObservationService, NSString, NSHashTable, SBFAnalyticsClient, SBApplicationRestrictionController, SBApplicationController, FBMainDisplayLayoutPublisher, SBLayoutStateTransitionCoordinator;

@interface SBMainDisplayWorkspaceAppInteractionEventSource : NSObject <BKSTouchDeliveryObserving, FBSDisplayLayoutPublisherObserving, SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver> {
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSString *currentFocusedBundleID;
@property (weak, nonatomic) BKSTouchDeliveryObservationService *touchDeliveryObservationService;
@property (weak, nonatomic) FBMainDisplayLayoutPublisher *mainDisplayLayoutPublisher;
@property (weak, nonatomic) SBApplicationController *applicationController;
@property (weak, nonatomic) SBApplicationRestrictionController *applicationRestrictionController;
@property (weak, nonatomic) SBFAnalyticsClient *analyticsClient;
@property (weak, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationRestrictionController:(id)a0 didUpdateVisibleTags:(id)a1 hiddenTags:(id)a2;
- (void)publisher:(id)a0 didUpdateLayout:(id)a1 withTransition:(id)a2;
- (void)_installedAppsDidChange:(id)a0;
- (void)_userQuitApplication:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_noteTouchForProcess:(int)a0 context:(unsigned int)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)touchUpOccuredForIdentifier:(unsigned int)a0 detached:(BOOL)a1 context:(unsigned int)a2 pid:(int)a3;
- (id)_initWithAnalyticsClient:(id)a0 applicationController:(id)a1 applicationRestrictionController:(id)a2 iconModel:(id)a3 layoutStateTransitionCoordinator:(id)a4 mainDisplayLayoutPublisher:(id)a5 touchDeliveryObservationService:(id)a6;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_notifyTransition:(id)a0 beginning:(BOOL)a1;
- (void)touchDetachedForIdentifier:(unsigned int)a0 context:(unsigned int)a1 pid:(int)a2;
- (void)_webBookmarkUninstalled:(id)a0;
- (id)_bundleIDsForIcons:(id)a0;
- (void)dealloc;
- (void)_userRemovedSuggestion:(id)a0;
- (void)_iconVisibilityDidChange:(id)a0;

@end
