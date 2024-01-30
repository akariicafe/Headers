@class GKExtensionRemoteViewController, NSString, GKGame;

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol>

@property (weak, nonatomic) GKExtensionRemoteViewController *remoteViewController;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messageFromExtension:(id)a0;

@end
