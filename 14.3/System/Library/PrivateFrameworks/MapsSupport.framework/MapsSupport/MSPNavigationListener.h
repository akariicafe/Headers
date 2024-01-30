@class NSString, GEOSharedNavState, GEONavigationListener, GEONavigationGuidanceState, NSObject;
@protocol MSPNavigationListenerDelegate, OS_os_transaction;

@interface MSPNavigationListener : NSObject <GEONavigationListenerDelegate, MNNavigationServiceObserver> {
    GEONavigationListener *_outOfNavListener;
    GEONavigationGuidanceState *_guidanceState;
    NSObject<OS_os_transaction> *_transaction;
    GEOSharedNavState *_state;
    NSString *_navigationSessionIdentifier;
    BOOL _transitioningToNavigationState;
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

- (void)_updateTraffic:(id)a0;
- (void)navigationListener:(id)a0 didChangeNavigationState:(unsigned long long)a1 transportType:(int)a2;
- (void)navigationListener:(id)a0 didUpdateGuidanceState:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)navigationService:(id)a0 didArriveAtWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)dealloc;
- (void)navigationService:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)_updateETA:(id)a0 remainingDistance:(id)a1;
- (void)_updateNavigationServiceForCurrentState;
- (void)_updateRoute:(id)a0;
- (void)navigationService:(id)a0 didUpdateDisplayETA:(id)a1 remainingDistance:(id)a2;
- (void)navigationService:(id)a0 didUpdateTraffic:(id)a1;
- (void)_updateLocation:(id)a0;
- (void)navigationService:(id)a0 didReroute:(id)a1;
- (void)navigationService:(id)a0 willChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)navigationService:(id)a0 didUpdateMatchedLocation:(id)a1;
- (void)navigationService:(id)a0 didFailWithError:(id)a1;
- (int)_referenceFrameForDestination:(id)a0;
- (void)_initState;

@end
