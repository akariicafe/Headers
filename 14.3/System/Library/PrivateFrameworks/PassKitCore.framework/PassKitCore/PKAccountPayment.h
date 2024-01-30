@class PKAccountPaymentScheduleDetails, NSString, PKAccountPaymentFundingSource, NSDate, PKCurrencyAmount;

@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *clientReferenceIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSDate *paymentDate;
@property (copy, nonatomic) NSDate *paymentStatusDate;
@property (nonatomic) BOOL cancellable;
@property (copy, nonatomic) NSDate *cancellationExpiryDate;
@property (nonatomic) long long state;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordNamePrefix;
+ (id)recordType;

- (void).cxx_destruct;
- (BOOL)isRecurring;
- (BOOL)isOnHoldForAccount:(id)a0;
- (BOOL)isCurrentlyCancellable;
- (id)initWithCoder:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
