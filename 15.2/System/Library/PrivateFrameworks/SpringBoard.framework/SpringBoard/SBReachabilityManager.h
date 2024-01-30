@class NSHashTable, NSString, SBScreenEdgePanGestureRecognizer, UITransform, UITapGestureRecognizer, SBHomeGestureParticipant, SBFZStackParticipant, UIPanGestureRecognizer, SBReachabilityGestureRecognizer, NSMutableSet, SBReachabilityWindow;

@interface SBReachabilityManager : NSObject <SBSystemGestureRecognizerDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate> {
    NSHashTable *_observers;
    unsigned long long _reachabilityExtensionGenerationCount;
    BOOL _reachabilityModeEnabled;
    NSMutableSet *_temporaryEnabledReasons;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityWindow *_reachabilityWindow;
    UITransform *_reachabilityTransform;
    UITransform *_inverseReachabilityTransform;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBFZStackParticipant *_zStackParticipant;
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

- (void)zStackParticipantDidChange:(id)a0;
- (void)toggleReachability;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_screenDidDim;
- (void)_setupGestureRecognizers;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)dealloc;
- (void)deactivateReachability;
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
- (void)setReachabilityTemporarilyEnabled:(BOOL)a0 forReason:(id)a1;
- (void)ignoreWindowForReachability:(id)a0;

@end
