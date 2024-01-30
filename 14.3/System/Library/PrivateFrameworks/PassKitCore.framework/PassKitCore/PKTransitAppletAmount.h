@class NSString, NSDecimalNumber;

@interface PKTransitAppletAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *balanceIdentifier;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long exponent;
@property (copy, nonatomic) NSDecimalNumber *amount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAmount:(id)a0 currency:(id)a1 exponent:(long long)a2 identifier:(id)a3;

@end
