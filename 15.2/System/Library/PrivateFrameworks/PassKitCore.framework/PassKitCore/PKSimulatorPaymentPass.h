@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass {
    NSDictionary *_dictionary;
}

- (id)localizedDescription;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)primaryAccountNumberSuffix;
- (id)devicePrimaryPaymentApplication;
- (id)primaryAccountIdentifier;

@end
