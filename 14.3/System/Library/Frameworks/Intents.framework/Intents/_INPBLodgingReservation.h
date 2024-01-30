@class _INPBDateTimeRange, _INPBInteger, _INPBReservation, NSString, _INPBLocation;

@interface _INPBLodgingReservation : PBCodable <_INPBLodgingReservation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBLocation *lodgingBusinessLocation;
@property (readonly, nonatomic) BOOL hasLodgingBusinessLocation;
@property (retain, nonatomic) _INPBInteger *numberOfAdults;
@property (readonly, nonatomic) BOOL hasNumberOfAdults;
@property (retain, nonatomic) _INPBInteger *numberOfChildren;
@property (readonly, nonatomic) BOOL hasNumberOfChildren;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (readonly, nonatomic) BOOL hasReservation;
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property (readonly, nonatomic) BOOL hasReservationDuration;
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
