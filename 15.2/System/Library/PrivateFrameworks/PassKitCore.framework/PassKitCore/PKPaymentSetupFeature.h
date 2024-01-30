@interface PKPaymentSetupFeature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) long long supportedOptions;

+ (id)paymentSetupFeatureWithProtobuf:(id)a0;

- (id)protobuf;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
