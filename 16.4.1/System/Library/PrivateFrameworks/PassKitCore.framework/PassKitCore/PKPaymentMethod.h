@class PKPaymentPass, NSString, CNContact, PKRemotePaymentInstrument, PKDisbursementVoucher, PKSecureElementPass, PKBankAccountInformation;

@interface PKPaymentMethod : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *network;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) PKPaymentPass *paymentPass;
@property (copy, nonatomic) PKSecureElementPass *secureElementPass;
@property (copy, nonatomic) CNContact *billingAddress;
@property (retain, nonatomic) PKRemotePaymentInstrument *remoteInstrument;
@property (copy, nonatomic) NSString *peerPaymentQuoteIdentifier;
@property (nonatomic) BOOL usePeerPaymentBalance;
@property (retain, nonatomic) PKDisbursementVoucher *disbursementVoucher;
@property (retain, nonatomic) PKBankAccountInformation *bankAccount;
@property (copy, nonatomic) NSString *bindToken;

+ (long long)version;
+ (id)paymentMethodWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)protobuf;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithBankAccount:(id)a0;
- (id)initWithBindToken:(id)a0;
- (id)initWithDisbursementVoucher:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 primaryAccountNumberSuffix:(id)a1 obfuscateNetworks:(BOOL)a2;
- (id)initWithPaymentPass:(id)a0 obfuscateNetworks:(BOOL)a1;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1 obfuscateNetworks:(BOOL)a2;
- (id)initWithPeerPaymentQuote:(id)a0;
- (id)initWithRemotePaymentInstrument:(id)a0;
- (id)initWithRemotePaymentInstrument:(id)a0 paymentApplication:(id)a1;

@end
