@class NSMutableArray, PBUnknownFields;

@interface GEOPDGroundViewLabel : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_groundViewLabelInfos;
    unsigned long long _groundViewLocationId;
    struct { unsigned char has_groundViewLocationId : 1; } _flags;
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
