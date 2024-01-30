@protocol OspreyClientStreamingContext;

@interface FTSpeechTranslationStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)sendSpeechTranslationStreamingRequest:(id)a0;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;

@end
