@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {
    unsigned int _dataVersion;
    unsigned int _formatVersion;
    unsigned int _patchVersion;
    struct { unsigned char has_dataVersion : 1; unsigned char has_formatVersion : 1; unsigned char has_patchVersion : 1; } _flags;
}

@property (nonatomic) BOOL hasDataVersion;
@property (nonatomic) unsigned int dataVersion;
@property (nonatomic) BOOL hasFormatVersion;
@property (nonatomic) unsigned int formatVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) unsigned int patchVersion;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
