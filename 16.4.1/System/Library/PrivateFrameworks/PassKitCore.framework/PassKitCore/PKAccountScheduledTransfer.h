@class PKAccountTransferExternalAccount, PKCurrencyAmount;

@interface PKAccountScheduledTransfer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKAccountTransferExternalAccount *externalAccount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)jsonDictionaryRepresentation;
- (id)hashComponent;
- (id)initWithCurrencyAmount:(id)a0 type:(unsigned long long)a1 externalAccount:(id)a2;

@end
