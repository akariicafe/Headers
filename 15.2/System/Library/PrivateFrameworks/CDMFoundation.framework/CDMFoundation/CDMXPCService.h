@class NSObject, NSString, AFPreferences, NSMutableArray, CDMXPCListener;
@protocol OS_dispatch_queue;

@interface CDMXPCService : CDMBaseService <CDMXPCConnectionDelegate> {
    CDMXPCListener *_listener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_localeIdentifier;
    AFPreferences *_afPreferences;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isErrorFatal:(id)a0;

- (void)setLocaleIdentifier:(id)a0;
- (id)supportedCommands;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)_handleNewConnection:(id)a0;
- (void)handleCommand:(id)a0 withCallback:(id /* block */)a1;
- (void)_initializeXPCListener;
- (void)_handleGenericSend:(id)a0 withCallback:(id /* block */)a1;
- (BOOL)publishErrorIfNilLanguage:(id)a0 withClientId:(id)a1;
- (BOOL)validResponseType:(id)a0 expectedKindOfClass:(Class)a1 outError:(id *)a2;
- (void)smXPCConnectionDidDisconnect:(id)a0;
- (void)smXPCConnectionNLU:(id)a0 nluRequest:(id)a1;
- (void)smXPCConnectionSetup:(id)a0 setupRequest:(id)a1;
- (void)smXPCConnectionListGraphs:(id)a0 withReply:(id /* block */)a1;
- (void)smXPCConnectionSetGraph:(id)a0 activeGraph:(id)a1 withReply:(id /* block */)a2;
- (void)smXPCConnection:(id)a0 didReceiveUpdate:(id)a1;
- (id)getLocaleIdentifier;

@end
