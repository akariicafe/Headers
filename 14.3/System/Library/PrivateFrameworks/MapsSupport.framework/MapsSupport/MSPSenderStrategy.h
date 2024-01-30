@class NSMutableDictionary, GEOSharedNavState, NSMutableSet, MSPSharedTripGroupSession;

@interface MSPSenderStrategy : NSObject {
    MSPSharedTripGroupSession *_groupSession;
}

@property (retain, nonatomic) NSMutableDictionary *destinationSentStates;
@property (retain, nonatomic) NSMutableDictionary *etaSentStates;
@property (retain, nonatomic) NSMutableDictionary *lastEtaUpdateDates;
@property (retain, nonatomic) NSMutableDictionary *routeSentStates;
@property (retain, nonatomic) NSMutableDictionary *trafficSentStates;
@property (retain, nonatomic) NSMutableSet *participants;
@property (copy, nonatomic) GEOSharedNavState *state;

- (void).cxx_destruct;
- (void)addParticipants:(id)a0;
- (BOOL)removeParticipant:(id)a0;
- (void)_sendDestinationReachedUpdate:(id)a0 to:(id)a1;
- (void)_sendStoppedUpdate:(id)a0 to:(id)a1;
- (id)initWithGroupSession:(id)a0;
- (void)restoreState:(id)a0;
- (void)removeParticipants:(id)a0;
- (void)_sendDestinationUpdate:(id)a0 to:(id)a1;
- (void)_sendETAUpdate:(id)a0 to:(id)a1;
- (void)_sendRouteUpdate:(id)a0 to:(id)a1;
- (void)_sendTrafficUpdate:(id)a0 to:(id)a1;
- (void)etaUpdated:(id)a0;
- (void)destinationUpdated:(id)a0;
- (void)routeUpdated:(id)a0;
- (void)trafficUpdated:(id)a0;
- (void)stateUpdated:(id)a0;
- (void)destinationReached:(id)a0;
- (void)sessionStopped:(id)a0;

@end
