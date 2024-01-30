@class PBDataReader, GEOPDEntity, GEOPDPlaceInfo, NSMutableArray, PBUnknownFields;

@interface GEOPDLinkedService : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDEntity *_entity;
    NSMutableArray *_hours;
    GEOPDPlaceInfo *_placeInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_entity : 1; unsigned char read_hours : 1; unsigned char read_placeInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEntity;
@property (retain, nonatomic) GEOPDEntity *entity;
@property (readonly, nonatomic) BOOL hasPlaceInfo;
@property (retain, nonatomic) GEOPDPlaceInfo *placeInfo;
@property (retain, nonatomic) NSMutableArray *hours;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)hoursType;
+ (id)linkedServicesForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hoursCount;
- (void)clearHours;
- (id)hoursAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addHours:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
