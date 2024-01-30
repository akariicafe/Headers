@protocol OspreyClientStreamingContext;

@interface FTMultiUserStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendMultiUserStreamingRequest:(id)a0;

@end
