@protocol OspreyClientStreamingContext;

@interface FTTextToSpeechStreamingStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendTextToSpeechStreamingStreamingRequest:(id)a0;

@end
