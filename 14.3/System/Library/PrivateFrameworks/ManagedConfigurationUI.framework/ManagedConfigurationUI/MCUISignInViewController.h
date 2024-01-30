@class NSString, AKAppleIDAuthenticationInAppContext, MCSignInPageAuthenticationSectionController, MCSignInPageTitleSectionController;
@protocol MCUISignInViewControllerDelegate;

@interface MCUISignInViewController : MCSectionBasedTableViewController <AKInlineSignInViewControllerDelegate>

@property (nonatomic) BOOL signInButtonTapped;
@property (nonatomic) BOOL authenticationFinished;
@property (retain, nonatomic) MCSignInPageTitleSectionController *titleSectionController;
@property (retain, nonatomic) MCSignInPageAuthenticationSectionController *authSectionController;
@property (weak, nonatomic) id<MCUISignInViewControllerDelegate> delegate;
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) NSString *orgName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)signInViewController:(id)a0 willPerformAuthenticationWithContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)signInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (void)viewDidLoad;

@end
