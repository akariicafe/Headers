@class PKPaymentSetupFieldsModel;

@interface PKDynamicProvisioningFieldsPageContent : PKDynamicProvisioningPageContent

@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldModel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 fieldOptions:(id)a1 businessChatIdentifier:(id)a2;

@end
