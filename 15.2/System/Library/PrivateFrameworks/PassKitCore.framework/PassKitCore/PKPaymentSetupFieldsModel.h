@class NSDictionary, NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
    NSDictionary *_footerFields;
}

+ (id)fakePaymentSetupProvisioningFields;
+ (id)defaultPaymentSetupProvisioningFields;

- (id)paymentSetupFieldWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)prefillDefaultValues;
- (void)resetAllPaymentSetupFieldValues;
- (id)initWithPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (void)replaceAllPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (void)replaceAllPaymentSetupFields:(id)a0;
- (id)incompletePaymentSetupFields;
- (void)updateWithPaymentSetupFields:(id)a0 footerFields:(id)a1;
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
- (id)footerFieldForIdentifier:(id)a0;
- (BOOL)hasFooterPaymentSetupField;
- (id)secureSubmissionValuesForDestination:(id)a0;
- (id)setupFieldAnalytics;

@end
