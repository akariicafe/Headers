@class NSMutableArray, PBUnknownFields;

@interface GEOPDAbout : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_texts;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)localizedPlaceDescription;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
