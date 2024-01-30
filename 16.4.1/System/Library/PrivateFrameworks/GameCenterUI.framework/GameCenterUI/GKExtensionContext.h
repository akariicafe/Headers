@class NSString;

@interface GKExtensionContext : NSExtensionContext <GKExtensionProtocol>

@property (nonatomic) long long sandboxToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)hostApp:(id)a0 grantingAccessExtensionSandbox:(id)a1 replyWithEndpoint:(id /* block */)a2;
- (void)messageFromClient:(id)a0;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)tearDownExtensionWithReply:(id /* block */)a0;

@end
