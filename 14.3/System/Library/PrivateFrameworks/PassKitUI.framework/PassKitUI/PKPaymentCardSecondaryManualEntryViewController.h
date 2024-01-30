@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController

@property (nonatomic) BOOL suppressPrimarySetupFields;

- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;
- (id)newPaymentEligibilityRequest;
- (id)readonlyFieldIdentifiers;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (void)viewDidLoad;

@end
