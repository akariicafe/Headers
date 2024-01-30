@protocol SNSystemAudioAnalyzerXPCProtocol, NSXPCProxyCreating;

@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol> {
    id<SNSystemAudioAnalyzerXPCProtocol, NSXPCProxyCreating> _subscriber;
}

- (void)removeRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)removeAllRequests;
- (void)start;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (id)initWithSubscriber:(id)a0;

@end
