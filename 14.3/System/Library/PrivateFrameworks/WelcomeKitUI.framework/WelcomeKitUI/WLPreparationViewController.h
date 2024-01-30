@class NSString, WLWelcomeController;

@interface WLPreparationViewController : OBSetupAssistantSpinnerController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWelcomeController:(id)a0;

@end
