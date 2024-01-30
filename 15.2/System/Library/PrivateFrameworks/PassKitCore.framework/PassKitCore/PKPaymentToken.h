@class NSString, NSData, NSURL, PKPaymentMethod;

@interface PKPaymentToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentMethod *paymentMethod;
@property (copy, nonatomic) NSString *paymentInstrumentName;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSData *paymentData;
@property (retain, nonatomic) NSURL *redeemURL;
@property (copy, nonatomic) NSString *retryNonce;

+ (long long)version;
+ (id)simulatedTokenForNetwork:(id)a0;
+ (id)paymentTokenWithProtobuf:(id)a0;

- (id)protobuf;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;

@end
