@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController

@property (nonatomic) BOOL suppressPrimarySetupFields;

- (void)viewDidLoad;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;
- (id)newPaymentEligibilityRequest;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;

@end
