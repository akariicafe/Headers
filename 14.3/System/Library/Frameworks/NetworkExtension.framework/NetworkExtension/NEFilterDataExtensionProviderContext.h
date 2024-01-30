@class NSXPCListenerEndpoint, NSMutableDictionary, NSDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_source;

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>

@property (nonatomic) BOOL controlProviderExists;
@property (retain, nonatomic) NSObject<OS_xpc_object> *clientListener;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain, nonatomic) NSMutableDictionary *browserFlows;
@property (retain, nonatomic) NSMutableDictionary *socketFlows;
@property (retain, nonatomic) NSMutableDictionary *channelFlows;
@property (retain, nonatomic) NSMutableArray *socketExceptions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (retain, nonatomic) NSDictionary *remediationMap;
@property (retain, nonatomic) NSDictionary *URLAppendStringMap;
@property (retain, nonatomic) NSMutableArray *pendingConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)report:(id)a0;
- (id)extensionPoint;
- (void)stopWithReason:(int)a0;
- (Class)requiredProviderSuperClass;
- (void)startFilterWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)provideRemediationMap:(id)a0;
- (void)provideURLAppendStringMap:(id)a0;
- (void)fetchProviderConnectionWithCompletionHandler:(id /* block */)a0;
- (void)providerControlSocketFileHandle:(id)a0;
- (void)handleRulesChanged;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)fetchCurrentRulesForFlow:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSourceAppInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)applySettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)closePendingConnections;
- (void)teardownSocketSource;
- (void)setupSocketContentFilterWithControlSocket:(int)a0;
- (void)acceptNewClientConnection:(id)a0;
- (void)closeFlow:(id)a0;
- (void)reportFlow:(id)a0 forVerdict:(id)a1 absoluteVerdict:(id)a2;
- (void)handleNewFlowMessage:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)closeChannelFlow:(id)a0;
- (void)handleAddDataMessage:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleDataCompleteMessage:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleRemediationMessage:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)closeBrowserFilterFlow:(id)a0;
- (void)handleNewChannelFlowMessage:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleChannelMessageMoreData:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleChannelMessageFlowFinish:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleChannelMessageStatsReport:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleClientMessage:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)tearDownConnection:(id)a0;
- (void)handleSocketSourceEventWithSocket:(int)a0;
- (void)setupSocketSourceWithControlSocket:(int)a0;
- (void)reportFlow:(id)a0 forVerdict:(id)a1 event:(long long)a2;
- (id)adjustDataToFilter:(id)a0 startOffset:(unsigned long long *)a1 flow:(id)a2 direction:(long long)a3;
- (void)closeSocketFlow:(id)a0 socketID:(unsigned long long)a1;
- (void)handleNewFlow:(id)a0 reply:(id)a1 controlSocket:(int)a2 completionHandler:(id /* block */)a3;
- (void)handleData:(id)a0 offset:(unsigned long long)a1 forFlow:(id)a2 direction:(long long)a3 reply:(id)a4 controlSocket:(int)a5 completionHandler:(id /* block */)a6;
- (BOOL)blessClient:(id)a0;
- (void)handleDataCompleteForFlow:(id)a0 direction:(long long)a1 reply:(id)a2 controlSocket:(int)a3 completionHandler:(id /* block */)a4;
- (void)reportFlowClosed:(id)a0;
- (void)purgeData:(int)a0 size:(int)a1 buf:(char *)a2 bufSize:(int)a3;
- (void)reportFlowStats:(id)a0;
- (void)resumeFlow:(id)a0 withVerdict:(id)a1;
- (void)updateFlow:(id)a0 withVerdict:(id)a1 forDirection:(long long)a2;

@end
