@class GEONonTiledInfo, NSMutableArray, PBDataReader;

@interface GEONonTiledModel : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEONonTiledInfo *_info;
    NSMutableArray *_materialMaps;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_info : 1; unsigned char read_materialMaps : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasInfo;
@property (retain, nonatomic) GEONonTiledInfo *info;
@property (retain, nonatomic) NSMutableArray *materialMaps;

+ (BOOL)isValid:(id)a0;
+ (Class)materialMapType;

- (id)initWithData:(id)a0;
- (id)materialMapAtIndex:(unsigned long long)a0;
- (void)addMaterialMap:(id)a0;
- (void)clearMaterialMaps;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (unsigned long long)materialMapsCount;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
