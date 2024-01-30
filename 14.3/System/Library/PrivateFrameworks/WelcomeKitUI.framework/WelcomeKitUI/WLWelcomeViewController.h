@class NSString, WLWelcomeController;

@interface WLWelcomeViewController : OBWelcomeController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
}

@property (copy, nonatomic) id /* block */ continueHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)_continueTapped:(id)a0;
- (id)_initWithForceUITestMode:(BOOL)a0 forceUITestModeDownloadError:(BOOL)a1;
- (id)initForUITestWithForceDownloadError:(BOOL)a0;

@end
