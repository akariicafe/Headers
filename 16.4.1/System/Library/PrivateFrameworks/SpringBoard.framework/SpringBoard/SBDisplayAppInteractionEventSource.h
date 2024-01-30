@class SBLayoutStateTransitionCoordinator, NSString, SBApplicationRestrictionController, NSHashTable, SBApplicationController, BKSTouchDeliveryObservationService, SBFAnalyticsClient;
@protocol FBSDisplayLayoutPublishing;

@interface SBDisplayAppInteractionEventSource : NSObject <BKSTouchDeliveryObserving, FBSDisplayLayoutPublisherObserving, SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver, SBAppInteractionEventSourceProviding>

@property (copy, nonatomic) NSString *currentFocusedBundleID;
@property (readonly, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) BKSTouchDeliveryObservationService *touchDeliveryObservationService;
@property (retain, nonatomic) id<FBSDisplayLayoutPublishing> displayLayoutPublisher;
@property (weak, nonatomic) SBApplicationController *applicationController;
@property (weak, nonatomic) SBApplicationRestrictionController *applicationRestrictionController;
@property (weak, nonatomic) SBFAnalyticsClient *analyticsClient;
@property (weak, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publisher:(id)a0 didUpdateLayout:(id)a1 withTransition:(id)a2;
- (void)_installedAppsDidChange:(id)a0;
- (void)windowSceneDidConnect:(id)a0;
- (void)applicationRestrictionController:(id)a0 didUpdateVisibleTags:(id)a1 hiddenTags:(id)a2;
- (void)touchUpOccuredForIdentifier:(unsigned int)a0 detached:(BOOL)a1 context:(unsigned int)a2 pid:(int)a3;
- (void)addObserver:(id)a0;
- (void)_iconVisibilityDidChange:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void)touchDetachedForIdentifier:(unsigned int)a0 context:(unsigned int)a1 pid:(int)a2;
- (id)_bundleIDsForIcons:(id)a0;
- (void)_configureEventSourceWithAnalyticsClient:(id)a0 applicationController:(id)a1 applicationRestrictionController:(id)a2 iconModel:(id)a3 layoutStateTransitionCoordinator:(id)a4 displayLayoutPublisher:(id)a5 touchDeliveryObservationService:(id)a6;
- (id)_initWithAnalyticsClient:(id)a0 applicationController:(id)a1 applicationRestrictionController:(id)a2 iconModel:(id)a3 layoutStateTransitionCoordinator:(id)a4 displayLayoutPublisher:(id)a5 touchDeliveryObservationService:(id)a6;
- (void)_noteTouchForProcess:(int)a0 context:(unsigned int)a1;
- (void)_notifyTransition:(id)a0 beginning:(BOOL)a1;
- (void)_userQuitApplication:(id)a0;
- (void)_userRemovedSuggestion:(id)a0;
- (void)_webBookmarkUninstalled:(id)a0;

@end
