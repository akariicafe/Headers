@protocol OspreyClientStreamingContext;

@interface FTTextToSpeechRouterStreamingStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendTextToSpeechRouterStreamingStreamingRequest:(id)a0;

@end
