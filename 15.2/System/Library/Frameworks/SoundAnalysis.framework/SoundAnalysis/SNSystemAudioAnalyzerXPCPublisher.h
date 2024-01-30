@protocol SNSystemAudioAnalyzerXPCProtocol, NSXPCProxyCreating;

@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol> {
    id<SNSystemAudioAnalyzerXPCProtocol, NSXPCProxyCreating> _subscriber;
}

- (void)removeAllRequests;
- (void)start;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (id)init;
- (void)stop;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)setAudioConfiguration:(id)a0;
- (id)initWithSubscriber:(id)a0;

@end
