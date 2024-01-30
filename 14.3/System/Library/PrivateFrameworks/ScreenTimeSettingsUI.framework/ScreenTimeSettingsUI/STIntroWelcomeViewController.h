@class NSString;

@interface STIntroWelcomeViewController : OBWelcomeController

@property (readonly, copy) NSString *childName;
@property (readonly, copy) id /* block */ continueHandler;

- (void).cxx_destruct;
- (void)loadView;
- (void)_continue:(id)a0;
- (id)initWithChildName:(id)a0 continueHandler:(id /* block */)a1;

@end
