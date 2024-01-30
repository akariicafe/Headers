@class NSString, GEOSharedNavState, GEONavigationListener, GEONavigationGuidanceState, NSObject;
@protocol MSPNavigationListenerDelegate, OS_os_transaction;

@interface MSPNavigationListener : NSObject <GEONavigationListenerDelegate> {
    GEONavigationListener *_navigationListener;
    GEONavigationGuidanceState *_guidanceState;
    NSObject<OS_os_transaction> *_transaction;
    GEOSharedNavState *_state;
    BOOL _postedStateIsReady;
    NSString *_navigationSessionIdentifier;
}

@property (retain, nonatomic) GEOSharedNavState *currentState;
@property (weak, nonatomic) id<MSPNavigationListenerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *navigationSessionIdentifier;
@property (readonly, nonatomic) BOOL isInNavigatingState;
@property (readonly, nonatomic) BOOL isCompatibleTransportType;
@property (readonly, nonatomic) BOOL isCompatibleNavigationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)_referenceFrameForDestination:(id)a0;
- (void)navigationListener:(id)a0 didUpdateTrafficForCurrentRoute:(id)a1;
- (BOOL)_updateDestinationIfNeeded:(id)a0;
- (void)_updateETAWithArrival:(struct { double x0; double x1; })a0;
- (void)navigationListener:(id)a0 didUpdateLocation:(id)a1;
- (void)navigationListener:(id)a0 didArriveAtWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)_checkStateIsReady;
- (void)_performDelegateNotificationBlockIfReady:(id /* block */)a0;
- (void)navigationListener:(id)a0 didUpdateGuidanceState:(id)a1;
- (void)_updateTransaction;
- (void)_updateTraffic:(id)a0;
- (int)_currentTransportType;
- (void).cxx_destruct;
- (void)_initPendingStateIfNeeded;
- (void)_updateLocation:(id)a0;
- (id)init;
- (void)_updateRoute:(id)a0;
- (void)navigationListener:(id)a0 didUpdateRoute:(id)a1;
- (void)dealloc;
- (void)navigationListener:(id)a0 didChangeNavigationState:(unsigned long long)a1 transportType:(int)a2;
- (void)navigationListener:(id)a0 didUpdatePositionFromDestination:(struct { double x0; double x1; })a1;
- (void)navigationListener:(id)a0 didUpdateRouteSummary:(id)a1;
- (int)_analyticsPipelineTransportModeForGEOTransportType:(int)a0;

@end
