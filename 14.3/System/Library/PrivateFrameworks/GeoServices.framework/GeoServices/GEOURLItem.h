@class PBDataReader, GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapItemStorage *_mapItemStorage;
    GEOPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _currentLocation;
    struct { unsigned char has_currentLocation : 1; unsigned char read_mapItemStorage : 1; unsigned char read_place : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPlace *place;
@property (nonatomic) BOOL hasCurrentLocation;
@property (nonatomic) BOOL currentLocation;
@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;

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
- (id)mapItem;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)setMapItem:(id)a0;

@end
