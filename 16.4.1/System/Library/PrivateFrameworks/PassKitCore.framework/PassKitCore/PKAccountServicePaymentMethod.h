@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKBankAccountInformation *bankAccountInformation;
@property (copy, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment;
@property (nonatomic) unsigned long long selectedMethods;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBankAccountInformation:(id)a0 peerPaymentBalance:(id)a1 deviceSupportsPeerPaymentAccountPayment:(BOOL)a2 selectedMethods:(unsigned long long)a3;

@end
