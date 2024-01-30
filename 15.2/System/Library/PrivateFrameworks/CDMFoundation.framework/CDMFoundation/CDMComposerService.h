@class NSOrderedSet, NSString, NSDictionary, NSMutableDictionary, NSArray, CDMServiceGraphRunner, NSLock;

@interface CDMComposerService : CDMBaseService {
    NSString *_languageCode;
    NSDictionary *_startCommand;
    NSMutableDictionary *_clientIdPropDict;
    NSArray *_servicesArray;
    CDMServiceGraphRunner *_serviceGraphRunner;
    NSLock *_aneLock;
    NSOrderedSet *_availableServiceGraphs;
    NSString *_currentServiceGraph;
}

- (id)supportedCommands;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)handleCommand:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleSetupRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleXPCConnectionUpdate:(id)a0;
- (void)_handleSetActiveGraph:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleListGraphs:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleNLURequest:(id)a0 withCallback:(id /* block */)a1;
- (void)logNluRequestForInsights:(id)a0;
- (void)failWithError:(id)a0 rawCommand:(id)a1 callback:(id /* block */)a2;
- (id)createWithId:(id)a0 serviceGraphType:(id)a1 graphInput:(id)a2 languageCode:(id)a3 startCommand:(id)a4 selfMetadata:(id)a5;
- (void)updateServices:(id)a0;
- (void)updateServiceGraphRunner:(id)a0;
- (void)setCurrentServiceGraph:(id)a0;
- (id)getCurrentServiceGraph;

@end
