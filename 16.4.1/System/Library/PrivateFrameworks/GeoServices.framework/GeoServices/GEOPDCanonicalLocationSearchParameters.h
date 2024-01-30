@class NSString, PBUnknownFields;

@interface GEOPDCanonicalLocationSearchParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_queryString;
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
