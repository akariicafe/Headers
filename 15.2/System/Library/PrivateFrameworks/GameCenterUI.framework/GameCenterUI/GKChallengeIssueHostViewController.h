@class NSString, GKHostedChallengeIssueController, GKGame;

@interface GKChallengeIssueHostViewController : GKExtensionRemoteViewController <GKChallengeIssueHostProtocol>

@property (weak, nonatomic) GKHostedChallengeIssueController *delegate;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)challengeExtension;

- (void).cxx_destruct;
- (void)messageFromExtension:(id)a0;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;

@end
