@class PBDataReader, NSString, NSData, PBUnknownFields;

@interface GEOLPRInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_licensePlate;
    NSString *_powerTypeKey;
    unsigned long long _timestamp;
    NSString *_vehicleTypeKey;
    NSData *_versionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_timestamp : 1; unsigned char read_unknownFields : 1; unsigned char read_licensePlate : 1; unsigned char read_powerTypeKey : 1; unsigned char read_vehicleTypeKey : 1; unsigned char read_versionId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLicensePlate;
@property (retain, nonatomic) NSString *licensePlate;
@property (readonly, nonatomic) BOOL hasVehicleTypeKey;
@property (retain, nonatomic) NSString *vehicleTypeKey;
@property (readonly, nonatomic) BOOL hasPowerTypeKey;
@property (retain, nonatomic) NSString *powerTypeKey;
@property (readonly, nonatomic) BOOL hasVersionId;
@property (retain, nonatomic) NSData *versionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
