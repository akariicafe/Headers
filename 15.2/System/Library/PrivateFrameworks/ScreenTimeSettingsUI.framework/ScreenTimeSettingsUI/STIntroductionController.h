@class UINavigationController, NSString, STIntroductionModel, UIViewController;

@interface STIntroductionController : NSObject

@property (readonly) STIntroductionModel *introductionModel;
@property (nonatomic) BOOL isModalPresentation;
@property (retain) UINavigationController *navigationController;
@property BOOL allowParentalControls;
@property BOOL forceParentalControls;
@property BOOL askForRecoveryAppleID;
@property (getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud;
@property (copy) NSString *childName;
@property (copy) NSString *altDSID;
@property BOOL skipWelcome;
@property (copy) id /* block */ completionBlock;
@property (readonly) UIViewController *initialViewController;

- (void).cxx_destruct;
- (id)init;
- (void)_cancel:(id)a0;
- (void)presentOverViewController:(id)a0;
- (id)_viewControllerFollowingViewController:(id)a0;
- (void)_viewControllerCompleted:(id)a0;

@end
