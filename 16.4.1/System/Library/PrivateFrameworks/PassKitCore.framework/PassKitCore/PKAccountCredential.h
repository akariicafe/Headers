@class PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString, PKAccount;

@interface PKAccountCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (id)initWithAccount:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)longDescription;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;

@end
