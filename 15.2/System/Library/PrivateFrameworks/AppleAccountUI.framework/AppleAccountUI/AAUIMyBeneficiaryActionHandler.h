@class NSString, AALocalContactInfo, AIDAAccountManager, AAUISpinnerManager;

@interface AAUIMyBeneficiaryActionHandler : NSObject <AAUITrustedContactDetailsActionHandler> {
    AIDAAccountManager *_accountManager;
    AALocalContactInfo *_contact;
    AAUISpinnerManager *_spinnerManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)doDestructiveAction:(id)a0 specifier:(id)a1;
- (void)doPrimaryAction:(id)a0 specifier:(id)a1;
- (void)_startSpinnerInSpecifier:(id)a0;
- (void)_showAuthPromptInViewController:(id)a0;
- (void)_stopAllSpinners;
- (void)_navigateToAccessKeyScreenFromViewController:(id)a0;
- (id)initWithAccountManager:(id)a0 localContact:(id)a1;
- (void)_doBeneficiaryRemoveWithViewController:(id)a0;

@end
