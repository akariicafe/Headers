@class NSString, NSArray, NSObject, UIViewController;
@protocol GKFriendRequestViewControllerDelegate;

@interface GKFriendRequestViewController : GKHostedViewController

@property (weak, nonatomic) UIViewController *requestingViewController;
@property (weak, nonatomic) NSObject<GKFriendRequestViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSString *friendCode;
@property (retain, nonatomic) NSString *friendSupportPageURL;
@property (retain, nonatomic) NSArray *recipients;

+ (void)presentFriendRequestOn:(id)a0 withFriendCode:(id)a1 andFriendSupportPageURL:(id)a2;
+ (void)presentAlertControllerOn:(id)a0 withMessage:(id)a1 andTitle:(id)a2;
+ (void)addFriends:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)serviceSideViewControllerClassName;
- (void)notifyDelegateOnWillFinish;
- (id)_presentingViewController;

@end
