@class NSString, PBUnknownFields;

@interface GEOPDBasemapRegionMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_buildUnitAreaId;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
