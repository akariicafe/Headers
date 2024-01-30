@class AVRoutingSessionInternal, AVRoutingSessionDestination;

@interface AVRoutingSession : NSObject {
    AVRoutingSessionInternal *_ivars;
}

@property (readonly) AVRoutingSessionDestination *destination;
@property (readonly) BOOL establishedAutomaticallyFromLikelyDestination;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithFigRoutingSession:(struct OpaqueFigRoutingSession { } *)a0;

@end
