@class CLPlacemark, INRentalCar, INDateComponentsRange;

@interface INRentalCarReservation : INReservation <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INRentalCar *rentalCar;
@property (readonly, copy, nonatomic) INDateComponentsRange *rentalDuration;
@property (readonly, copy, nonatomic) CLPlacemark *pickupLocation;
@property (readonly, copy, nonatomic) CLPlacemark *dropOffLocation;

- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 rentalCar:(id)a6 rentalDuration:(id)a7 pickupLocation:(id)a8 dropOffLocation:(id)a9;
- (id)_dictionaryRepresentation;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6 rentalCar:(id)a7 rentalDuration:(id)a8 pickupLocation:(id)a9 dropOffLocation:(id)a10;
- (void)encodeWithCoder:(id)a0;
- (id)_duration;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
