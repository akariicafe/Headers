@class INSeat, INTrainTrip;

@interface INTrainReservation : INReservation <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INSeat *reservedSeat;
@property (readonly, copy, nonatomic) INTrainTrip *trainTrip;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 URL:(id)a6 reservedSeat:(id)a7 trainTrip:(id)a8;
- (id)initWithItemReference:(id)a0 reservationNumber:(id)a1 bookingTime:(id)a2 reservationStatus:(long long)a3 reservationHolderName:(id)a4 actions:(id)a5 reservedSeat:(id)a6 trainTrip:(id)a7;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_duration;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
