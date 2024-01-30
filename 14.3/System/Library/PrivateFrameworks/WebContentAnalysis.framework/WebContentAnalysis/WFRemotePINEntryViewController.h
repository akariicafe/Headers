@class NSObject;
@protocol WFPINEntryViewControllerProtocol;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol>

@property (nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (BOOL)simplePIN;
- (BOOL)requiresKeyboard;
- (void)userDidCancel;
- (BOOL)isNumericPIN;
- (void)setURL:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setPageTitle:(id)a0;
- (void)viewDidLoad;
- (void)getIsPINPresentWithCompletion:(id /* block */)a0;
- (void)permitURLWithCompletion:(id /* block */)a0;
- (void)userEnteredCorrectPIN;

@end
