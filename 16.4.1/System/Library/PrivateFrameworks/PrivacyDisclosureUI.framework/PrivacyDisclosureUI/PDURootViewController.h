@class NSString, UIViewController;
@protocol PDCApplicationIdentity, PDURootViewControllerDelegate, PDCConsentStore;

@interface PDURootViewController : UIViewController <PDUWelcomeViewControllerDelegate> {
    UIViewController *_welcomeViewController;
    id<PDCApplicationIdentity> _applicationIdentity;
    id<PDCConsentStore> _consentStore;
}

@property (class, readonly, nonatomic) unsigned long long preferredOrientation;

@property (weak, nonatomic) id<PDURootViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceIsPad;

- (BOOL)_canShowWhileLocked;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_presentWelcomeViewIfNeeded;
- (void)_showWelcomeViewIfNeeded;
- (id)initWithApplicationIdentity:(id)a0 consentStore:(id)a1;
- (void)welcomeViewController:(id)a0 didDismissWithUserResponse:(unsigned long long)a1;

@end
