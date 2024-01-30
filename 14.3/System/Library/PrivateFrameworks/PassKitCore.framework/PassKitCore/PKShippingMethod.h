@class NSString;

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *detail;

+ (id)shippingMethodWithProtobuf:(id)a0;
+ (long long)version;

- (id)protobuf;
- (id)formattedString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToShippingMethod:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
