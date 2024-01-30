@class NSString, CNPostalAddress, PKPhysicalCardPriceOption;

@interface PKPhysicalCardAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *activationCode;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSString *artworkIdentifier;
@property (copy, nonatomic) CNPostalAddress *shippingAddress;
@property (copy, nonatomic) NSString *nameOnCard;
@property (retain, nonatomic) PKPhysicalCardPriceOption *priceOption;

- (void).cxx_destruct;
- (id)jsonRepresentation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPhysicalCardAction:(id)a0;
- (id)_shippingAddressJSONRepresentation;
- (id)initWithActionType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
