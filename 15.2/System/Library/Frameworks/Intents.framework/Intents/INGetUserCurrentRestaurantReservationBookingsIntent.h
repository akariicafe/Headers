@class NSString, INRestaurant, NSNumber, NSDate;

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying>

@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSString *reservationIdentifier;
@property (copy, nonatomic) NSNumber *maximumNumberOfResults;
@property (copy, nonatomic) NSDate *earliestBookingDateForResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRestaurant:(id)a0 reservationIdentifier:(id)a1 maximumNumberOfResults:(id)a2 earliestBookingDateForResults:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
