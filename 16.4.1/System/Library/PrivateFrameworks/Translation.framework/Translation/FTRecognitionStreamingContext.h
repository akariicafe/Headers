@protocol OspreyClientStreamingContext;

@interface FTRecognitionStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendRecognitionStreamingRequest:(id)a0;

@end
