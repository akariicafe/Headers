@protocol STSetupAssistantViewControllerDelegate;

@interface STSetupAssistantViewController : OBWelcomeController

@property (readonly) long long state;
@property (readonly) BOOL hasRestrictionsPasscode;
@property (weak) id<STSetupAssistantViewControllerDelegate> delegate;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_continue:(id)a0;
- (id)initWithScreenTimeState:(long long)a0 passcode:(BOOL)a1;
- (void)_setUpLater:(id)a0;

@end
