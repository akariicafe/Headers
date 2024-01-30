@class NSString, GEOLocation, _INPBImageValue;

@interface _INPBRideVehicle : PBCodable <_INPBRideVehicle, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOLocation *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (retain, nonatomic) _INPBImageValue *mapAnnotationImage;
@property (readonly, nonatomic) BOOL hasMapAnnotationImage;
@property (copy, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasModel;
@property (copy, nonatomic) NSString *registrationPlate;
@property (readonly, nonatomic) BOOL hasRegistrationPlate;
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
