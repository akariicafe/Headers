@class NSString, _INPBLocationValue, _INPBDateTimeRange;

@interface _INPBBusTrip : PBCodable <_INPBBusTrip, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBLocationValue *arrivalBusStopLocation;
@property (readonly, nonatomic) BOOL hasArrivalBusStopLocation;
@property (copy, nonatomic) NSString *arrivalPlatform;
@property (readonly, nonatomic) BOOL hasArrivalPlatform;
@property (copy, nonatomic) NSString *busName;
@property (readonly, nonatomic) BOOL hasBusName;
@property (copy, nonatomic) NSString *busNumber;
@property (readonly, nonatomic) BOOL hasBusNumber;
@property (retain, nonatomic) _INPBLocationValue *departureBusStopLocation;
@property (readonly, nonatomic) BOOL hasDepartureBusStopLocation;
@property (copy, nonatomic) NSString *departurePlatform;
@property (readonly, nonatomic) BOOL hasDeparturePlatform;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) BOOL hasProvider;
@property (retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property (readonly, nonatomic) BOOL hasTripDuration;
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
