@class GEOPlace, GEOMapItemStorage, PBDataReader;

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

- (id)mapItem;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setMapItem:(id)a0;
- (id)dictionaryRepresentation;

@end
