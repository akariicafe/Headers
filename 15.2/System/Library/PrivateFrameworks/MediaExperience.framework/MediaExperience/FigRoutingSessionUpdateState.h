@class ARPPredictionContext;

@interface FigRoutingSessionUpdateState : NSObject

@property (retain, nonatomic) struct OpaqueFigRoutingSession { } *newSession;
@property (retain, nonatomic) ARPPredictionContext *predictionContext;

- (void)dealloc;
- (id)initWithNewSession:(struct OpaqueFigRoutingSession { } *)a0;

@end
