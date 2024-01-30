@class PKPaymentPass, NSSet, PKPeerPaymentAccount, PKAccountUser, PKAccount;

@interface PKTransactionSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSSet *transactionSourceIdentifiers;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKAccountUser *accountUser;
@property (readonly, nonatomic) PKAccount *account;

- (id)initWithAccount:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAccountUser:(id)a0;
- (id)initWithPaymentPass:(id)a0;
- (id)initWithPeerPaymentAccount:(id)a0;

@end
