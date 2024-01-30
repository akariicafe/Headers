@class NSString, GKHostedAuthenticateViewController;

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol>

@property (weak, nonatomic) GKHostedAuthenticateViewController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authenticateExtension;
+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;

- (void)applicationWillTerminate:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (void)messageFromExtension:(id)a0;

@end
