@class _INPBLocation, NSString, _INPBString;

@interface _INPBRetrieveParkingLocationIntentResponse : PBCodable <_INPBRetrieveParkingLocationIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBLocation *parkingLocation;
@property (readonly, nonatomic) BOOL hasParkingLocation;
@property (retain, nonatomic) _INPBString *parkingNote;
@property (readonly, nonatomic) BOOL hasParkingNote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
