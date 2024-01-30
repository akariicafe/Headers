@class SNAudioConfiguration, NSMutableDictionary, NSObject;
@protocol SNSystemAudioAnalyzerProtocol, OS_dispatch_queue;

@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {
    NSMutableDictionary *_registeredRequests;
    id<SNSystemAudioAnalyzerProtocol> _analyzer;
    id /* block */ _generator;
    NSObject<OS_dispatch_queue> *_queue;
    SNAudioConfiguration *_audioConfiguration;
}

- (void)removeAllRequests;
- (id)init;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)setAudioConfiguration:(id)a0;

@end
