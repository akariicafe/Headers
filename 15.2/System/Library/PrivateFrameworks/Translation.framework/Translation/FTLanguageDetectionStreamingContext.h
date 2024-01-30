@protocol OspreyClientStreamingContext;

@interface FTLanguageDetectionStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendLanguageDetectionStreamingRequest:(id)a0;

@end
