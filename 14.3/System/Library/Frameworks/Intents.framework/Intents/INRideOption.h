@class INImage, NSString, NSArray, NSUserActivity, NSDate, NSNumber, INPriceRange;

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *estimatedPickupDate;
@property (copy, nonatomic) INPriceRange *priceRange;
@property (copy, nonatomic) NSNumber *usesMeteredFare;
@property (copy, nonatomic) NSString *disclaimerMessage;
@property (copy, nonatomic) NSArray *availablePartySizeOptions;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property (copy, nonatomic) NSString *specialPricing;
@property (copy, nonatomic) INImage *specialPricingBadgeImage;
@property (copy, nonatomic) NSArray *fareLineItems;
@property (retain, nonatomic) NSUserActivity *userActivityForBookingInApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithName:(id)a0 estimatedPickupDate:(id)a1;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
