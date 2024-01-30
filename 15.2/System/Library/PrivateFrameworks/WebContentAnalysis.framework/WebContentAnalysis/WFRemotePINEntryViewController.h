@class NSObject;
@protocol WFPINEntryViewControllerProtocol;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol>

@property (nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)setPageTitle:(id)a0;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)requiresKeyboard;
- (BOOL)simplePIN;
- (void)setURL:(id)a0;
- (BOOL)isNumericPIN;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)userDidCancel;
- (void)getIsPINPresentWithCompletion:(id /* block */)a0;
- (void)permitURLWithCompletion:(id /* block */)a0;
- (void)userEnteredCorrectPIN;

@end
