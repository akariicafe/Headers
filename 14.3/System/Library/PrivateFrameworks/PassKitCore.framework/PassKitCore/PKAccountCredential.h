@class PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString, PKAccount;

@interface PKAccountCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (void).cxx_destruct;
- (id)longDescription;
- (unsigned long long)hash;
- (BOOL)_isEqualToCredential:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccount:(id)a0;

@end
