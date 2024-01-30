@class NSString, NSDecimalNumber, NSDate;

@interface PKTransitAppletBalance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long exponent;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isCurrency;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)_setIdentifierFromObject:(id)a0;
- (BOOL)isEqualToBalance:(id)a0;
- (id)initWithIdentifier:(id)a0 balance:(id)a1 currency:(id)a2 exponent:(long long)a3 expirationDate:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
