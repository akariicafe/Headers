@class NSObject;
@protocol WFPINEntryViewControllerProtocol;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol>

@property (nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)setURL:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)requiresKeyboard;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)isNumericPIN;
- (BOOL)simplePIN;
- (void)setPageTitle:(id)a0;
- (void)userDidCancel;
- (void)getIsPINPresentWithCompletion:(id /* block */)a0;
- (void)permitURLWithCompletion:(id /* block */)a0;
- (void)userEnteredCorrectPIN;

@end
