@class NSArray, NSString, GKChallengeIssueHostViewController, GKChallenge;

@interface GKHostedChallengeIssueController : UIViewController <GKExtensionParentViewControllerProtocol>

@property (retain, nonatomic) NSArray *players;
@property (copy, nonatomic) NSString *defaultMessage;
@property (retain, nonatomic) GKChallenge *challenge;
@property (nonatomic) BOOL forcePicker;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) GKChallengeIssueHostViewController *remoteViewController;
@property (copy, nonatomic) id /* block */ receivedRemoteHandler;
@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)presentationQueue;
+ (id)hostedIssueControllerWithChallenge:(id)a0 players:(id)a1 defaultMessage:(id)a2 completionHandler:(id /* block */)a3;
+ (void)presentHostedIssueControllerWithChallenge:(id)a0 players:(id)a1 defaultMessage:(id)a2;

- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (void)doneWithPlayers:(id)a0 message:(id)a1;
- (void)extensionDidFinishWithError:(id)a0;
- (id)initWithChallenge:(id)a0 players:(id)a1 defaultMessage:(id)a2 completionHandler:(id /* block */)a3;

@end
