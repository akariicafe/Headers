@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController

@property (nonatomic) BOOL suppressPrimarySetupFields;

- (void)viewDidLoad;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (id)visibleFieldIdentifiers;
- (id)newPaymentEligibilityRequest;
- (id)readonlyFieldIdentifiers;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (id)defaultFields;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;

@end
