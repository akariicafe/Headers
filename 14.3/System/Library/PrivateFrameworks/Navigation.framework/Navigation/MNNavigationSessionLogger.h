@class NSString, NSUUID, NSMutableDictionary, NSError;

@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver> {
    NSUUID *_lastGuidanceSignID;
    NSError *_previousSuppressedRerouteError;
    NSMutableDictionary *_displayETALookup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)navigationSession:(id)a0 didChangeNavigationState:(int)a1;
- (void)navigationSessionDidStop:(id)a0;
- (void)navigationSession:(id)a0 shouldEndWithReason:(unsigned long long)a1;
- (void)navigationSession:(id)a0 didUpdateMatchedLocation:(id)a1;
- (void)navigationSession:(id)a0 didEnterPreArrivalStateForWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didArriveAtWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didResumeNavigatingFromWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSessionDidEnterPreArrivalState:(id)a0;
- (void)navigationSessionDidArrive:(id)a0;
- (void)navigationSession:(id)a0 didUpdateDisplayETA:(id)a1 remainingDistance:(id)a2;
- (void)navigationSession:(id)a0 didUpdateETAResponseForRoute:(id)a1;
- (void)navigationSessionWillReroute:(id)a0;
- (void)navigationSession:(id)a0 didSuppressReroute:(id)a1;
- (void)navigationSessionDidCancelReroute:(id)a0;
- (void)navigationSession:(id)a0 didReroute:(id)a1 withLocation:(id)a2 withAlternateRoutes:(id)a3 rerouteReason:(unsigned long long)a4;
- (void)navigationSession:(id)a0 didUpdateDestination:(id)a1;
- (void)navigationSession:(id)a0 didFailRerouteWithError:(id)a1;
- (void)navigationSession:(id)a0 didUpdateAlternateRoutes:(id)a1;
- (void)navigationSession:(id)a0 updateSignsWithInfo:(id)a1;
- (void)startLoggingWithRouteInfo:(id)a0 navigationType:(int)a1 isReconnecting:(BOOL)a2;
- (id)_stringForLocationType:(unsigned long long)a0;

@end
