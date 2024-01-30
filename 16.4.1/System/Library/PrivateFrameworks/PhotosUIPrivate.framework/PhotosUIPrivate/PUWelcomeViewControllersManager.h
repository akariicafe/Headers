@class NSArray, NSMutableSet, UIViewController;

@interface PUWelcomeViewControllersManager : NSObject

@property (readonly, copy, nonatomic) NSArray *_welcomeViewControllerClasses;
@property (readonly, copy, nonatomic) NSMutableSet *_remainingWelcomeViewControllerClassesToPresent;
@property (retain, nonatomic, setter=_setPresentingViewController:) UIViewController *_presentingViewController;
@property (nonatomic, setter=_setPresentedWelcomeViewControllerClass:) Class _presentedWelcomeViewControllerClass;

+ (id)defaultManager;

- (void)_reset;
- (void)_update;
- (id)init;
- (void).cxx_destruct;
- (void)_handleWelcomeViewControllerCompletion;
- (id)_initWithWelcomeViewControllerClasses:(id)a0;
- (void)presentWelcomeViewControllersIfNecessaryFromViewController:(id)a0;
- (void)resetAllLastPresentationInfos;

@end
