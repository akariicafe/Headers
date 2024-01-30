@interface GKViewServiceInterface : NSXPCInterface

+ (id)extensionHostInterface;
+ (id)extensionInterface;
+ (id)challengeIssueServiceViewControllerInterface;
+ (id)challengeIssueHostViewControllerInterface;
+ (id)gameCenterServiceViewControllerInterface;
+ (id)gameCenterHostViewControllerInterface;
+ (id)turnBasedServiceViewControllerInterface;
+ (id)turnBasedHostViewControllerInterface;
+ (id)signInServiceViewControllerInterface;
+ (id)remoteSignInViewControllerInterface;
+ (id)matchmakerServiceViewControllerInterface;
+ (id)matchmakerHostViewControllerInterface;
+ (void)_configureKVOTypes:(id)a0;
+ (void)setClassesForHostInterface:(id)a0;
+ (void)setClassesForExtensionInterface:(id)a0;
+ (id)remoteFriendRequestViewControllerInterface;
+ (id)serviceFriendRequestViewControllerInterface;

@end
