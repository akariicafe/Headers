@class NSMutableDictionary, NSObject;
@protocol SNSystemAudioAnalyzerProtocol, OS_dispatch_queue;

@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {
    NSMutableDictionary *_registeredRequests;
    id<SNSystemAudioAnalyzerProtocol> _analyzer;
    id /* block */ _generator;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)connectionLostError;

- (void)removeRequest:(id)a0;
- (id)init;
- (id)initWithClient:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)_removeAllRequests;
- (void)stop;
- (void)removeAllRequests;
- (void)start;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)_removeRequest:(id)a0;
- (id)initWithRemoteAnalyzerGenerator:(id /* block */)a0 queue:(id)a1;
- (void)_invalidateAnalyzer:(id)a0;
- (void)_invalidateActiveAnalyzer;
- (id)_acquireSystemAudioAnalyzer;
- (void)_addRequest:(id)a0 withObserver:(id)a1;
- (void)invalidateActiveAnalyzer;

@end
