@class NSDecimalNumber, NSString, NSDate;

@interface PKAccountPaymentReminder : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *minimumDue;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDate *paymentDueDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordType;
+ (id)recordNamePrefix;

- (id)initWithRecord:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
