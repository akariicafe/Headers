@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, GEONavigationListenerDelegate;

@interface GEONavigationListener : NSObject <GEONavigationServerListenerXPCInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _navigationStartedToken;
    int _navigationStoppedToken;
    int _navigationRoutePreviewToken;
    int _transportType;
}

@property (weak, nonatomic) id<GEONavigationListenerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long navigationState;
@property (readonly, nonatomic) NSString *currentRoadName;
@property (copy, nonatomic) id /* block */ routeSummaryUpdatedHandler;
@property (copy, nonatomic) id /* block */ transitSummaryUpdatedHandler;
@property (copy, nonatomic) id /* block */ guidanceStateUpdatedHandler;
@property (copy, nonatomic) id /* block */ activeRouteDetailsDataUpdatedHandler;
@property (copy, nonatomic) id /* block */ stepIndexUpdatedHandler;
@property (copy, nonatomic) id /* block */ rideSelectionsUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromSignUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromManeuverUpdatedHandler;
@property (copy, nonatomic) id /* block */ positionFromDestinationUpdatedHandler;
@property (copy, nonatomic) id /* block */ navigationVoiceVolumeUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routeSummaryUpdatedWithGuidanceStateData:(id)a0;
- (void)_notifyWithPositionFromSign:(struct { double x0; double x1; })a0;
- (void)navigationStateChanged:(unsigned long long)a0 transportType:(int)a1;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)a0;
- (void)currentRoadNameUpdated:(id)a0;
- (void)dealloc;
- (void)requestPositionFromSign;
- (void)_notifyWithGuidanceState:(id)a0;
- (void)navigationUpdatedWithVoiceVolumeData:(id)a0;
- (void)_notifyWithPositionFromManeuver:(struct { double x0; double x1; })a0;
- (void)_notifyWithActiveRouteDetailsData:(id)a0;
- (void)routeSummaryUpdatedWithTransitSummaryData:(id)a0;
- (void)routeSummaryUpdatedWithPositionFromSignData:(id)a0;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)_notifyWithRouteSummary:(id)a0;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(id)a0;
- (void)_notifyWithRideSelections:(id)a0;
- (void)_notifyWithStepNameInfo:(id)a0;
- (void)_open;
- (void)_connectToDaemonIfNeeded;
- (void)_notifyWithTransitSummary:(id)a0;
- (void)requestStepIndex;
- (void)_close;
- (void)routeSummaryUpdatedWithRideSelectionData:(id)a0;
- (void)_notifyWithStepIndex:(unsigned long long)a0;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(id)a0;
- (void)requestStepNameInfo;
- (unsigned long long)_listenerStateForSessionState:(unsigned long long)a0;
- (void)routeSummaryUpdatedWithStepIndexData:(id)a0;
- (void)requestNavigationVoiceVolume;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)a0;
- (void)requestRouteSummary;
- (void)_notifyWithPositionFromDestination:(struct { double x0; double x1; })a0;
- (void)requestRideSelections;
- (void)routeSummaryUpdatedWithStepNameInfoData:(id)a0;
- (void)requestPositionFromManeuver;
- (void)_notifyWithNavigationVoiceVolume:(int)a0;
- (void)requestTransitSummary;
- (void)requestPositionFromDestination;

@end
