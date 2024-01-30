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

- (BOOL)startRoutingSessionWithOutputDeviceDescriptions:(id)a0 error:(id *)a1;
- (BOOL)stopSuppressingLikelyDestinationsAndReturnError:(id *)a0;
- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager { } *)a0;
- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (id)init;
- (BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id *)a0;
- (void)dealloc;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(id /* block */)a0;

@end
