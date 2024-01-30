@class NSMutableArray, PBUnknownFields;

@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _resultProviderId;
    BOOL _enablePartialClientization;
    struct { unsigned char has_resultProviderId : 1; unsigned char has_enablePartialClientization : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifiers:(id)a0 resultProviderID:(int)a1;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
