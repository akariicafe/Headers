@interface SKBackgroundAssetConsentViewController : OBWelcomeController

@property (copy, nonatomic) id /* block */ responseBlock;

- (long long)modalPresentationStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isModalInPresentation;
- (void)_continueButtonPressed;

@end
