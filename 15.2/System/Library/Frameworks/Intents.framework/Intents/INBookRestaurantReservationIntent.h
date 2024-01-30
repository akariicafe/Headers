@class INRestaurantOffer, NSString, INRestaurantGuest, NSDateComponents, INRestaurant, NSDate;

@interface INBookRestaurantReservationIntent : INIntent <INBookRestaurantReservationIntentExport, NSCopying>

@property (copy, nonatomic) NSDate *bookingDate;
@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSDateComponents *bookingDateComponents;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSString *bookingIdentifier;
@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer;
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRestaurant:(id)a0 bookingDateComponents:(id)a1 partySize:(unsigned long long)a2 bookingIdentifier:(id)a3 guest:(id)a4 selectedOffer:(id)a5 guestProvidedSpecialRequestText:(id)a6;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
