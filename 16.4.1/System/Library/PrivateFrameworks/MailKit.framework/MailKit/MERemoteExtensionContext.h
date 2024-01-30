@class NSString, NSMapTable, NSArray;
@protocol MEExtensionRemoteHostProtocol;

@interface MERemoteExtensionContext : NSExtensionContext <MERemoteExtensionProtocol>

@property (retain, nonatomic) NSMapTable *composeSessionToHandlerMap;
@property (readonly) id<MEExtensionRemoteHostProtocol> remoteHostPoxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *requiredHeaders;

+ (id)log;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteProxy;
- (void)dealloc;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (void)decideActionForMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)requiredHeadersWithCompletion:(id /* block */)a0;
- (id)_composeSessionInterfaceForSession:(id)a0;
- (id)_contentBlockerInterface;
- (id)_createPrincipalObject;
- (id)_extensionInterface;
- (id)_mailActionInterface;
- (id)_messageSecurityHandlerInterface;
- (id)additionalHeadersForSession:(id)a0;
- (id)contentRulesJSON;
- (void)contentRulesJSONWithCompletionHandler:(id /* block */)a0;
- (id)decodedMessageForMessageData:(id)a0;
- (void)decodedMessageForMessageData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)encodeMessage:(id)a0 composeContext:(id)a1 completionHandler:(id /* block */)a2;
- (id)extensionViewControllerForMessageContext:(id)a0;
- (id)extensionViewControllerForMessageSigners:(id)a0;
- (void)getEncodingStatusForMessage:(id)a0 composeContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)mailComposeSessionDidBegin:(id)a0;
- (void)mailComposeSessionDidEnd:(id)a0;
- (void)primaryActionClickedForMessageContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)session:(id)a0 annotateAddressesWithCompletionHandler:(id /* block */)a1;
- (void)session:(id)a0 canSendMessageWithCompletionHandler:(id /* block */)a1;
- (void)session:(id)a0 getAdditionalHeadersWithCompletion:(id /* block */)a1;
- (id)viewControllerForSession:(id)a0;

@end
