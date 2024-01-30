@class AVRoutingSessionInternal, AVRoutingSessionDestination;

@interface AVRoutingSession : NSObject {
    AVRoutingSessionInternal *_ivars;
}

@property (readonly) AVRoutingSessionDestination *destination;
@property (readonly) BOOL establishedAutomaticallyFromLikelyDestination;

- (void)dealloc;
- (id)init;
- (id)description;
- (id)initWithFigRoutingSession:(struct OpaqueFigRoutingSession { } *)a0;

@end
