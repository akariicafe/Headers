@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {
    unsigned int _dataVersion;
    unsigned int _formatVersion;
    unsigned int _patchVersion;
    struct { unsigned char has_dataVersion : 1; unsigned char has_formatVersion : 1; unsigned char has_patchVersion : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
