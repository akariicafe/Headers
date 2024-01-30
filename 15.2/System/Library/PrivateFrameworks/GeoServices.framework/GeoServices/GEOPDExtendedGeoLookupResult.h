@class NSString, PBUnknownFields;

@interface GEOPDExtendedGeoLookupResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_dataSourceId;
    int _status;
    BOOL _primaryFeatureMatched;
    struct { unsigned char has_status : 1; unsigned char has_primaryFeatureMatched : 1; } _flags;
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
