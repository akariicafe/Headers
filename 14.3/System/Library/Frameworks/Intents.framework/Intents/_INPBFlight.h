@class _INPBDateTimeRange, _INPBAirportGate, _INPBAirline, NSString;

@interface _INPBFlight : PBCodable <_INPBFlight, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAirline *airline;
@property (readonly, nonatomic) BOOL hasAirline;
@property (retain, nonatomic) _INPBAirportGate *arrivalAirportGate;
@property (readonly, nonatomic) BOOL hasArrivalAirportGate;
@property (retain, nonatomic) _INPBDateTimeRange *boardingTime;
@property (readonly, nonatomic) BOOL hasBoardingTime;
@property (retain, nonatomic) _INPBAirportGate *departureAirportGate;
@property (readonly, nonatomic) BOOL hasDepartureAirportGate;
@property (retain, nonatomic) _INPBDateTimeRange *flightDuration;
@property (readonly, nonatomic) BOOL hasFlightDuration;
@property (copy, nonatomic) NSString *flightNumber;
@property (readonly, nonatomic) BOOL hasFlightNumber;
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
