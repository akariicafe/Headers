@class PBDataReader, GEOLocation, NSMutableArray;

@interface GEOWiFiQualityLocationSearch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLocation *_location;
    unsigned long long _radius;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_radius : 1; unsigned char read_location : 1; unsigned char read_tiles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (retain, nonatomic) NSMutableArray *tiles;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) unsigned long long radius;

+ (Class)tilesType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)tilesCount;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTiles:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearTiles;
- (id)tilesAtIndex:(unsigned long long)a0;

@end
