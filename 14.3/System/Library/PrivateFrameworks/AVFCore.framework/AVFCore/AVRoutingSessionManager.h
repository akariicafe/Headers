@class NSArray, AVRoutingSessionManagerInternal, AVRoutingSession;

@interface AVRoutingSessionManager : NSObject {
    AVRoutingSessionManagerInternal *_ivars;
}

@property (readonly) AVRoutingSession *currentRoutingSession;
@property (readonly) NSArray *likelyExternalDestinations;
@property (readonly) NSArray *allLikelyDestinations;
@property (readonly) BOOL prefersLikelyDestinationsOverCurrentRoutingSession;

+ (void)initialize;
+ (id)longFormVideoRoutingSessionManager;

- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager { } *)a0;
- (BOOL)stopSuppressingLikelyDestinationsAndReturnError:(id *)a0;
- (id)description;
- (BOOL)startRoutingSessionWithOutputDeviceDescriptions:(id)a0 error:(id *)a1;
- (BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id *)a0;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(id /* block */)a0;

@end
