@class NSDictionary, NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
    NSDictionary *_footerFields;
}

+ (id)defaultPaymentSetupProvisioningFields;
+ (id)fakePaymentSetupProvisioningFields;

- (id)init;
- (void).cxx_destruct;
- (id)submissionValuesForDestination:(id)a0;
- (BOOL)hasIncompletePaymentSetupFields;
- (void)resetAllPaymentSetupFieldValues;
- (void)_addField:(id)a0 result:(id)a1 destination:(id)a2 requiresSecureSubmission:(BOOL)a3;
- (id)footerFieldForIdentifier:(id)a0;
- (id)footerPaymentSetupField;
- (BOOL)hasFooterPaymentSetupField;
- (id)incompletePaymentSetupFields;
- (id)initWithPaymentSetupFields:(id)a0;
- (id)initWithPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (unsigned long long)numberOfPaymentSetupFields;
- (id)odiAttributes;
- (id)paymentSetupFieldAtIndex:(unsigned long long)a0;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldWithIdentifier:(id)a0;
- (id)paymentSetupFields;
- (void)prefillDefaultValues;
- (id)readonlySetupFieldIdentifiers;
- (void)replaceAllPaymentSetupFields:(id)a0;
- (void)replaceAllPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)a0;
- (BOOL)requirementsMetForFieldWithIdentifier:(id)a0;
- (id)secureSubmissionValuesForDestination:(id)a0;
- (id)setupFieldAnalytics;
- (void)updateWithPaymentSetupFields:(id)a0;
- (void)updateWithPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (id)visiblePaymentSetupFields;
- (id)visibleSetupFieldIdentifiers;

@end
