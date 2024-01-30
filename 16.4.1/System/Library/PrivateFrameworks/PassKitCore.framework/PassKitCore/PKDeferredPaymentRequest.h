@class NSTimeZone, NSString, NSURL, NSDate, PKDeferredPaymentSummaryItem;

@interface PKDeferredPaymentRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentDescription;
@property (retain, nonatomic) PKDeferredPaymentSummaryItem *deferredBilling;
@property (copy, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSURL *managementURL;
@property (retain, nonatomic) NSURL *tokenNotificationURL;
@property (retain, nonatomic) NSDate *freeCancellationDate;
@property (retain, nonatomic) NSTimeZone *freeCancellationDateTimeZone;

+ (id)deferredPaymentRequestWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)protobuf;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPaymentDescription:(id)a0 deferredBilling:(id)a1 managementURL:(id)a2;
- (BOOL)isEqualToDeferredPaymentRequest:(id)a0;
- (void)sanitize;

@end
