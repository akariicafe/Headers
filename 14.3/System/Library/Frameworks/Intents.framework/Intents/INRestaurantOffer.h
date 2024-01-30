@class NSString;

@interface INRestaurantOffer : NSObject <INRestaurantOfferExport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *offerTitleText;
@property (copy, nonatomic) NSString *offerDetailText;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
