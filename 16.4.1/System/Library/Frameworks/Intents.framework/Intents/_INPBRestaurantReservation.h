@class _INPBDateTimeRange, _INPBInteger, _INPBReservation, NSString, _INPBLocation;

@interface _INPBRestaurantReservation : PBCodable <_INPBRestaurantReservation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBInteger *partySize;
@property (readonly, nonatomic) BOOL hasPartySize;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (readonly, nonatomic) BOOL hasReservation;
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property (readonly, nonatomic) BOOL hasReservationDuration;
@property (retain, nonatomic) _INPBLocation *restaurantLocation;
@property (readonly, nonatomic) BOOL hasRestaurantLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end
