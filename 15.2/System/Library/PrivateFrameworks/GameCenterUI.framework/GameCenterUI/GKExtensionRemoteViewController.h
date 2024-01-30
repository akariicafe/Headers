@class NSString, NSExtension, GKGame;

@interface GKExtensionRemoteViewController : _UIRemoteViewController <GKExtensionProtocol, GKExtensionHostProtocol>

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id requestIdentifier;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (void)setupCallbackBlocksForExtension:(id)a0 withParentViewController:(id)a1;
+ (void)viewControllerForExtension:(id)a0 inputItems:(id)a1 completionHandler:(id /* block */)a2;
+ (id)initialItemsForExtension;
+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)dealloc;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (long long)_desiredStatusBarStyle;
- (void)messageFromExtension:(id)a0;
- (void)cancelExtension;
- (void)tearDownExtensionWithReply:(id /* block */)a0;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)messageFromClient:(id)a0;
- (void)sendMessageToExtension:(id)a0;
- (void)hostApp:(id)a0 grantingAccessExtensionSandbox:(id)a1 replyWithEndpoint:(id /* block */)a2;
- (void)extensionIsFinishing;

@end
