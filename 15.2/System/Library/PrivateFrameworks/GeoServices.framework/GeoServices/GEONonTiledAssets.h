@class NSMutableArray, PBDataReader;

@interface GEONonTiledAssets : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_materialMaps;
    NSMutableArray *_materials;
    NSMutableArray *_models;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_materialMaps : 1; unsigned char read_materials : 1; unsigned char read_models : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *models;
@property (retain, nonatomic) NSMutableArray *materials;
@property (retain, nonatomic) NSMutableArray *materialMaps;

+ (Class)modelType;
+ (BOOL)isValid:(id)a0;
+ (Class)materialType;
+ (Class)materialMapType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addModel:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)addMaterial:(id)a0;
- (void)addMaterialMap:(id)a0;
- (unsigned long long)modelsCount;
- (id)modelAtIndex:(unsigned long long)a0;
- (unsigned long long)materialsCount;
- (void)clearMaterials;
- (id)materialAtIndex:(unsigned long long)a0;
- (unsigned long long)materialMapsCount;
- (void)clearMaterialMaps;
- (id)materialMapAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)clearModels;

@end
