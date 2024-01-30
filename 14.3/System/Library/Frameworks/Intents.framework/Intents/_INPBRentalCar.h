@class NSString;

@interface _INPBRentalCar : PBCodable <_INPBRentalCar, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *make;
@property (readonly, nonatomic) BOOL hasMake;
@property (copy, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasModel;
@property (copy, nonatomic) NSString *rentalCarDescription;
@property (readonly, nonatomic) BOOL hasRentalCarDescription;
@property (copy, nonatomic) NSString *rentalCompanyName;
@property (readonly, nonatomic) BOOL hasRentalCompanyName;
@property (copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasType;
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
