@class _INPBTicketedEventReservation, _INPBBoatReservation, NSString, _INPBFlightReservation, _INPBTrainReservation, _INPBBusReservation, _INPBRentalCarReservation, _INPBRestaurantReservation, _INPBLodgingReservation;

@interface _INPBReservationWrapper : PBCodable <_INPBReservationWrapper, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBBoatReservation *boatReservation;
@property (readonly, nonatomic) BOOL hasBoatReservation;
@property (retain, nonatomic) _INPBBusReservation *busReservation;
@property (readonly, nonatomic) BOOL hasBusReservation;
@property (retain, nonatomic) _INPBFlightReservation *flightReservation;
@property (readonly, nonatomic) BOOL hasFlightReservation;
@property (retain, nonatomic) _INPBLodgingReservation *lodgingReservation;
@property (readonly, nonatomic) BOOL hasLodgingReservation;
@property (retain, nonatomic) _INPBRentalCarReservation *rentalCarReservation;
@property (readonly, nonatomic) BOOL hasRentalCarReservation;
@property (retain, nonatomic) _INPBRestaurantReservation *restaurantReservation;
@property (readonly, nonatomic) BOOL hasRestaurantReservation;
@property (retain, nonatomic) _INPBTicketedEventReservation *ticketedEventReservation;
@property (readonly, nonatomic) BOOL hasTicketedEventReservation;
@property (retain, nonatomic) _INPBTrainReservation *trainReservation;
@property (readonly, nonatomic) BOOL hasTrainReservation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
