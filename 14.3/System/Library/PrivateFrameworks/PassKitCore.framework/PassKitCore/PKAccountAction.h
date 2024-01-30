@class NSString, NSDecimalNumber;

@interface PKAccountAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) unsigned long long redemptionType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
