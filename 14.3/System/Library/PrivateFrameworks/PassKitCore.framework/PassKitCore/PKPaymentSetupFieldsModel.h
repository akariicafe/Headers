@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
}

+ (id)fakePaymentSetupProvisioningFields;
+ (id)defaultPaymentSetupProvisioningFields;

- (void).cxx_destruct;
- (void)replaceAllPaymentSetupFields:(id)a0;
- (void)resetAllPaymentSetupFieldValues;
- (void)prefillDefaultValues;
- (id)incompletePaymentSetupFields;
- (id)footerPaymentSetupField;
- (id)initWithPaymentSetupFields:(id)a0;
- (void)updateWithPaymentSetupFields:(id)a0;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)a0;
- (id)paymentSetupFields;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfPaymentSetupFields;
- (BOOL)hasIncompletePaymentSetupFields;
- (id)submissionValuesForDestination:(id)a0;
- (BOOL)hasFooterPaymentSetupField;
- (id)secureSubmissionValuesForDestination:(id)a0;
- (id)paymentSetupFieldWithIdentifier:(id)a0;

@end
