@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKBankAccountInformation *bankAccountInformation;
@property (copy, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBankAccountInformation:(id)a0 peerPaymentBalance:(id)a1 deviceSupportsPeerPaymentAccountPayment:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
