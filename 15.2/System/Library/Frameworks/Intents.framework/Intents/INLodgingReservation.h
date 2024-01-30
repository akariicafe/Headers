@class NSNumber, CLPlacemark, INDateComponentsRange;

@interface INLodgingReservation : INReservation <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CLPlacemark *lodgingBusinessLocation;
@property (readonly, copy, nonatomic) INDateComponentsRange *reservationDuration;
@property (readonly, copy, nonatomic) NSNumber *numberOfAdults;
@property (readonly, copy, nonatomic) NSNumber *numberOfChildren;

- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6 lodgingBusinessLocation:(id)a7 reservationDuration:(id)a8 numberOfAdults:(id)a9 numberOfChildren:(id)a10;
- (id)_dictionaryRepresentation;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 lodgingBusinessLocation:(id)a6 reservationDuration:(id)a7 numberOfAdults:(id)a8 numberOfChildren:(id)a9;
- (void)encodeWithCoder:(id)a0;
- (id)_duration;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
