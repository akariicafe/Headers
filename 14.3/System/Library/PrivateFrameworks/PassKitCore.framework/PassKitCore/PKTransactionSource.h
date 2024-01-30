@class NSSet, PKPeerPaymentAccount, PKPaymentPass;

@interface PKTransactionSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSSet *transactionSourceIdentifiers;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithPaymentPass:(id)a0;
- (id)initWithPeerPaymentAccount:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
