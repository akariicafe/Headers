@class NSString, NSArray, NSOrderedSet, CDMServiceGraphRunner, NSLock, CDMDataDispatcher;

@interface CDMComposerService : CDMBaseService {
    NSString *_languageCode;
    NSArray *_servicesArray;
    CDMServiceGraphRunner *_serviceGraphRunner;
    NSLock *_aneLock;
    NSOrderedSet *_availableServiceGraphs;
    NSString *_currentServiceGraph;
    CDMDataDispatcher *_dataDispatcherForUnitTestOnly;
}

- (id)supportedCommands;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)_handleListGraphs:(id)a0 withCallback:(id /* block */)a1;
- (void)updateServices:(id)a0;
- (void)_handleNLURequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleEmbeddingRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleNLUPreprocessRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleSetActiveGraph:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleSetupRequest:(id)a0 withCallback:(id /* block */)a1;
- (id)createWithId:(id)a0 serviceGraphType:(id)a1 graphInput:(id)a2 languageCode:(id)a3 dataDispatcher:(id)a4;
- (void)failWithError:(id)a0 callback:(id /* block */)a1;
- (void)failWithError:(id)a0 rawCommand:(id)a1 callback:(id /* block */)a2;
- (id)getCurrentServiceGraph;
- (id)getDataDispatcherForUnitTestOnly;
- (void)handleCommand:(id)a0 withCallback:(id /* block */)a1;
- (void)logNluRequestForInsights:(id)a0;
- (void)setCurrentServiceGraph:(id)a0;
- (void)updateServiceGraphRunner:(id)a0;

@end
