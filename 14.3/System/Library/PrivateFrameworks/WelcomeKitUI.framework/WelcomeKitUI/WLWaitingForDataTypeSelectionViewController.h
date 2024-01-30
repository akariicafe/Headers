@class NSString, WLWelcomeController;

@interface WLWaitingForDataTypeSelectionViewController : OBWelcomeController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceDevice:(id)a0 welcomeController:(id)a1;

@end
