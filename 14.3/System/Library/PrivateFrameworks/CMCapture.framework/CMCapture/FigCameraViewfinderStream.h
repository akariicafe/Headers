@class FigStateMachine, FigDelegateStorage;

@interface FigCameraViewfinderStream : NSObject {
    FigDelegateStorage *_delegateStorage;
    FigStateMachine *_stateMachine;
    struct OpaqueFigEndpoint { } *_endpoint;
    struct OpaqueFigEndpointStream { } *_stream;
    struct OpaqueFigVirtualDisplaySource { } *_displaySource;
    id _endpointsChangedNotificationToken;
    id _streamsChangedNotificationToken;
}

+ (void)initialize;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)close;
- (int)enqueueVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (void)_setEndpoint:(struct OpaqueFigEndpoint { } *)a0;
- (void)_handleStreamsChanged:(id)a0;
- (void)_handleEndpointsChanged:(id)a0;
- (void)_setupStateMachine;
- (void)openWithDestination:(id)a0;

@end
