@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDWifiMeasurement : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _entryTime;
    unsigned long long _exitTime;
    NSMutableArray *_locations;
    NSMutableArray *_wifiAccessPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_entryTime : 1; unsigned char has_exitTime : 1; unsigned char read_unknownFields : 1; unsigned char read_locations : 1; unsigned char read_wifiAccessPoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *wifiAccessPoints;
@property (nonatomic) BOOL hasEntryTime;
@property (nonatomic) unsigned long long entryTime;
@property (nonatomic) BOOL hasExitTime;
@property (nonatomic) unsigned long long exitTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)wifiAccessPointType;
+ (Class)locationType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (void)addLocation:(id)a0;
- (void)clearLocations;
- (void)addWifiAccessPoint:(id)a0;
- (unsigned long long)wifiAccessPointsCount;
- (void)clearWifiAccessPoints;
- (id)wifiAccessPointAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)locationAtIndex:(unsigned long long)a0;
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
- (unsigned long long)locationsCount;

@end
