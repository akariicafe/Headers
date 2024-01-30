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
+ (Class)materialMapType;
+ (Class)materialType;

- (id)initWithData:(id)a0;
- (id)modelAtIndex:(unsigned long long)a0;
- (id)materialMapAtIndex:(unsigned long long)a0;
- (void)clearMaterials;
- (void)addMaterialMap:(id)a0;
- (unsigned long long)materialsCount;
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
- (void)addMaterial:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)materialAtIndex:(unsigned long long)a0;
- (void)addModel:(id)a0;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearModels;
- (unsigned long long)modelsCount;
- (void).cxx_destruct;

@end
