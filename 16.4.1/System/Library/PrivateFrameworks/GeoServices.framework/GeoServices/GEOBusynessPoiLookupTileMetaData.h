@class NSString;

@interface GEOBusynessPoiLookupTileMetaData : PBCodable <NSCopying> {
    unsigned long long _tileId;
    NSString *_version;
    unsigned int _poiCount;
    struct { unsigned char has_tileId : 1; unsigned char has_poiCount : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
