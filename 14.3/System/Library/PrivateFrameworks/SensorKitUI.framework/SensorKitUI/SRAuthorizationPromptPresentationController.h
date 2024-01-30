@class NSError, UIViewController, NSString;
@protocol SRRemoteAuthorizationPromptViewController;

@interface SRAuthorizationPromptPresentationController : NSObject <SRRemoteAuthorizationPromptViewControllerDelegate>

@property (retain, nonatomic) UIViewController<SRRemoteAuthorizationPromptViewController> *viewController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (nonatomic) BOOL hostNavigationBarHidden;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void)dealloc;
- (void)presentPromptViewController:(id)a0 withDesiredServices:(id)a1 bundleIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)presentAppsAndStudiesPromptViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentStudyAuthorizationPromptViewController:(id)a0 bundlePath:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentResearchDataViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentFirstRunOnboardingViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)presentationAnchor;
- (BOOL)presentAnyViewController:(id)a0 reason:(long long)a1 completionHandler:(id /* block */)a2;
- (id)presentingViewControllerFromRoot:(id)a0;
- (id)navigationControllerFromRoot:(id)a0;
- (void)completePromptWithError:(id)a0;
- (BOOL)isViewControllerPresentedModally;
- (void)viewControllerCleanUp;
- (void)authorizationRequestCompleted;
- (void)authorizationRequestFailedWithError:(id)a0;
- (void)authorizationUIReadyForDisplayModally:(BOOL)a0;
- (void)authorizationRequestWillDisappear;
- (void)authorizationRequestDidDisappear;

@end
