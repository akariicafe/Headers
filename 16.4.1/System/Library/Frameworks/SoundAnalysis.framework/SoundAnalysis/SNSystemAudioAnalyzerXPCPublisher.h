@protocol SNSystemAudioAnalyzerXPCProtocol, NSXPCProxyCreating;

@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol> {
    id<SNSystemAudioAnalyzerXPCProtocol, NSXPCProxyCreating> _subscriber;
}

- (void)removeAllRequests;
- (id)init;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)setAudioConfiguration:(id)a0;

@end
