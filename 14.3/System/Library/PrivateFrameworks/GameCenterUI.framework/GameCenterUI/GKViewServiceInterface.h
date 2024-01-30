@interface GKViewServiceInterface : NSXPCInterface

+ (id)gameCenterServiceViewControllerInterface;
+ (id)gameCenterHostViewControllerInterface;
+ (id)matchmakerServiceViewControllerInterface;
+ (id)matchmakerHostViewControllerInterface;
+ (id)challengeIssueServiceViewControllerInterface;
+ (id)challengeIssueHostViewControllerInterface;
+ (void)_configureKVOTypes:(id)a0;
+ (void)setClassesForHostInterface:(id)a0;
+ (void)setClassesForExtensionInterface:(id)a0;
+ (id)remoteFriendRequestViewControllerInterface;
+ (id)serviceFriendRequestViewControllerInterface;
+ (id)turnBasedServiceViewControllerInterface;
+ (id)turnBasedHostViewControllerInterface;
+ (id)extensionHostInterface;
+ (id)extensionInterface;
+ (id)signInServiceViewControllerInterface;
+ (id)remoteSignInViewControllerInterface;

@end
