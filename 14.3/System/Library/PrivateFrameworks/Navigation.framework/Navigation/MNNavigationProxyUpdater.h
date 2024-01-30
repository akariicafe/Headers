@class NSString, GEONavigationProxy, MNCompanionNavigationAdapter;

@interface MNNavigationProxyUpdater : NSObject <MNNavigationSessionObserver> {
    GEONavigationProxy *_navigationProxy;
    MNCompanionNavigationAdapter *_companionNavigationAdapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)setIsConnectedToCarplay:(BOOL)a0;
- (void)setIsNavigatingInLowGuidance:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setVoiceVolume:(unsigned long long)a0;
- (void)navigationSession:(id)a0 didChangeNavigationState:(int)a1;
- (void)navigationSession:(id)a0 didUpdateMatchedLocation:(id)a1;
- (void)navigationSession:(id)a0 matchedToStepIndex:(unsigned long long)a1 segmentIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didUpdateStepNameInfo:(id)a1;
- (void)navigationSession:(id)a0 didUpdateDisplayETA:(id)a1 remainingDistance:(id)a2;
- (void)navigationSession:(id)a0 didReroute:(id)a1 withLocation:(id)a2 withAlternateRoutes:(id)a3 rerouteReason:(unsigned long long)a4;
- (void)navigationSession:(id)a0 didSwitchToNewTransportType:(int)a1 newRoute:(id)a2;
- (void)navigationSession:(id)a0 didUpdateDestination:(id)a1;
- (void)navigationSession:(id)a0 currentStepIndex:(unsigned long long)a1 didUpdateDistanceUntilSign:(double)a2 timeUntilSign:(double)a3;
- (void)navigationSession:(id)a0 currentStepIndex:(unsigned long long)a1 didUpdateDistanceUntilManeuver:(double)a2 timeUntilManeuver:(double)a3;
- (void)navigationSession:(id)a0 willAnnounce:(unsigned long long)a1 inSeconds:(double)a2;
- (void)navigationSession:(id)a0 triggerHaptics:(int)a1;
- (void)navigationSession:(id)a0 displayManeuverAlertForAnnouncementStage:(unsigned long long)a1;
- (void)navigationSession:(id)a0 didEnableGuidancePrompts:(BOOL)a1;
- (void)enteredRoutePreviewWithTransportType:(int)a0;
- (void)navigationSessionStopped:(id)a0;
- (void)navigationSessionStarted:(id)a0 navigationType:(int)a1;
- (void)updateClusteredSectionSelectedRideForNavigationSession:(id)a0;
- (int)_geoNavigationTypeForNavigationType:(int)a0;

@end
