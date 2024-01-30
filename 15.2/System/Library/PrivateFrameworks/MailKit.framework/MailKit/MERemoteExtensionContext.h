@class NSString, NSArray;
@protocol MEExtensionRemoteHostProtocol;

@interface MERemoteExtensionContext : NSExtensionContext <MERemoteExtensionProtocol>

@property (readonly) id<MEExtensionRemoteHostProtocol> remoteHostPoxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *requiredHeaders;

+ (id)log;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)dealloc;
- (id)remoteProxy;
- (void)mailComposeSessionDidEnd:(id)a0;
- (void)mailComposeSessionDidBegin:(id)a0;
- (void)session:(id)a0 annotateAddressesWithCompletionHandler:(id /* block */)a1;
- (void)session:(id)a0 getAdditionalHeadersWithCompletion:(id /* block */)a1;
- (id)_createPrincipalObject;
- (id)_extensionInterface;
- (id)_contentBlockerInterface;
- (id)contentRulesJSON;
- (id)_mailActionInterface;
- (void)decideActionForMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)_composeSessionInterfaceForSession:(id)a0;
- (id)viewControllerForSession:(id)a0;
- (void)session:(id)a0 canSendMessageWithCompletionHandler:(id /* block */)a1;
- (id)additionalHeadersForSession:(id)a0;
- (id)_messageSecurityHandlerInterface;
- (void)getEncodingStatusForMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeMessage:(id)a0 shouldSign:(BOOL)a1 shouldEncrypt:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)decodedMessageForMessageData:(id)a0;
- (id)extensionViewControllerForMessageSigners:(id)a0;
- (void)requiredHeadersWithCompletion:(id /* block */)a0;
- (void)decodedMessageForMessageData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)contentRulesJSONWithCompletionHandler:(id /* block */)a0;

@end
