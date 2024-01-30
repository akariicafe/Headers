@class NSData, NSString, GEOComposedRoute, GEOArrivalTimeAndDistanceInfo, NSMutableSet, NSObject, GEOLocation, GEONavdPeer;
@protocol OS_dispatch_queue;

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    GEONavdPeer *_pushStatePeer;
    NSMutableSet *_listenerPeers;
    NSMutableSet *_unEntitledPeers;
    BOOL _isListenerConnectionOpen;
    int _listenerConnectionOpenToken;
    unsigned long long _state;
    int _transportType;
    GEOLocation *_lastLocation;
    struct { unsigned int index; float offset; } _lastRouteMatchedCoordinate;
    BOOL _isResumingMultipointRoute;
    GEOComposedRoute *_route;
    GEOArrivalTimeAndDistanceInfo *_timeAndDistanceInfo;
    NSData *_routeSummaryData;
    NSData *_transitSummaryData;
    NSData *_guidanceStateData;
    NSData *_activeRouteDetailsData;
    NSData *_stepIndexData;
    NSData *_stepNameInfoData;
    NSData *_rideSelectionsData;
    NSData *_positionFromSignData;
    NSData *_positionFromManeuverData;
    NSData *_positionFromDestinationData;
    NSData *_navigationVoiceVolumeData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)clearAllData;
- (void)setRoute:(id)a0;
- (void)setCurrentRoadName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_requestRideSelectionsWithPeer:(id)a0;
- (void)_requestTransitSummaryWithPeer:(id)a0;
- (void)_closePushStatePeerConnection;
- (void)_forEachValidPeer:(id /* block */)a0;
- (void)_forEachValidPeerOnIsolationQueue:(id /* block */)a0;
- (void)_notifyListenersOpenConnection;
- (void)_openPushStatePeerConnection:(id)a0;
- (void)_requestActiveRouteDetailsDataWithPeer:(id)a0;
- (void)_requestETAWithPeer:(id)a0;
- (void)_requestGuidanceStateWithPeer:(id)a0;
- (void)_requestNavigationVoiceVolumeWithPeer:(id)a0;
- (void)_requestPositionFromDestinationWithPeer:(id)a0;
- (void)_requestPositionFromManeuverWithPeer:(id)a0;
- (void)_requestPositionFromSignWithPeer:(id)a0;
- (void)_requestRouteSummaryWithPeer:(id)a0;
- (void)_requestRouteWithPeer:(id)a0;
- (void)_requestStepIndexWithPeer:(id)a0;
- (void)_requestStepNameInfoWithPeer:(id)a0;
- (void)_sendMessage:(long long)a0 data:(id)a1 toPeer:(id)a2;
- (void)_updateAllPeersWithMessage:(long long)a0 data:(id)a1;
- (void)setArrivedAtWaypoint:(id)a0 endOfLegIndex:(unsigned long long)a1;
- (void)setETAUpdate:(id)a0;
- (void)setLocation:(id)a0 routeMatchedCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)setNavigationSessionState:(unsigned long long)a0 transportType:(int)a1 isResumingMultipointRoute:(BOOL)a2;
- (void)setNavigationVoiceVolumeWithData:(id)a0;
- (void)setResumedNavigatingFromWaypoint:(id)a0 endOfLegIndex:(unsigned long long)a1;
- (void)setRouteSummaryWithActiveRouteDetailsData:(id)a0;
- (void)setRouteSummaryWithGuidanceStateData:(id)a0;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(id)a0;
- (void)setRouteSummaryWithPositionFromDestinationData:(id)a0;
- (void)setRouteSummaryWithPositionFromManeuverData:(id)a0;
- (void)setRouteSummaryWithPositionFromSignData:(id)a0;
- (void)setRouteSummaryWithRideSelectionsData:(id)a0;
- (void)setRouteSummaryWithStepIndexData:(id)a0;
- (void)setRouteSummaryWithStepNameInfoData:(id)a0;
- (void)setRouteSummaryWithTransitSummaryData:(id)a0;
- (BOOL)shouldAcceptNewConnection:(id)a0 shouldCreateNavigationPeer:(BOOL)a1;
- (void)updateTrafficForCurrentRoute:(id)a0;

@end
