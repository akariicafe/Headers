@class NSString, NSMutableDictionary;
@protocol SNSystemAudioAnalyzerProtocol;

@interface SNSystemAudioAnalyzerXPCSubscriber : NSObject <SNSystemAudioAnalyzerProtocol, SNSystemAudioAnalyzerXPCProtocol> {
    NSMutableDictionary *_remoteObservers;
    id<SNSystemAudioAnalyzerProtocol> _receiver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)removeAllRequests;
- (void)start;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (id)initWithReceiver:(id)a0;
- (void)xpcAddRequest:(id)a0 withObserver:(id)a1 completionHandler:(id /* block */)a2;
- (void)xpcRemoveRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)xpcRemoveAllRequestsWithCompletionHandler:(id /* block */)a0;
- (void)xpcStartWithCompletionHandler:(id /* block */)a0;
- (void)xpcStopWithCompletionHandler:(id /* block */)a0;

@end
