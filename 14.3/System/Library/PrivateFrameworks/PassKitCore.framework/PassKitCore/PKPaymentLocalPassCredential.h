@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)initWithPaymentPass:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
