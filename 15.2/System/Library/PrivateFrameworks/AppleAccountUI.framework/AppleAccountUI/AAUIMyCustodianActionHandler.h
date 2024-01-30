@class NSString, AALocalContactInfo, AAUISpinnerManager, AIDAAccountManager;

@interface AAUIMyCustodianActionHandler : NSObject <AAUITrustedContactDetailsActionHandler> {
    AAUISpinnerManager *_spinnerManager;
    AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) AALocalContactInfo *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)doDestructiveAction:(id)a0 specifier:(id)a1;
- (id)initWithAccountManager:(id)a0 localContact:(id)a1;
- (void)_stopSpinners;
- (void)_doCustodianRemoveWithViewController:(id)a0;

@end
