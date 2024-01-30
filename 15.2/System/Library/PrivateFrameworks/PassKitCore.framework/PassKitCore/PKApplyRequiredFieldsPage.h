@class PKPaymentSetupFieldsModel;

@interface PKApplyRequiredFieldsPage : PKDynamicProvisioningPageContent

@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldModel;

- (id)initWithDictionary:(id)a0 fieldOptions:(id)a1 featureApplication:(id)a2;
- (void).cxx_destruct;

@end
