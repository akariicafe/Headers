@class NSArray, NSString, _INPBTimestamp, _INPBPriceRangeValue, _INPBImageValue, _INPBUserActivity;

@interface _INPBRideOption : PBCodable <_INPBRideOption, NSSecureCoding, NSCopying> {
    struct { unsigned char usesMeteredFare : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *availablePartySizeOptions;
@property (readonly, nonatomic) unsigned long long availablePartySizeOptionsCount;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property (readonly, nonatomic) BOOL hasAvailablePartySizeOptionsSelectionPrompt;
@property (copy, nonatomic) NSString *disclaimerMessage;
@property (readonly, nonatomic) BOOL hasDisclaimerMessage;
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupDate;
@property (readonly, nonatomic) BOOL hasEstimatedPickupDate;
@property (copy, nonatomic) NSArray *fareLineItems;
@property (readonly, nonatomic) unsigned long long fareLineItemsCount;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property (readonly, nonatomic) BOOL hasPriceRange;
@property (copy, nonatomic) NSString *specialPricing;
@property (readonly, nonatomic) BOOL hasSpecialPricing;
@property (retain, nonatomic) _INPBImageValue *specialPricingBadgeImage;
@property (readonly, nonatomic) BOOL hasSpecialPricingBadgeImage;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) _INPBUserActivity *userActivityForBookingInApplication;
@property (readonly, nonatomic) BOOL hasUserActivityForBookingInApplication;
@property (nonatomic) BOOL usesMeteredFare;
@property (nonatomic) BOOL hasUsesMeteredFare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)fareLineItemsType;
+ (Class)availablePartySizeOptionsType;

- (void)clearAvailablePartySizeOptions;
- (void)addAvailablePartySizeOptions:(id)a0;
- (id)availablePartySizeOptionsAtIndex:(unsigned long long)a0;
- (void)clearFareLineItems;
- (void)addFareLineItems:(id)a0;
- (id)fareLineItemsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
