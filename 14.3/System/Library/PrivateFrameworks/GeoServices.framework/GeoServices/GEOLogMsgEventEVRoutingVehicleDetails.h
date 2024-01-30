@class NSString, PBDataReader;

@interface GEOLogMsgEventEVRoutingVehicleDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_make;
    NSString *_model;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _batteryCapacity;
    struct { unsigned char has_batteryCapacity : 1; unsigned char read_make : 1; unsigned char read_model : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMake;
@property (retain, nonatomic) NSString *make;
@property (readonly, nonatomic) BOOL hasModel;
@property (retain, nonatomic) NSString *model;
@property (nonatomic) BOOL hasBatteryCapacity;
@property (nonatomic) unsigned int batteryCapacity;

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
- (id)initWithDictionary:(id)a0;

@end
