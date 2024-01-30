@class NSString;

@interface UVAgentPreviewSceneServiceServerConnection : UVBSConnection <UVBSServerConnection, UVAgentPreviewSceneServiceProtocol>

@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly) int clientPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activate;
- (void).cxx_destruct;
- (oneway void)generateStaticOutput:(id /* block */)a0;
- (oneway void)performUpdate:(id)a0 sceneContext:(id)a1 replyHandler:(id /* block */)a2;
- (oneway void)sendEndpoint:(id)a0 context:(id)a1 contentIdentifier:(id)a2;
- (void)initializeWithClientContext:(id)a0;

@end
