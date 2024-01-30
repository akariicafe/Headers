@class NSString, WLWelcomeController;

@interface WLWelcomeViewController : WLOnboardingViewController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
}

@property (copy, nonatomic) id /* block */ continueHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_continueTapped:(id)a0;
- (id)_initWithForceUITestMode:(BOOL)a0 forceUITestModeDownloadError:(BOOL)a1;
- (void)_qrcodeTapped:(id)a0;
- (id)initForUITestWithForceDownloadError:(BOOL)a0;

@end
