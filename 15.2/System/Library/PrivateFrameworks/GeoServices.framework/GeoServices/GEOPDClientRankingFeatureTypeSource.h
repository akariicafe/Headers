@class PBUnknownFields;

@interface GEOPDClientRankingFeatureTypeSource : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _serverEntryType;
    int _suggestionType;
    struct { unsigned char has_serverEntryType : 1; unsigned char has_suggestionType : 1; } _flags;
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
