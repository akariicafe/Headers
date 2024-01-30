@class NSMutableArray, PBUnknownFields;

@interface GEOPDTemplatePlace : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_templateDatas;
    unsigned int _numInlineItems;
    struct { unsigned char has_numInlineItems : 1; } _flags;
}

+ (id)templatedPlacesForPlaceData:(id)a0;

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
