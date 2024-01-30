@class NSDecimalNumber, NSString, NSArray;

@interface PKDisbursementRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long requestSchedule;
@property (copy, nonatomic) NSArray *summaryItems;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDisbursementRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
