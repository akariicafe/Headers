@class NSString, GEONavigationServer;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>

@property (weak, nonatomic) GEONavigationServer *delegate;
@property (nonatomic) BOOL hasEntitlement;
@property (readonly, nonatomic) BOOL wantsRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPositionFromDestination;
- (void)requestActiveRouteDetailsData;
- (void)dealloc;
- (void)requestTransitSummary;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestRoute;
- (void)requestPositionFromManeuver;
- (void)requestETAUpdate;
- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestNavigationVoiceVolume;
- (void)requestGuidanceState;
- (void).cxx_destruct;
- (void)requestStepNameInfo;
- (void)setWantsRoutes:(BOOL)a0;
- (void)requestUpdates;

@end
