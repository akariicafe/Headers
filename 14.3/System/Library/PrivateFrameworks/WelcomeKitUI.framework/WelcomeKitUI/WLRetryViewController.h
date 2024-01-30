@class NSString, WLWelcomeController;

@interface WLRetryViewController : OBWelcomeController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
}

@property (copy, nonatomic) id /* block */ continueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWelcomeController:(id)a0;
- (void)_continueTapped:(id)a0;

@end
