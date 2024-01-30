@class PKPaymentSetupFieldsModel;

@interface PKApplyRequiredFieldsPage : PKDynamicProvisioningPageContent

@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldModel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 fieldOptions:(id)a1 featureApplication:(id)a2;

@end
