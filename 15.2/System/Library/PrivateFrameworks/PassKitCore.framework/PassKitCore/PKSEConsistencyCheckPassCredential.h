@class PKSECredentialAddress, PKAppletSubcredential, PKPaymentApplication;

@interface PKSEConsistencyCheckPassCredential : NSObject {
    id _underlyingpassCredential;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) PKSECredentialAddress *address;
@property (readonly, nonatomic) unsigned long long paymentMethod;
@property (readonly, nonatomic) BOOL containsSubkeys;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) PKAppletSubcredential *subcredential;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPassCredential:(id)a0 address:(id)a1 paymentMethod:(unsigned long long)a2;

@end
