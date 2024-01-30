@class NSHashTable, NSString, SBScreenEdgePanGestureRecognizer, UITransform, UITapGestureRecognizer, SBHomeGestureParticipant, UIPanGestureRecognizer, SBReachabilityGestureRecognizer, NSMutableSet, SBReachabilityWindow;

@interface SBReachabilityManager : NSObject <SBSystemGestureRecognizerDelegate, SBHomeGestureParticipantDelegate> {
    NSHashTable *_observers;
    unsigned long long _reachabilityExtensionGenerationCount;
    BOOL _reachabilityModeEnabled;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityWindow *_reachabilityWindow;
    UITransform *_reachabilityTransform;
    UITransform *_inverseReachabilityTransform;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    SBHomeGestureParticipant *_homeGestureParticipant;
    NSHashTable *_ignoredWindows;
    long long _animationsInFlight;
}

@property (readonly, nonatomic) BOOL reachabilityModeActive;
@property (nonatomic) BOOL reachabilityEnabled;
@property (readonly, nonatomic) SBReachabilityGestureRecognizer *reachabilityGestureRecognizer;
@property (readonly, nonatomic) SBScreenEdgePanGestureRecognizer *dismissEdgeGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (readonly, nonatomic) double reachabilityYOffset;
@property (readonly, nonatomic) double effectiveReachabilityYOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)reachabilitySupported;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)toggleReachability;
- (void)addObserver:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)deactivateReachability;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_screenDidDim;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_setupGestureRecognizers;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)_handleSignificantTimeChanged;
- (BOOL)canActivateReachability;
- (void)_toggleReachabilityMode;
- (void)_updateReachabilityModeActive:(BOOL)a0;
- (void)_modifyDefaultPresentationContextHostTransformForWindow:(id)a0 fromTransform:(id)a1 toTransform:(id)a2;
- (void)_updateReachabilityModeActive:(BOOL)a0 animated:(BOOL)a1;
- (void)_setKeepAliveTimer;
- (void)_setupReachabilityWindowIfNecessary;
- (void)_tearDownReachabilityWindow;
- (void)_updateReachabilityWindowForYOffset:(double)a0 mode:(long long)a1 completion:(id /* block */)a2;
- (void)_notifyObserversReachabilityModeActive:(BOOL)a0;
- (void)_pingKeepAliveWithDuration:(double)a0 interactedBeforePing:(BOOL)a1 initialKeepAliveTime:(double)a2;
- (void)_activateReachability:(id)a0;
- (void)_panToDeactivateReachability:(id)a0;
- (void)_tapToDeactivateReachability:(id)a0;
- (id)_sceneForWindow:(id)a0;
- (void)_transitionWithTransformer:(id)a0 fromTransform:(id)a1 toTransform:(id)a2;
- (void)_notifyObserversWillBeginReachabilityAnimation;
- (id)ignoredWindows;
- (void)_notifyObserversReachabilityYOffsetDidChange;
- (void)_notifyObserversDidEndReachabilityAnimation;
- (void)setReachabilityTemporarilyDisabled:(BOOL)a0 forReason:(id)a1;
- (void)ignoreWindowForReachability:(id)a0;

@end
