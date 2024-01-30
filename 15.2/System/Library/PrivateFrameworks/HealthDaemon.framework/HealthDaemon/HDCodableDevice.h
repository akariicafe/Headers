@class NSString, NSData;

@interface HDCodableDevice : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasHardwareVersion;
@property (retain, nonatomic) NSString *hardwareVersion;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) BOOL hasSoftwareVersion;
@property (retain, nonatomic) NSString *softwareVersion;
@property (readonly, nonatomic) BOOL hasLocalIdentifier;
@property (retain, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) BOOL hasFDAUDI;
@property (retain, nonatomic) NSString *fDAUDI;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
