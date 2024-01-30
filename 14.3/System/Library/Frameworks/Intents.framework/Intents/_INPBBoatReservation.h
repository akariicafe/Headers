@class NSString, _INPBSeat, _INPBReservation, _INPBBoatTrip;

@interface _INPBBoatReservation : PBCodable <_INPBBoatReservation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBBoatTrip *boatTrip;
@property (readonly, nonatomic) BOOL hasBoatTrip;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (readonly, nonatomic) BOOL hasReservation;
@property (retain, nonatomic) _INPBSeat *reservedSeat;
@property (readonly, nonatomic) BOOL hasReservedSeat;
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
