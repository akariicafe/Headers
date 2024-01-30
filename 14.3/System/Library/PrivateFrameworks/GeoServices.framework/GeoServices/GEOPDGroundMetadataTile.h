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

@property (retain, nonatomic) NSMutableArray *photoPositions;
@property (retain, nonatomic) NSMutableArray *storefronts;
@property (retain, nonatomic) NSMutableArray *buildTables;
@property (retain, nonatomic) NSMutableArray *cameraMetadataTables;
@property (readonly, nonatomic) BOOL hasCoord;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (nonatomic) BOOL hasTileBuildId;
@property (nonatomic) unsigned int tileBuildId;

+ (Class)storefrontType;
+ (Class)photoPositionType;
+ (Class)buildTableType;
+ (Class)cameraMetadataTableType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addPhotoPosition:(id)a0;
- (void)addStorefront:(id)a0;
- (void)addBuildTable:(id)a0;
- (void)addCameraMetadataTable:(id)a0;
- (unsigned long long)photoPositionsCount;
- (void)clearPhotoPositions;
- (id)photoPositionAtIndex:(unsigned long long)a0;
- (unsigned long long)storefrontsCount;
- (void)clearStorefronts;
- (id)storefrontAtIndex:(unsigned long long)a0;
- (unsigned long long)buildTablesCount;
- (void)clearBuildTables;
- (id)buildTableAtIndex:(unsigned long long)a0;
- (unsigned long long)cameraMetadataTablesCount;
- (void)clearCameraMetadataTables;
- (id)cameraMetadataTableAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
