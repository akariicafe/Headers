@protocol OspreyClientStreamingContext;

@interface FTSpeechTranslationStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (void)sendSpeechTranslationStreamingRequest:(id)a0;
- (id)initWithGRPCStreamingCallContext:(id)a0;

@end
