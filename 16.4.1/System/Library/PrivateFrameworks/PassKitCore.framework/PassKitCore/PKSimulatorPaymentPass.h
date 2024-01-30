@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass {
    NSDictionary *_dictionary;
}

- (id)localizedDescription;
- (void).cxx_destruct;
- (id)devicePrimaryPaymentApplication;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;

@end
