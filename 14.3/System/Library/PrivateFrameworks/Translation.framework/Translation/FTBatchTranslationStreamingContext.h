@protocol OspreyClientStreamingContext;

@interface FTBatchTranslationStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)sendBatchTranslationStreamingRequest:(id)a0;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;

@end
