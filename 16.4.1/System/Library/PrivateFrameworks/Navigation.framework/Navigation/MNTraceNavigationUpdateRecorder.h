@class NSString, MNTraceRecorder;

@interface MNTraceNavigationUpdateRecorder : NSObject <MNNavigationSessionObserver> {
    MNTraceRecorder *_traceRecorder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_recordRouteChangeWithRouteInfo:(id)a0 reason:(unsigned long long)a1;
- (id)initWithTraceRecorder:(id)a0;
- (void)navigationSession:(id)a0 didReroute:(id)a1 withLocation:(id)a2 withAlternateRoutes:(id)a3 rerouteReason:(unsigned long long)a4;
- (void)navigationSession:(id)a0 didResumeNavigatingFromWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2 reason:(unsigned long long)a3;
- (void)navigationSession:(id)a0 didSwitchToNewTransportType:(int)a1 newRoute:(id)a2;

@end
