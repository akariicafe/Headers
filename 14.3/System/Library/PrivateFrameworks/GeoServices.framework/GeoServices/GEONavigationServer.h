@class NSString, NSData, GEONavdPeer, NSMutableArray;

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface> {
    GEONavdPeer *_pushStatePeer;
    NSMutableArray *_listenerPeers;
    BOOL _isListenerConnectionOpen;
    int _listenerConnectionOpenToken;
    unsigned long long _state;
    int _transportType;
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

- (void)_forEachValidPeerProxyOnMainQueue:(id /* block */)a0;
- (void)setRouteSummaryWithActiveRouteDetailsData:(id)a0;
- (void)_requestGuidanceStateWithPeer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setRouteSummaryWithPositionFromManeuverData:(id)a0;
- (void)setRouteSummaryWithGuidanceStateData:(id)a0;
- (void)_sendMessage:(long long)a0 data:(id)a1 toPeer:(id)a2;
- (void)dealloc;
- (void)clearAllData;
- (void)setNavigationVoiceVolumeWithData:(id)a0;
- (void)_requestPositionFromSignWithPeer:(id)a0;
- (void)_updateAllPeersWithMessage:(long long)a0 data:(id)a1;
- (void)_requestStepIndexWithPeer:(id)a0;
- (void)setRouteSummaryWithPositionFromSignData:(id)a0;
- (void)_requestPositionFromDestinationWithPeer:(id)a0;
- (void)setNavigationSessionState:(unsigned long long)a0 transportType:(int)a1;
- (void)setRouteSummaryWithTransitSummaryData:(id)a0;
- (void)setRouteSummaryWithStepIndexData:(id)a0;
- (void)_requestPositionFromManeuverWithPeer:(id)a0;
- (void)_requestTransitSummaryWithPeer:(id)a0;
- (void)_openPushStatePeerConnection:(id)a0;
- (void)_requestRideSelectionsWithPeer:(id)a0;
- (void)setRouteSummaryWithPositionFromDestinationData:(id)a0;
- (void)_requestNavigationVoiceVolumeWithPeer:(id)a0;
- (void)setCurrentRoadName:(id)a0;
- (void)_requestActiveRouteDetailsDataWithPeer:(id)a0;
- (void)_closePushStatePeerConnection;
- (void)setRouteSummaryWithStepNameInfoData:(id)a0;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(id)a0;
- (void)_forEachValidPeerProxy:(id /* block */)a0;
- (void)_notifyListenersOpenConnection;
- (BOOL)shouldAcceptNewConnection:(id)a0 shouldCreateNavigationPeer:(BOOL)a1;
- (void)_requestStepNameInfoWithPeer:(id)a0;
- (void)_requestRouteSummaryWithPeer:(id)a0;
- (void)setRouteSummaryWithRideSelectionsData:(id)a0;

@end
