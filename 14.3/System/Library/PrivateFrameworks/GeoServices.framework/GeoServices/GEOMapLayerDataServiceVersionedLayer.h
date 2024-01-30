@class GEOMapLayerDataServiceLayer, PBDataReader, GEOMapLayerDataServiceVersion;

@interface GEOMapLayerDataServiceVersionedLayer : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapLayerDataServiceLayer *_layer;
    GEOMapLayerDataServiceVersion *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_layer : 1; unsigned char read_version : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLayer;
@property (retain, nonatomic) GEOMapLayerDataServiceLayer *layer;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) GEOMapLayerDataServiceVersion *version;

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
