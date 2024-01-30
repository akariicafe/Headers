@class INRestaurantGuest, NSString, NSDate, INRestaurantOffer;

@interface INRestaurantReservationUserBooking : INRestaurantReservationBooking <INRestaurantReservationUserBookingExport, NSCopying>

@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) NSString *advisementText;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer;
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSDate *dateStatusModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRestaurant:(id)a0 bookingDate:(id)a1 partySize:(unsigned long long)a2 bookingIdentifier:(id)a3 guest:(id)a4 status:(unsigned long long)a5 dateStatusModified:(id)a6;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
