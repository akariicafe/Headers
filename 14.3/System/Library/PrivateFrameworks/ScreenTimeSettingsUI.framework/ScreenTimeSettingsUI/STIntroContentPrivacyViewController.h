@interface STIntroContentPrivacyViewController : OBWelcomeController

@property (readonly, copy) id /* block */ continueHandler;

- (void).cxx_destruct;
- (void)loadView;
- (void)_continue:(id)a0;
- (id)initWithContinueHandler:(id /* block */)a0;

@end
