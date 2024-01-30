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

- (void)removeAllRequests;
- (id)init;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)setAudioConfiguration:(id)a0;
- (void)xpcAddRequest:(id)a0 withObserver:(id)a1 completionHandler:(id /* block */)a2;
- (void)xpcRemoveAllRequestsWithCompletionHandler:(id /* block */)a0;
- (void)xpcRemoveRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)xpcSetAudioConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
