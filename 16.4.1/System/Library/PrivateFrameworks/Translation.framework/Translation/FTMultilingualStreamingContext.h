@protocol OspreyClientStreamingContext;

@interface FTMultilingualStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendMultilingualStreamingRequest:(id)a0;

@end
