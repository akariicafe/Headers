@class NSString, PKRecurringPaymentSummaryItem, NSURL;

@interface PKRecurringPaymentRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentDescription;
@property (retain, nonatomic) PKRecurringPaymentSummaryItem *regularBilling;
@property (retain, nonatomic) PKRecurringPaymentSummaryItem *trialBilling;
@property (copy, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSURL *managementURL;
@property (retain, nonatomic) NSURL *tokenNotificationURL;

+ (long long)version;
+ (id)recurringPaymentRequestWithProtobuf:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)protobuf;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPaymentDescription:(id)a0 regularBilling:(id)a1 managementURL:(id)a2;
- (BOOL)isEqualToRecurringPaymentRequest:(id)a0;
- (void)sanitize;

@end
