@class NSString, UIBarButtonItem;

@interface TSUserResponseFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    BOOL _confirmationCodeRequired;
    NSString *_confirmationCode;
    UIBarButtonItem *_cancelButton;
}

@property unsigned long long userConsentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (id)initWithConfirmationCodeRequired:(BOOL)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (void)viewControllerDidComplete:(id)a0;

@end
