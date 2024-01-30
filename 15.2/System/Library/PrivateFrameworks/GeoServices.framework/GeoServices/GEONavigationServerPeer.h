@class NSString, GEONavigationServer;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (nonatomic) BOOL hasEntitlement;
@property (readonly, nonatomic) BOOL wantsRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestPositionFromDestination;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void).cxx_destruct;
- (void)requestRideSelections;
- (void)requestTransitSummary;
- (void)dealloc;
- (void)requestUpdates;
- (void)setWantsRoutes:(BOOL)a0;
- (void)requestNavigationVoiceVolume;
- (void)requestStepNameInfo;
- (void)requestRoute;

@end
