@class NSString, GKGame;

@interface GKExtensionContext : NSExtensionContext <GKExtensionProtocol>

@property (nonatomic) long long sandboxToken;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)tearDownExtensionWithReply:(id /* block */)a0;
- (void)messageFromClient:(id)a0;
- (void)hostApp:(id)a0 grantingAccessExtensionSandbox:(id)a1 replyWithEndpoint:(id /* block */)a2;

@end
