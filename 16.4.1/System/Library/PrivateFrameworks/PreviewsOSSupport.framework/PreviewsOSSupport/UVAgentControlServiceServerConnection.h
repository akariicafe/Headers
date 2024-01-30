@class NSString;

@interface UVAgentControlServiceServerConnection : UVBSConnection <UVBSServerConnection, UVAgentControlServiceProtocol>

@property (readonly) int clientPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activate;
- (oneway void)connectHostMessagePipeWithEndpoint:(id)a0;
- (oneway void)connectJITWithEndpoint:(id)a0;
- (oneway void)connectShellMessagePipeWithEndpoint:(id)a0;
- (oneway void)copyURLWithURLWrapperData:(id)a0 reply:(id /* block */)a1;
- (oneway void)createPreviewNonUIAgentWithEndpoint:(id)a0;
- (oneway void)createPreviewSceneAgentWithEndpoint:(id)a0 forSceneIdentifier:(id)a1;
- (oneway void)grantExecutePermissionWithURLWrapperData:(id)a0 reply:(id /* block */)a1;

@end
