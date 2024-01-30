@class GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOPDGroundMetadataTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_buildTables;
    NSMutableArray *_cameraMetadataTables;
    GEOTileCoordinate *_coord;
    NSMutableArray *_photoPositions;
    NSMutableArray *_storefronts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _tileBuildId;
    struct { unsigned char has_tileBuildId : 1; unsigned char read_buildTables : 1; unsigned char read_cameraMetadataTables : 1; unsigned char read_coord : 1; unsigned char read_photoPositions : 1; unsigned char read_storefronts : 1; unsigned char wrote_anyField : 1; } _flags;
}

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
- (id)dictionaryRepresentation;

@end
