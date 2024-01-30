@protocol OspreyClientStreamingContext;

@interface FTBatchTranslationStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (void)sendBatchTranslationStreamingRequest:(id)a0;
- (id)initWithGRPCStreamingCallContext:(id)a0;

@end
