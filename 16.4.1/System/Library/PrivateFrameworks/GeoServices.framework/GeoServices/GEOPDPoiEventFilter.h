@class PBUnknownFields;

@interface GEOPDPoiEventFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _includeEventCategoryId;
    struct { unsigned char has_includeEventCategoryId : 1; } _flags;
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
