@class NSString, MNObserverHashTable, MNNavigationState, GEOApplicationAuditToken;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface> {
    MNObserverHashTable *_navigationStateObservers;
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
- (void)vibrateForPrompt:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)transitionToState:(id)a0;
- (void)switchToRoute:(id)a0;
- (void)setCurrentAudioOutputSetting:(id)a0;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)a0;
- (void)setFullGuidanceMode:(BOOL)a0;
- (void)setRideIndex:(unsigned long long)a0 forSegmentIndex:(unsigned long long)a1;
- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (void)changeSettings:(id)a0;
- (void)setHFPPreference:(BOOL)a0 forSetting:(id)a1;
- (void)stopNavigation;
- (void)resumeOriginalDestination;
- (void)setTraceIsPlaying:(BOOL)a0;
- (void)stopPredictingDestinations;
- (void)setHeadingOrientation:(int)a0;
- (void)acceptReroute:(BOOL)a0 forTrafficIncidentAlert:(id)a1;
- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)recordPedestrianTracePath:(id)a0;
- (void)setGuidancePromptsEnabled:(BOOL)a0;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)a0;
- (void)startPredictingDestinationsWithHandler:(id /* block */)a0;
- (void)setIsConnectedToCarplay:(BOOL)a0;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (id)init;
- (void)updateDestination:(id)a0;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)a0;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)interfaceHashesWithHandler:(id /* block */)a0;
- (void)setTracePlaybackSpeed:(double)a0;
- (id)_initialState;
- (void)setTracePosition:(double)a0;
- (void)stopCurrentGuidancePrompt;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)checkinForNavigationService:(id /* block */)a0;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_replayStateForNewObserver:(id)a0;
- (void)reset;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)dealloc;
- (void)commuteSessionDidArrive:(id)a0;
- (void)addObserver:(id)a0;
- (id)navSessionDestination;
- (void)commuteSession:(id)a0 didUpdateDestinations:(id)a1;
- (void)start;
- (unsigned long long)_stateTypeForState:(id)a0;
- (void)_changeToDesiredLocationProviderTypeForState:(id)a0;

@end
