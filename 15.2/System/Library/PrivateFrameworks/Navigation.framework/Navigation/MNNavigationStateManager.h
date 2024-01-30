@class NSString, MNObserverHashTable, MNNavigationState, GEOApplicationAuditToken, geo_isolater;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface> {
    BOOL _isStarted;
    MNNavigationState *_currentState;
    MNObserverHashTable *_navigationStateObservers;
    geo_isolater *_isolater;
}

@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (weak, nonatomic) id<MNNavigationSessionManagerDelegate> navigationDelegate;
@property (readonly, nonatomic) BOOL isStarted;
@property (readonly, nonatomic) MNNavigationState *currentState;
@property (readonly, nonatomic) unsigned long long currentStateType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setCurrentState:(id)a0;
- (void)setTraceIsPlaying:(BOOL)a0;
- (void)transitionToState:(id)a0;
- (void)setHeadingOrientation:(int)a0;
- (unsigned long long)_stateTypeForState:(id)a0;
- (id)_initialState;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)a0;
- (void)setGuidanceType:(unsigned long long)a0;
- (void)forceReroute;
- (void)setIsConnectedToCarplay:(BOOL)a0;
- (void)_replayStateForNewObserver:(id)a0;
- (void)_changeToDesiredLocationProviderTypeForState:(id)a0;
- (void)setTracePlaybackSpeed:(double)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)addObserver:(id)a0;
- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)setRideIndex:(unsigned long long)a0 forSegmentIndex:(unsigned long long)a1;
- (void)removeObserver:(id)a0;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)vibrateForPrompt:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)a0;
- (void)disableNavigationCapability:(unsigned long long)a0;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)a0;
- (void)start;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)recordPedestrianTracePath:(id)a0;
- (void)acceptReroute:(BOOL)a0 forTrafficIncidentAlert:(id)a1;
- (void)changeUserOptions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setGuidancePromptsEnabled:(BOOL)a0;
- (void)enableNavigationCapability:(unsigned long long)a0;
- (void)setTracePosition:(double)a0;
- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void)switchToRoute:(id)a0;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)stopCurrentGuidancePrompt;
- (void)updateDestination:(id)a0;
- (void)dealloc;
- (void)resumeOriginalDestination;
- (void)reset;
- (id)navSessionDestination;
- (void)checkinForNavigationService:(id /* block */)a0;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (void)interfaceHashesWithHandler:(id /* block */)a0;

@end
