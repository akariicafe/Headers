@class NSMutableArray, PBUnknownFields;

@interface GEOPDResultRefinementBar : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_resultRefinements;
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
