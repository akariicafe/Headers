@class NSString, NSUUID, NSArray, NSError, NSMutableDictionary, NSHashTable;

@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver> {
    NSUUID *_lastGuidanceSignID;
    NSArray *_lastARInfos;
    NSError *_previousSuppressedRerouteError;
    NSMutableDictionary *_displayETALookup;
    NSHashTable *_activeCameraInfos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)navigationSession:(id)a0 didStartWithRoute:(id)a1 navigationType:(int)a2 isReconnecting:(BOOL)a3;
- (void)navigationSession:(id)a0 didChangeNavigationState:(int)a1;
- (void)navigationSession:(id)a0 didStopWithReason:(unsigned long long)a1;
- (void)navigationSession:(id)a0 didUpdateMatchedLocation:(id)a1;
- (void)navigationSession:(id)a0 matchedToStepIndex:(unsigned long long)a1 segmentIndex:(unsigned long long)a2;
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
- (void)navigationSession:(id)a0 didSwitchToNewTransportType:(int)a1 newRoute:(id)a2;
- (void)navigationSession:(id)a0 didUpdateDestination:(id)a1;
- (void)navigationSession:(id)a0 didFailRerouteWithError:(id)a1;
- (void)navigationSession:(id)a0 didUpdateAlternateRoutes:(id)a1;
- (void)navigationSession:(id)a0 updateSignsWithInfo:(id)a1;
- (void)navigationSession:(id)a0 updateSignsWithARInfo:(id)a1;
- (void)navigationSession:(id)a0 didReceiveTrafficIncidentAlert:(id)a1 responseCallback:(id /* block */)a2;
- (id)_stringForLocationType:(unsigned long long)a0;
- (void)_updateCameraStyleAttributesForLocation:(id)a0;
- (id)_stringForStyleAttributeKey:(unsigned int)a0;

@end
