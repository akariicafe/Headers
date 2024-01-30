@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;

- (id)initWithPaymentPass:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_isEqualToCredential:(id)a0;
- (unsigned long long)hash;

@end
