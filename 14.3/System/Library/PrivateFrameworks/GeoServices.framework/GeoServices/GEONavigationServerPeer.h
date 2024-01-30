@class NSString, GEONavigationServer;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)requestPositionFromSign;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestUpdates;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestNavigationVoiceVolume;
- (void)requestRouteSummary;
- (void)requestRideSelections;
- (void)requestPositionFromManeuver;
- (void)requestTransitSummary;
- (void)requestPositionFromDestination;

@end
