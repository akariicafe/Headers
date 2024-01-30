@class SSBiometricAuthenticationContext, ISDialog, ISTouchIDDialog, ISBiometricStore;

@interface ISBiometricSignatureOperation : ISOperation

@property (retain, nonatomic) ISBiometricStore *biometricStore;
@property (retain) SSBiometricAuthenticationContext *context;
@property (retain, nonatomic) ISDialog *fallbackDialog;
@property (retain, nonatomic) ISTouchIDDialog *touchIDDialog;
@property (copy) id /* block */ outputBlock;

- (void)run;
- (void).cxx_destruct;
- (BOOL)_promptUserToAuthenticateForIdentityMapChangeWithAccountIdentifier:(id)a0 accountName:(id)a1;
- (id)initWithBiometricAuthenticationContext:(id)a0 touchIDDialog:(id)a1 fallbackDialog:(id)a2;

@end
